#include<iostream>
using namespace std;

int main(){
	int a,b , temp;
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"swap 1."<<a<<",2."<<b;
	return 0;
}
