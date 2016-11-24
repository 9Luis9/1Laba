#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	const int arraySize = 10;
	int a[arraySize];
	cout<<"Vvedite massive iz 10 elementov. \n";
	for (int j=0; j< arraySize; j++)
	{
		cout<<"a["<<j<<"]=";
		cin>>a[j];
	}
		int sum=0;
		for(int j=0; j<arraySize; j++)
		{
			if (a[j]!=a[10])
			{			
				sum+=a[j];
			}
		}

	cout<<"otvet =" << sum<<'\n';

	system("pause");
}