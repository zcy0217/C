#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ch4 p.45
	int a=0,b=1;
	printf("%d\n", !a&&!b);
	printf("%d\n", !a||!b); 
	printf("%d\n", a&&a&&b); 
	printf("%d\n", a||b||a); 

	return 0;
	}

