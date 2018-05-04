#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int i,n;
	cin>>n;
	int a,b,c;
	a = n / 100;
	b = n % 100 / 10;
	c = n % 10;
	for(i=0;i<a;i++)
		cout<<"B";
	for(i=0;i<b;i++)
		cout<<"S";
	for(i=1;i<=c;i++)
		cout<<i;
}
 
