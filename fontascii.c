__code char fontascii[] = {
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,//"NUL" 
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"SOH" 
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"STX" 
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"ETX" 
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"EOT" 
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"ENO" 
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"ACK" 
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"BEL" 
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"BS"
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,//"TAB" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,//" "
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,//" " 
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"VT"
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"FF" 
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"SO"
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"SI" 
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"DLE"
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"DC1" 
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"DC2"
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"DC3" 
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"DC4"
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"NAK"
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"SYN"
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"ETB"
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"CAN"
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"EM"
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"SUB"
0xFF,0xFF,0xFF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xFF,0xFF,//"ESC"
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,//"FS"
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,//"GS"
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,//"RS"
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,//"US"
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,//" "
0xFF,0xFF,0xFF,0xDF,0xDF,0xDF,0xDF,0xDF,0xFF,0xDF,0xFF,0xFF,//"!"
0xFF,0xFF,0xAF,0xAF,0xAF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,//"""
0xFF,0xFF,0xFF,0xFF,0xF5,0xC0,0xEB,0x81,0xD7,0xFF,0xFF,0xFF,//"#"
0xFF,0xFF,0xEF,0xEF,0xC3,0xAF,0xCF,0xE7,0xEB,0x87,0xEF,0xEF,//"$" 
0xFF,0xFF,0xFF,0xCE,0xB5,0xB5,0xCB,0xFA,0xFA,0xF7,0xFF,0xFF ,//"%" 
0xFF,0xFF,0xFF,0xCF,0xB7,0xB7,0xCD,0xB1,0xB9,0xC4,0xFF,0xFF ,//"&" 
0xFF,0xFF,0xBF,0xBF,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF ,//"'" 
0xFF,0xFF,0xCF,0xDF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xDF,0xCF ,//"(" 
0xFF,0xFF,0xBF,0xDF,0xDF,0xEF,0xEF,0xEF,0xEF,0xDF,0xDF,0xBF ,//")" 
0xFF,0xEF,0xAB,0xC7,0xAB,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF ,//"*" 
0xFF,0xFF,0xFF,0xFF,0xF7,0xF7,0x80,0xF7,0xF7,0xFF,0xFF,0xFF ,//"+" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xDF,0xBF,0xFF ,//"," 
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8F,0xFF,0xFF,0xFF,0xFF,0xFF ,//"-" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xDF,0xFF,0xFF ,//"." 
0xFF,0xFF,0xF7,0xEF,0xEF,0xDF,0xDF,0xDF,0xBF,0xBF,0x7F,0xFF ,//"/" 
0xFF,0xFF,0xFF,0xC7,0xBB,0xBB,0xBB,0xBB,0xBB,0xC7,0xFF,0xFF ,//"0" 
0xFF,0xFF,0xFF,0xEF,0x8F,0xEF,0xEF,0xEF,0xEF,0x83,0xFF,0xFF ,//"1" 
0xFF,0xFF,0xFF,0xC7,0xBB,0xFB,0xF7,0xEF,0xDF,0x83,0xFF,0xFF ,//"2" 
0xFF,0xFF,0xFF,0xC7,0xBB,0xFB,0xE7,0xFB,0xBB,0xC7,0xFF,0xFF ,//"3" 
0xFF,0xFF,0xFF,0xF7,0xC7,0x97,0x77,0x03,0xF7,0xF7,0xFF,0xFF ,//"4" 
0xFF,0xFF,0xFF,0x83,0xBF,0x87,0xFB,0xFB,0xBB,0xC7,0xFF,0xFF ,//"5" 
0xFF,0xFF,0xFF,0xE7,0xDF,0xBF,0x87,0xBB,0xBB,0xC7,0xFF,0xFF ,//"6" 
0xFF,0xFF,0xFF,0x83,0xFB,0xF7,0xF7,0xEF,0xEF,0xDF,0xFF,0xFF ,//"7" 
0xFF,0xFF,0xFF,0xC7,0xBB,0xBB,0xC7,0xBB,0xBB,0xC7,0xFF,0xFF ,//"8" 
0xFF,0xFF,0xFF,0xC7,0xBB,0xBB,0xC3,0xFB,0xF7,0xCF,0xFF,0xFF ,//"9" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xDF,0xFF,0xDF,0xDF,0xFF,0xFF ,//":" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xDF,0xFF,0xDF,0xDF,0xBF,0xFF ,//",//" 
0xFF,0xFF,0xFF,0xFF,0xFD,0xE3,0x9F,0xE3,0xFD,0xFF,0xFF,0xFF ,//"<" 
0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0xFF,0x80,0xFF,0xFF,0xFF,0xFF ,//"=" 
0xFF,0xFF,0xFF,0xFF,0xDF,0xE3,0xFC,0xE3,0xDF,0xFF,0xFF,0xFF ,//">" 
0xFF,0xFF,0xFF,0x8F,0xF7,0xF7,0xEF,0xDF,0xFF,0xDF,0xFF,0xFF ,//"?" 
0xFF,0xFF,0xFF,0xE0,0xDF,0xB1,0xAD,0xAD,0xA2,0x9F,0xE1,0xFF ,//"@" 
0xFF,0xFF,0xFF,0xE7,0xE7,0xDB,0xDB,0xC3,0xBD,0xBD,0xFF,0xFF ,//"A" 
0xFF,0xFF,0xFF,0x87,0xBB,0xBB,0x83,0xBD,0xBD,0x83,0xFF,0xFF ,//"B" 
0xFF,0xFF,0xFF,0xE1,0xDE,0xBF,0xBF,0xBF,0xDE,0xE1,0xFF,0xFF ,//"C" 
0xFF,0xFF,0xFF,0x83,0xBD,0xBE,0xBE,0xBE,0xBD,0x83,0xFF,0xFF ,//"D" 
0xFF,0xFF,0xFF,0x83,0xBF,0xBF,0x83,0xBF,0xBF,0x83,0xFF,0xFF ,//"E" 
0xFF,0xFF,0xFF,0x83,0xBF,0xBF,0x87,0xBF,0xBF,0xBF,0xFF,0xFF ,//"F" 
0xFF,0xFF,0xFF,0xE1,0xDE,0xBF,0xB8,0xBE,0xDE,0xE1,0xFF,0xFF ,//"G" 
0xFF,0xFF,0xFF,0xBD,0xBD,0xBD,0x81,0xBD,0xBD,0xBD,0xFF,0xFF ,//"H" 
0xFF,0xFF,0xFF,0x8F,0xDF,0xDF,0xDF,0xDF,0xDF,0x8F,0xFF,0xFF ,//"I" 
0xFF,0xFF,0xFF,0x8F,0xEF,0xEF,0xEF,0xEF,0xEF,0x1F,0xFF,0xFF ,//"J" 
0xFF,0xFF,0xFF,0xBB,0xB7,0xAF,0x8F,0xA7,0xB3,0xB9,0xFF,0xFF ,//"K" 
0xFF,0xFF,0xFF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0x83,0xFF,0xFF ,//"L" 
0xFF,0xFF,0xFF,0x9C,0x9C,0xAA,0xAA,0xB6,0xB6,0xBE,0xFF,0xFF ,//"M" 
0xFF,0xFF,0xFF,0x9D,0x8D,0xAD,0xB5,0xB1,0xB9,0xB9,0xFF,0xFF ,//"N" 
0xFF,0xFF,0xFF,0xC1,0x9C,0xBE,0xBE,0xBE,0x9C,0xC1,0xFF,0xFF ,//"O" 
0xFF,0xFF,0xFF,0x87,0xBB,0xBB,0xBB,0x87,0xBF,0xBF,0xFF,0xFF ,//"P" 
0xFF,0xFF,0xFF,0xC1,0x9C,0xBE,0xBE,0xBE,0x9D,0xC1,0xFB,0xFC ,//"Q" 
0xFF,0xFF,0xFF,0x87,0xBB,0xBB,0x87,0xB7,0xBB,0xBD,0xFF,0xFF ,//"R" 
0xFF,0xFF,0xFF,0xC3,0xBD,0xBF,0xC3,0xFD,0xBD,0xC3,0xFF,0xFF ,//"S" 
0xFF,0xFF,0xFF,0x01,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xFF,0xFF ,//"T" 
0xFF,0xFF,0xFF,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xC3,0xFF,0xFF ,//"U" 
0xFF,0xFF,0xFF,0xBD,0xBD,0xDB,0xDB,0xDB,0xE7,0xE7,0xFF,0xFF ,//"V" 
0xFF,0xFF,0xFF,0xBF,0xBB,0xD9,0xD5,0xD5,0xE6,0xEE,0xFF,0xFF ,//"W" 
0xFF,0xFF,0xFF,0xBD,0xDB,0xDB,0xE7,0xDB,0xDB,0xBD,0xFF,0xFF ,//"X" 
0xFF,0xFF,0xFF,0x7D,0xBB,0x97,0xD7,0xEF,0xEF,0xEF,0xFF,0xFF ,//"Y" 
0xFF,0xFF,0xFF,0x81,0xFD,0xFB,0xE7,0xDF,0xBF,0x81,0xFF,0xFF ,//"Z" 
0xFF,0xFF,0x8F,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0x8F ,//"[" 
0xFF,0xFF,0x7F,0xBF,0xBF,0xDF,0xDF,0xDF,0xEF,0xEF,0xF7,0xFF ,//"\" 
0xFF,0xFF,0x8F,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0x8F ,//"]" 
0xFF,0xFF,0xFF,0xF7,0xEB,0xDD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF ,//"^" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x01 ,//"_" 
0xFF,0xFF,0xDF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF ,//"`" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xFB,0xC3,0xBB,0x83,0xFF,0xFF ,//"a" 
0xFF,0xFF,0xBF,0xBF,0xBF,0x87,0xBB,0xBB,0xBB,0x87,0xFF,0xFF ,//"b" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xBF,0xBF,0xBF,0xC3,0xFF,0xFF ,//"c" 
0xFF,0xFF,0xFB,0xFB,0xFB,0xC3,0xBB,0xBB,0xBB,0xC3,0xFF,0xFF ,//"d" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xC7,0xBB,0x83,0xBF,0xC3,0xFF,0xFF ,//"e" 
0xFF,0xFF,0xCF,0xBF,0xBF,0x0F,0xBF,0xBF,0xBF,0xBF,0xFF,0xFF ,//"f" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xBB,0xBB,0xBB,0xC3,0xFB,0xC7 ,//"g" 
0xFF,0xFF,0xBF,0xBF,0xBF,0x87,0xBB,0xBB,0xBB,0xBB,0xFF,0xFF ,//"h" 
0xFF,0xFF,0xFF,0xBF,0xFF,0xBF,0xBF,0xBF,0xBF,0xBF,0xFF,0xFF ,//"i" 
0xFF,0xFF,0xFF,0xDF,0xFF,0x9F,0xDF,0xDF,0xDF,0xDF,0xDF,0x3F ,//"j" 
0xFF,0xFF,0xBF,0xBF,0xBF,0xB7,0xAF,0x8F,0xA7,0xBB,0xFF,0xFF ,//"k" 
0xFF,0xFF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xFF,0xFF ,//"l" 
0xFF,0xFF,0xFF,0xFF,0xFF,0x84,0xBB,0xBB,0xBB,0xBB,0xFF,0xFF ,//"m" 
0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0xBB,0xBB,0xBB,0xBB,0xFF,0xFF ,//"n" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xC7,0xBB,0xBB,0xBB,0xC7,0xFF,0xFF ,//"o" 
0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0xBB,0xBB,0xBB,0x87,0xBF,0xBF ,//"p" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xBB,0xBB,0xBB,0xC3,0xFB,0xFB ,//"q" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xA7,0x9F,0xBF,0xBF,0xBF,0xFF,0xFF ,//"r" 
0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0xBF,0xCF,0xF7,0x87,0xFF,0xFF ,//"s" 
0xFF,0xFF,0xFF,0xFF,0xBF,0x0F,0xBF,0xBF,0xBF,0xCF,0xFF,0xFF ,//"t" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xBB,0xBB,0xBB,0xBB,0xC3,0xFF,0xFF ,//"u" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xBB,0xBB,0xD7,0xD7,0xEF,0xFF,0xFF ,//"v" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xBE,0xB6,0xAA,0xCD,0xDD,0xFF,0xFF ,//"w" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xBB,0xD7,0xEF,0xD7,0xBB,0xFF,0xFF ,//"x" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xBB,0xD7,0xD7,0xD7,0xEF,0xEF,0xDF ,//"y" 
0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0xE7,0xCF,0x9F,0x87,0xFF,0xFF ,//"z" 
0xFF,0xFF,0xF3,0xEF,0xEF,0xEF,0xEF,0x9F,0xEF,0xEF,0xEF,0xF3 ,//"{" 
0xFF,0xFF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF ,//"|" 
0xFF,0xFF,0x9F,0xEF,0xEF,0xEF,0xEF,0xF3,0xEF,0xEF,0xEF,0x9F ,//"}" 
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC6,0xB1,0xFF,0xFF,0xFF,0xFF ,//"~" 
0xFF,0xFF,0xFF,0x1F,0x5F,0x5F,0x5F,0x5F,0x5F,0x1F,0xFF,0xFF ,//"??" 
0x00,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x00 ,//"ERROR"
};
__code char *getfont(char c)
{
	if(c & 0x80)
		return &fontascii[128*12];
	return &fontascii[c*12];
}

