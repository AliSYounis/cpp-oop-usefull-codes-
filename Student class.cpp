#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class setudent
{
string name;
int age;
int mark[3];
public:
	setudent(){name="null";age=0;mark[0]=0;mark[1]=0;mark[2]=0;}
	friend void input(setudent*,int);
	friend void output(setudent*,int);
	friend float avarage(setudent*,int);
	friend bool ispass(setudent);
};
void input(setudent *a,int n)
{
for(int i=0;i<n;i++)
{
	cout<<"name :";cin>>a[i].name;
	cout<<"age :";cin>>a[i].age;
	cout<<"Marks are : ";cin>>a[i].mark[0]>>a[i].mark[1]>>a[i].mark[2];
}

}
void output(setudent *a,int n)
{
for(int i=0;i<n;i++)
	if(ispass(a[i]))
		cout<<a[i].name<<"\t"<<a[i].age<<"\t Pass \n";
	else
		cout<<a[i].name<<"\t"<<a[i].age<<"\t Fail \n";
}
bool ispass(setudent a)
{
	if(a.mark[0]>=50 &&a.mark[1]>=50 &&a.mark[2]>=50 )
		return true;
	else
		return false;

}
float avarage(setudent *a,int n)
{
int x=0;
float y=n;
for(int i=0;i<n;i++)
	{if(a[i].mark[0]>=50 &&a[i].mark[1]>=50 &&a[i].mark[2]>=50 )
{x++;}}
return x/y;
}
void main()
{
int n;
cout<<"enter the number of setudent \n";
cin>>n;
setudent *s=new setudent[n];
input(s,n);
cout<<"the avarage of passed setudent are :"<<avarage(s,n)<<endl;
output(s,n);
_getch();
}