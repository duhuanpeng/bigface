extern __code char *getfont(char c);
extern void matrix_init(void);
extern void matrix_d(void);

void delay(int n)
{
	n = n*3333;
	while(n--);
}


int main(void)
{ 
	matrix_init();
	for(;;){
		matrix_d();
		delay(2);
	}

	return 0;
}

