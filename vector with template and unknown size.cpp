#include<iostream>
#include<conio.h>
using namespace std;
template<class T,int s>
class vector
{
T *v;

public:
	vector(){
		v=new T[s];}
	void modify(int c[])
	{
	for(int i=0;i<s;i++)
		*(v+i)=c[i];
	}
	void out()
	{
		for(int i=0;i<s;i++)
	cout<<*(v+i)<<" ";
	}
	
	 int operator+(vector B)
	{
	int c=0;
		for(int i=0;i<s;i++)
			c+=*(v+i)+*(B.v+i);
	return c;
	
	
	}

};

void main()
{
	int a[3]={1,2,3};
	int b[3]={4,5,6};
	vector<int,3> v1;vector<int,3> v2;
	int v3;
	v1.modify(a);
	v2.modify(b);
	v3=v1+v2;
	v1.out();
	cout<<"  +  ";
	v2.out();
	cout<<"   =   "<<v3;
	
	_getch();



}
