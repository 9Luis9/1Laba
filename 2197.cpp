#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
int main ()
{
	int x, y, z, a,b,c;
    cin >>x >> y;
	z=x*y;
	a=x+y;
	b=x-y;
	c=x/y;
	printf("Z=%d\n",z);
	printf("A=%d\n",a);
    printf("B=%d\n",b);
    printf("C=%d\n",c);
	getch ();
}