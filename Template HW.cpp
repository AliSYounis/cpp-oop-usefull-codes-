#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
class Vector
{
private:
T *v;
	int size;
public:
	Vector(int s)
	{ size=s;
		v=new T[size];}
	void modify(int i,T el)
	{
	v[i]=el;
	
	}
	void display()
	{
	for(int i=0;i<size;i++)
		cout<<v[i]<<"  ";
	cout<<endl;
	
	}
	void mul()
	{
	int sc;
	cout<<"enter the scalar Value :";cin>>sc;
	for(int i=0;i<size;i++)
		v[i]*=sc;
	
	}

};
void main()
{
Vector<int> b(4);
int select=0,el;

do{
	cout<<"Perss : \n 1 to modify elements \n 2 to display the vector \n 3 to multiply by scalar value \n 0 to exit \n";
	cin>>select;
	switch(select)
	{ case 1:
	for(int i=0;i<4;i++)
	{cout<<"enter the "<<i+1<<"element :";
	cin>>el;
	b.modify(i,el);
	};break;
	case 2:
		b.display();break;
	case 3: b.mul();b.display();break;
	case 0:break;
	default: cout<<"Wrong number to choose \t Try Again \n";break;

	}


}while(select!=0);
_getch();

}