#include <stdio.h>

int brinary(void)/*print the bra-form*/
{
	printf("00000000	NUL   00000001	SOH   00000010	STX   00000011	ETX   00000100	EOT   00000101	ENQ   00000110	ACK   00000111	BEL\n");
	printf("00001000	BS    00001001	HT    00001010	LF    00001011	VT    00001100	FF    00001101	CR    00001110	SO    00001111	SI\n");
	printf("00010000	DLE   00010001	DC1   00010010	DC2   00010011	DC3   00010100	DC4   00010101	NAK   00010110	SYN   00010111	ETB\n");
	printf("00011000	CAN   00011001	EM    00011010	SUB   00011011	ESC   00011100	FS    00011101	GS    00011110	RS    00011111	US\n");
	printf("00100000	space 00100001	!     00100010	\"    00100011	#     00100100	$     00100101	%%     00100110	&     00100111	'\n");
	printf("00101000	(     00101001	)     00101010	*     00101011	+     00101100	,     00101101	-     00101110	.     00101111	/ \n");
	printf("00110000	0     00110001	1     00110010	2     00110011	3     00110100	4     00110101	5     00110110	6     00110111	7\n");
	printf("00111000	8     00111001	9     00111010	:     00111011	;     00111100	<     00111101	=     00111110	>     00111111	?\n");
	printf("01000000	@     01000001	A     01000010	B     01000011	C     01000100	D     01000101	E     01000110	F     01000111	G\n");
	printf("01001000	H     01001001	I     01001010	J     01001011	K     01001100	L     01001101	M     01001110	N     01001111	O\n");
	printf("01010000	P     01010001	Q     01010010	R     01010011	S     01010100	T     01010101	U     01010110	V     01010111	W\n");
	printf("01011000	X     01011001	Y     01011010	Z     01011011	[     01011100	\\     01011101	]     01011110	^     01011111	_\n");
	printf("01100000	`     01100001	a     01100010	b     01100011	c     01100100	d     01100101	e     01100110	f     01100111	g\n");
	printf("01101000	h     01101001	i     01101010	j     01101011	k     01101100	l     01101101	m     01101110	n     01101111	o\n");
	printf("01110000	p     01110001	q     01110010	r     01110011	s     01110100	t     01110101	u     01110110	v     01110111	w\n");
	printf("01111000	x     01111001	y     01111010	z     01111011	{     01111100	|     01111101	}     01111110	~     01111111	DEL\n");

	return 0;
}

int octal(void)/*print the oct-form*/
{
	printf("0	NUL   1  SOH   2  STX   3  ETX   4 EOT   5 ENQ   6 ACK   7 BEL\n");
	printf("10	BS    11 HT    12 LF    13 VT    14	FF   15	CR   16	SO   17	SI\n");
	printf("20	DLE   21 DC1   22 DC2   23 DC3   24	DC4  25	NAK  26	SYN  27	ETB\n");
	printf("30	CAN   31 EM    32 SUB   33 ESC   34	FS   35	GS   36	RS   37	US\n");
	printf("40	space 41 !     42 \"    43 #     44	$    45	%%    46	&    47	'\n");
	printf("50	(     51 )     52 *     53 +     54	,    55	-    56	.    57	/\n");
	printf("60	0     61 1     62 2     63 3     64	4    65	5    66	6    67	7\n");
	printf("70	8     71 9     72 :     73 ;     74	<    75	=    76	>    77	?\n");
	printf("100	@     101 A    102	B   103	C    104 D   105 E   106 F   107 G\n");
	printf("110	H     111 I    112	J   113	K    114 L   115 M   116 N   117 O\n");
	printf("120	P     121 Q    122	R   123	S    124 T   125 U   126 V   127 W\n");
	printf("130	X     131 Y    132	Z   133	[    134 \\   135 ]   136 ^   137 _\n");
	printf("140	`     141 a    142	b   143	c    144 d   145 e   146 f   147 g \n");
	printf("150	h     151 i    152	j   153	k    154 l   155 m   156 n   157 o\n");
	printf("160	p     161 q    162	r   163	s    164 t   165 u   166 v   167 w\n");
	printf("170	x     171 y    172	z   173	{    174 |   175 }   176 ~   177 DEL");

	return 0;
}

int decimal(void)/*print the dec-form*/
{
	printf("0 NUL   1 SOH   2 STX   3 ETX   4 EOT   5 ENQ   6 ACK   7 BEL\n");
	printf("8 BS    9 HT    10	LF  11	VT  12	FF  13	CR  14	SO  15	SI\n");
	printf("16 DLE  17 DC1  18	DC2 19	DC3 20	DC4 21	NAK 22	SYN 23	ETB\n");
	printf("24 CAN  25	EM  26	SUB 27	ESC 28	FS  29	GS  30	RS  31	US\n");
	printf("32 space33	!   34	\"  35	#   36	$   37	%%   38	&   39	'\n");
	printf("40 (    41	)   42	*   43	+   44	,   45	-   46	.   47	/\n");
	printf("48	0   49	1   50	2   51	3   52	4   53	5   54	6   55	7\n");
	printf("56	8   57	9   58	:   59	;   60	<   61	=   62	>   63	?\n");
	printf("64	@   65	A   66	B   67	C   68	D   69	E   70	F   71	G\n");
	printf("72	H   73	I   74	J   75	K   76	L   77	M   78	N   79	O\n");
	printf("80	P   81	Q   82	R   83	S   84	T   85	U   86	V   87	W\n");
	printf("88	X   89	Y   90	Z   91	[   92	\\   93	]   94	^   95	_\n");
	printf("96	`   97	a   98	b   99	c   100	d   101	e   102	f   103	g \n");
	printf("104	h   105	i   106	j   107	k   108	l   109	m   110	n   111	o\n");
	printf("112	p   113	q   114	r   115	s   116	t   117 u   118	v   119	w\n");
	printf("120	x   121	y   122	z   123	{   124	|   125	}   126	~   127	DEL\n");

	
	return 0;
}

int hexadecimal(void)/*print the hex form*/
{
	printf("0	NUL   1	SOH   2	STX   3	ETX   4	EOT   5	ENQ   6 ACK   7 BEL\n");
	printf("8	BS    9	HT    0A LF   0B VT   0C FF   0D CR   0E SO   0F SI\n");
	printf("10	DLE   11 DC1  12 DC2  13 DC3  14 DC4  15 NAK  16 SYN  17 ETB\n");
	printf("18	CAN   19 EM   1A SUB  1B ESC  1C FS   1D GS   1E RS   1F US\n");
	printf("20	space 21 !    22 \"   23 #    24 $    25 %%    26 &    27 '\n");
	printf("28	(     29 )    2A *    2B +    2C ,    2D -    2E .    2F / \n");
	printf("30	0     31 1    32 2    33 3    34 4    35 5    36 6    37 7\n");
	printf("38	8     39 9    3A :    3B ;    3C <    3D =    3E >    3F  \n");
	printf("40	@     41 A    42 B    43 C    44 D    45 E    46 F    47 G\n");
	printf("48	H     49 I    4A J    4B K    4C L    4D M    4E N    4F O\n");
	printf("50	P     51 Q    52 R    53 S    54 T    55 U    56 V    57 W\n");
	printf("58	X     59 Y    5A Z    5B [    5C \\    5D ]    5E ^    5F _\n");
	printf("60	`     61 a    62 b    63 c    64 d    65 e    66 f    67 g \n");
	printf("68	h     69 i    6A j    6B k    6C l    6D m    6E n    6F o\n");
	printf("70	p     71 q    72 r    73 s    74 t    75 u    76 v    77 w\n");
	printf("78	x     79 y    7A z    7B {    7C |    7D }    7E ~    7F DEL\n");

	
	return 0;
}

int help(void)/*print the help*/
{
	printf("input the string to search ascii form:\n");
	printf("brinary:    ascii -b");
	printf("octal:      ascii -o");
	printf("decimal:    ascii -d");
	printf("hexadecimal:ascii -h");
}

int main(int argc,char *argv[])/*use the cmd-commend to receive input*/
{
	if(argc==1)
	{
		printf("please input the right string\n");
	}
	else
	{ 
	    if(strcmp("-b",argv[1])==0)
	    {
	    	brinary();
		}
		else if(strcmp("-o",argv[1])==0)
		{
			octal();
		}
		else if(strcmp("-d",argv[1])==0)
		{
			decimal();
		}
		else if(strcmp("-h",argv[1])==0) 
		{
			hexadecimal();
		}
		else if(strcmp("-help",argv[1])==0)
		{
			help();
		}
		else
		{
			printf("please input 'ascii -help'for help");
		}
	} 
	return 0;
}
