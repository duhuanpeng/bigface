#if 0
static __sbit __at (0x0080) SDI;
static __sbit __at (0x0081) SCK;
static __sbit __at (0x0082) RCK;
static __sbit __at (0x0083) CLR0;
static __sbit __at (0x0084) OE0;
#else
#define SDI	P0.7
#define SCK	P0.4
#define RCK	P0.0
#endif

#define BIT(n) (1<<n)
#define NRBLOCK 27

//static __xdata __at (0x0000) char buf[3*9*8+8];
static __xdata char buf[2048];
/* 
   pointer physically in internal ram pointing to object in external
   ram 
 */
static int prt;


static __data char sel=0;
static __code char selbit[8] = {0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe};

static __data char i;

void matrix_init(void)
{
	const char OFF = 0xff;
	int i;
	prt = (int)buf;
	for(i=0;i<1024;i++)
		buf[i] = OFF;

	buf[prt++] = 0xA0;
	buf[prt++] = 0x7F;
	buf[prt++] = 0x00;
	prt = (int)buf;
	sel = 0;

}

void matrix_d(void) __naked
{
	sel &= 7;
__asm
;x	clr	P0.2
;x	sjmp	.

	mov	A, _sel 
	jnz	writesel
	lcall	resetdptr
writesel:
	mov	dptr, #_selbit
	movc	A, @A+dptr
	lcall	write_acc
writedata:
	lcall	restoredptr
	mov	_i, #NRBLOCK
L1:	movx	A, @dptr
	lcall	write_acc
	inc	dptr
	djnz	_i, L1

	lcall	flush

	inc	_sel
	lcall	savedptr
	ret
;	-	-	-
resetdptr:
	mov	dptr, #_buf
	mov	_prt, dpl
	mov	_prt+1, dph
	ret
savedptr:
	mov	_prt, dpl
	mov	_prt+1, dph
	ret
restoredptr:
	mov	dpl, _prt
	mov	dph, _prt+1
	ret
write_c:
	rrc	A
	mov	SDI, C
	setb	SCK
	clr	SCK
	ret
write_acc:
	lcall	write_c
	lcall	write_c
	lcall	write_c
	lcall	write_c
	lcall	write_c
	lcall	write_c
	lcall	write_c
	lcall	write_c 
	ret
flush:
	setb	RCK
	clr	RCK
	ret
__endasm;
	
}

