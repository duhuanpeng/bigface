extern int getfont(char c);

int main(void)
{

	while(1)
		if(getfont('C')<0) break;
	

	return 0;
}

