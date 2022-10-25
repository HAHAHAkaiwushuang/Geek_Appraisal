#include <stdio.h>
#include <stdlib.h>

int main() 
{
	double y=0;
	double a,b,c,x;
	printf("a=");
	scanf("%lf",&a);
	printf("    x             y\n");
	b=a;
	c=b+1.0;
	for(x=0.001;c-b>0.000001;x+=0.001)
	{
		y=0.999*b;
		c=b;
		b=y;
		printf("%f      %f\n",x,y);
	}
	return 0;
}

