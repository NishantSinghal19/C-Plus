#include<iostream>
using namespace std;

int main(){
	int a,b, Quotient, Remainder;
	cout<<"Enter Divedend";
	cin>>a;
	cout<<"Enter Divisor";
	cin>>b;
	Quotient= a/b;
	Remainder=a%b;
	cout<<"Quotient"<<Quotient;
	cout<<"Remainder"<<Remainder;
	return 0;
}
