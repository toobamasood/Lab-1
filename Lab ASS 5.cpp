#include<iostream>
using namespace std;
int main()
{
	float r,vol,area;
	cout<<"Enter the radius of sphere:";
	cin>>r;
	area=4*3.14*(r*r);
	vol=4/(3*3.14*(r*r*r));
	cout<<"The Volume of given radius ="<<vol<<endl;
	cout<<"The area of given radius ="<<area<<endl;
	return 0;
}