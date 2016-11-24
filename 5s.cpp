#include <iostream>
class pr{ 
public:
	int a,b;
	int getS(){
		return a*b;
	}
	int getP(){
		return 2*(a+b);
	}
};
class kr{
	public:
	int r;
	float getSk(){
		return r*r*3.14;
	}
	float getPk(){
		return (2*3.14*r);
	}
};
	void main() 
	{
		pr p;
		p.a=7;
		p.b=6;

		kr k;
		k.r=6;
		cout<<"perimetr pryamoygol'nika-"<<p.getP()<<'\n';
		cout<<"ploshad' pryamoygol'nika-"<<p.getS()<<'\n';
		cout<<"perimetr kryga-"<<k.getPk()<<'\n';
		cout<<"ploshad' kryga-"<<k.getSk();
		system("pause");

	}