#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class sales
{
	string name; 
	int gross;
	float sal;
public:
	sales(string n,float w){
		name=n;
sal=w;}
	void in()
	{cout<<"enter the value of gross"<<endl;
	cin>>gross;}
	int cal()
	{ 
	float x;
	x=sal+(gross*0.09);
	return x*4;
	}
	
	friend void  print( sales);
	friend void max(string&,float&,sales);
};

	void  print( sales a)
	{
		cout<<"the name:"<<"\t"<<a.name<< "\n"<<"the week salary:"<<"\t"<<a.sal<<"\nn"<<"the mounhtlyb salary"<<"\t"<<a.cal()<<endl;
	}
	void max(string &a,float &b,sales c)
	{
		if(c.gross>b)
		{b=c.gross;a=c.name;}
	
	
	}
	
	void main()
		{ string maxx="no-One",name;
	float high=0,sal;
			int n;

	
	do
	{
		cout<<"enter 1to countniues aand 2 for stop "<<endl;
	cin>>n;
	if(n!=2){
	cout<<"enter the name & salary \n";
	cin>>name>>sal;
	sales s(name,sal);
	s.in();
	s.cal();
		max(maxx,high,s);
		print(s);
	}
	}
	while(n!=2);
	
		cout<<"the high gross saler is \t"<<maxx;
		_getch();
	}
