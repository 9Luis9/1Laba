#include stdafx.h
#include <iostream>
#include <conio.h>
using namespace std;
int sum(int a,int b)
{ int c=a+b;
return c;
}
int raz(int a,int b)
{ int y=a-b;
return y;
}
int umn(int a,int b)
{ int i;
    int s=0;
	for(i=0; i<b+1; i++)
	{
      int x=s+a;
	  s=x;}

        return s;
}
int del(int a,int b)
{   int i=0;
    int s=a;
	while (s>b)
	{
      int x=s-b;
	  s=x;
	  i++;
	}

        return i;
}
int fact(int n)
{
if (n==1)
return 1;
return fact(n-1)*n;
}
void main()
{
int a,b,a1,b1,a2,b2,a3,b3,n;
cin>>a;
cin>>b;
cin>>a1;
cin>>b1;
cin>>a3;
cin>>b2;
cin>>a3;
cin>>b3;
cin>>n;
int  c=sum(a,b);
int  y=raz(a1,b1);
int  x=umn(a2,b2);
int  d=del(a3,b3);
int  f=fact(n);
cout<<c;
cout<<y;
cout<<x;
cout<<d;
cout<<f;
system("pause");
}
