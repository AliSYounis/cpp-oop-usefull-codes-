#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class emp
{
string first,last;
int sal;
public:
	emp(){ sal=0;first="no-name";last="no-name";}
	friend istream &operator>>(istream&,emp&);
	friend ostream &operator<<(ostream&,emp&);
	friend float inc(emp);
	friend float yearly(emp);
};
istream &operator>>(istream &input,emp &e)
{
	input>>e.first>>e.last>>e.sal;
	return input;
}
ostream &operator<<(ostream &output,emp &e)
{
	output<<e.first<<"\t"<<e.last<<"\t"<<e.sal<<"\t"<<inc(e)<<"\t"<<yearly(e)<<"\n";
	return output;
}
float inc(emp e)
{float x;
	
	x=(e.sal*12)*0.1;
return x;}
float yearly(emp e)
{
float x;	
	x=e.sal*12+inc(e);
return x;}
void main()
{
int n,x;
cout<<"enter the number of employee:";cin>>n;
emp *e=new emp [n];
do{
	cout<<"1 to enter info. \n 2 to print them \n 3 to find the inc. \n 4 to the yearly sal \n 0 to exit \n";
	cin>>x;
	switch(x)
	{case 1:
for(int i=0;i<n;i++)
	{cout<<"enter the "<<i+1<<"  emp details as first,last & salary \n";
cin>>*(e+i);};break;
	case 2:
cout<<"first \t last \t salary \t inc \t Yearly \n";
for(int i=0;i<n;i++)
{cout<<*(e+i);};break;
	case 3:
		for(int i=0;i<n;i++)
		{cout<<inc(e[i])<<"  ";};break;
	case 4:
		for(int i=0;i<n;i++)
		{cout<<yearly(e[i])<<"  ";};break;
	case 0:break;
	default:cout<<"Wrong nomber to choose , Try again \n";}
	
	}while(x!=0);
_getch(); 
}