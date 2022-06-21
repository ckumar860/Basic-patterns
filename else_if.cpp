#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number less than 1000\n";
	cin>>a;
	if (a>=0 and a<10)   
		cout<<"it is a one digit number";
	else if (a>=10 and a<100)
		cout<<"it is a two digit number";
	else if (a>=100 and a<1000)
		cout<<"it is three digit number";
	else
		cout<<"out of given range";
	return 0;
}
