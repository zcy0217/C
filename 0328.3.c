#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ch4 p.61
	int a = 0, b = 0;
	int c = 0, d = 0;
	b = (a++) + (++a); 
	printf("a=%d,b=%d\n",a,b);
	d = (c--) - (--c); 
	printf("c=%d,d=%d",c,d);

	return 0;
	}

