//4-12-2018 Data stucter Lab ex

#include<iostream>
#include<conio.h>
using namespace std;
class Distance
{
int feet,inch;
public:
	Distance()
	{feet=0;inch=0;}
	
	void input()
	{cout<<"Feet =  ";cin>>feet;
	cout<<" \inch = ";cin>>inch;}
	void print()
	{cout<<feet<<"Feets "<<inch<<"inchs \n";}
	Distance operator+(Distance a)
	{
	Distance c;
	c.feet=feet+a.feet;
	c.inch=inch+a.inch;
	if(c.inch>=12)
	{c.inch-=12;c.feet++;}
	return c;
	}
	friend bool operator>(Distance,Distance);
	friend istream &operator>>(istream&,Distance&);
	friend ostream &operator<<(ostream&,Distance&);
};

bool operator>(Distance a,Distance b)
{
if(a.feet>b.feet)
	return true;
if(a.feet==b.feet && a.inch>b.inch)
{return true;}
else 
	return false;
}
istream &operator>>(istream &input,Distance &a)
{
	input>>a.feet>>a.inch;
	
	return input;
}
ostream &operator<<(ostream &output,Distance &a)
{
	output<<a.feet<<" Feets "<<a.inch<<" inches \n";
	return output;
}
void main()
{
Distance a,b,c;
cout<<"First Distace is \n";
cin>>a;
cout<<"Second Distace is \n";
cin>>b;
cout<<"A = ";cout<<a;
cout<<"B=  ";cout<<b;
if(a>b)
	cout<<"A Greater than B \n";
else
	cout<<"B greater than A \n";
c=a+b;
cout<<"A+B= ";cout<<c;

_getch();
}