#ifndef LIBBY
#define LIBBY

#include "libBareMetal.h"

void print(char *str) {

	int i = 0;
	while (str[i++] != 0) {
	}
	b_output(str, i);
}

#endif
