#include<iostream>
using namespace std;
int main()
{
	int TP,pagesperday,noday,np;
	cout<<"Write total no of pages of book:";
	cin>>TP;
	cout<<"write the no of pages a person read in a day:";
	cin>>pagesperday;
	cout<<"write the no of days a person has read the book:";
	cin>>noday;
	np=noday*pagesperday;
	cout<<"The no of pages that have been read in "<<noday<<" days are "<<np<<endl;
	cout<<"The no of pages remaining are "<<TP-np;
	return 0;
}