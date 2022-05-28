#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ch4 p.60
	int a,b=1,c=1;
	a=(++b)+(++c);
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	a=(b++)+(++c);
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	a=(++b)+(c--);
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	a=(b--)+(--c);     
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	//++和--在前面先做，反之算完後再做 
	return 0;
	}
