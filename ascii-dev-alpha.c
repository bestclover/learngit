#include <stdio.h>

int brinary(void)
{
	printf("\n");
	printf("01000001	A   01000010	B   01000011	C   01000100	D   01000101	E\n");
	printf("01000110	F   01000111	G   01001000	H   01001001	I   01001010	J\n");
	printf("01001011	K   01001100	L   01001101	M   01001110	N   01001111	O\n");
	printf("01010000	P   01010001	Q   01010010	R   01010011	S   01010100	T\n");
	printf("01010101	U   01010110	V   01010111	W   01011000	X   01011001	Y\n");
	printf("01011010	Z\n");
	printf("01100001	a   01100010	b   01100011	c   01100100	d   01100101	e\n");
	printf("01100110	f   01100111	g   01101000	h   01101001	i   01101010	j\n");
	printf("01101011	k   01101100	l   01101101	m   01101110	n   01101111	o\n");
	printf("01110000	p   01110001	q   01110010	r   01110011	s   01110100	t\n");
	printf("01110101	u   01110110	v   01110111	w   01111000	x   01111001	y\n");
	printf("01111010	z\n");
	printf("\n");
	getchar();
	return 0;
}

int octal(void)
{
	printf("\n");
	printf("101	A   102	B   103	C   104	D   105	E   106	F\n");
	printf("107	G   110	H   111	I   112	J   113	K   114	L\n");
	printf("115	M   116	N   117	O   120	P   121	Q   122	R\n");
	printf("123	S   124	T   125	U   126	V   127	W   130	X\n");
	printf("131	Y   132	Z\n");
	printf("141	a   142	b   143	c   144	d   145	e   146	f\n");
	printf("147	g   150	h   151	i   152	j   153	k   154	l\n");
	printf("155	m   156	n   157	o   160	p   161	q   162	r\n");
	printf("163	s   164	t   165	u   166	v   167	w   170	x\n");
	printf("171	y   172	z\n");
    printf("\n");
	getchar();
	return 0;
}

int decimal(void)
{
	printf("\n");
	printf("65  A    66	B    67	C    68	D    69	E    70	F\n");
	printf("71	G    72	H    73	I    74	J    75	K    76	L\n");
	printf("77	M    78	N    79	O    80	P    81	Q    82	R\n");
	printf("83	S    84	T    85	U    86	V    87	W    88	X\n");
	printf("89	Y    90	Z\n");
	printf("97	a    98	b    99	c   100	d   101	e   102	f\n");
	printf("103	g   104	h   105	i   106	j   107	k   108	l\n");
	printf("109	m   110	n   111	o   112	p   113	q   114	r\n");
	printf("115	s   116	t   117	u   118	v   119	w   120	x\n");
	printf("121	y   122	z\n");
    printf("\n");
	getchar();
	return 0;
}

int hexadecimal(void)
{
	printf("\n");
	printf("41	A    42	B    43	C    44	D    45	E    46	F\n");
	printf("47	G    48	H    49	I    4A	J    4B	K    4C L\n");
	printf("4D	M    4E	N    4F	O    50	P    51	Q    52	R\n");
	printf("53	S    54	T    55	U    56	V    57	W    58	X\n");
	printf("59	Y    5A	Z\n");
	printf("61	a    62	b    63	c    64	d    65	e    66	f\n");
	printf("67	g    68	h    69	i    6A	j    6B	k    6C l\n");
	printf("6D 	m    6E	n    6F	o    70	p    71	q    72	r\n");
	printf("73	s    74	t    75	u    76	v    77	w    78	x\n");
	printf("79	y    7A z\n");
    printf("\n");
	getchar();
	return 0;
}

int main(void)
{
	int count;

	printf("welcome\n");
	printf("brinary:2  octal:8  demical:10  hexdecimal:16\n");
	printf("please input the number of form you want to confirn\n");
    scanf("%d", &count);
	while (1)
	{
		switch (count)
		{
		case 2:brinary();
			scanf("%d", &count);
			break;
		case 8:octal();
			scanf("%d", &count);
			break;
		case 10:decimal();
			scanf("%d", &count);
			break;
		case 16:hexadecimal();
			scanf("%d", &count);
			break;
		default:printf("you input the wrong thing\n");
			printf("please input the right number\n");
			scanf("%d", &count);
		}
	}
	getchar();
}
