// helloc.c -- Output a 'hello world' message

// gcc -c -m64 -nostdlib -nostartfiles -nodefaultlibs -o helloc.o helloc.c
// gcc -c -m64 -nostdlib -nostartfiles -nodefaultlibs -o libBareMetal.o libBareMetal.c
// ld -T c.ld -o helloc.app helloc.o libBareMetal.o

#include "libBareMetal.h"

int main(void)
{
	// TODO
	b_output("Hey there!\n", 14);
	print("Hey there!\n");
	return 0;
}
