extern __code char *getfont(char c);
extern void matrix_init(void);
extern void matrix_d(void);
extern void blkcpy(char n, char *prt);
extern void blkset(char i, char c);
extern void blkcpyn(char i, char *prt, char n);

/* fontascii.c */
extern __code char *getfont(char c);


unsigned char blk = 0;
void blksetchar(char c)
{
	blkcpyn(blk, getfont(c), 24);
	blk ++;
	blk %= 9;
	return;
}
void matrix_settext(char *txt)
{
	char i = 0;
	while(i<9 && *txt)
		blkcpyn(i++, getfont(*txt++), 12);
}

void delay(int n)
{
	n = n*3333;
	while(n--);
}


int main(void)
{ 
	matrix_init();
	matrix_settext("123456789");
	for(;;){
		matrix_d();
		delay(0);
	}

	return 0;
}

