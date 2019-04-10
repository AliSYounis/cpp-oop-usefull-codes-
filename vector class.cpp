#include<iostream>
#include<conio.h>
using namespace std;
class vector
{ int s;
int *v;
public:
	vector(){
cout<<"Enter the size :";cin>>s;
v=new int[s]();
	}
void modify(int x[])
	{
	for(int i=0;i<s;i++)
		v[i]=x[i];
	}
friend vector operator+(vector a,vector b)
{
vector c;
for(int i=0;i<a.s;i++)
{c.v[i]=a.v[i]+b.v[i];}
return c;
}
void display()
{for(int i=0;i<s;i++)
cout<<*(v+i);
}
};
void main()
{ int x[5]={1,2,3,4,5};
int y[5]={6,7,8,9,10};
vector a,b,c;
a.modify(x);
b.modify(y);
c=a+b;
a.display();
cout<<endl;
b.display();
cout<<endl;
c.display();
_getch();


}