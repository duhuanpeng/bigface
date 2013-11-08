
/* __sfr __at (0xA2) AUX??; */
static int prt;
void switchdptr(void) __naked
{
#ifdef CONFIG_DUALDPTR
	inc 0xA2;

#else
	prt;
	__asm
		xch A, _prt
		xch A, dpl
		xch A, _prt
		
		xch A, (_prt+1)
		xch A, dph
		xch A, (_prt+1)
		ret
	__endasm;
#endif
}
