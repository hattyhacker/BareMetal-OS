// helloc.c -- Output a 'hello world' message

// gcc -c -m64 -nostdlib -nostartfiles -nodefaultlibs -o helloc.o helloc.c
// gcc -c -m64 -nostdlib -nostartfiles -nodefaultlibs -o libBareMetal.o libBareMetal.c
// ld -T c.ld -o helloc.app helloc.o libBareMetal.o

#include "libBareMetal.h"
//#include "lib.h"
//void printli(char *str) {

	/*
	int i = 0;
	for (int c=0;;c++) {
		b_output(str[c], 1);
		if (str[c] == 0) break;
		i++;
	}
	b_output(str, i);
	*/
//}

int main(void)
{
	//b_output("Hello, world!\n", 14);
	b_output("Hello, world!\n");
	b_output("Hi fish");
	/*
	 * char ch = b_input();
	char *str;
	str[0] = ch;
	str[1] = 0;
	b_output(str, 1);
	*/
	//print("Hi\0");
	return 0;
}
