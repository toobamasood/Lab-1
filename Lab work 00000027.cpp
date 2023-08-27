#include<iostream>
using namespace std;
int sum(int x,int y)
{
	return (x+y);
}
int main()
{
	int a,b,r;
	float f1;
	cout<<"Enter value of a and b:"<<endl;
	cin>>a>>b;
	cout<<"Enter value of r:";
	cin>>r;
	f1=4*3.14*(r*r*r)/a*b;
	cout<<"The Result of 4(3.14)r^3/ab is:"<<f1;
   int f=sum(3,4);
    cout<<endl<<f;
	return 0;
}

