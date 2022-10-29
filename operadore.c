/*operadores incrementales*/

#include <stdio.h>

int main()
{ 

	int a=7,b;
	b=++a+3;
	b=b+a+++5;
	printf("%d,%d",a,b);
	return 0;

}
