#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int k;
	cin>>k;
	long long  a,b,c;
	for(int i=0;i<k;i++){
		cin>>a>>b>>c;
		if(a+b>c)
			cout<<"Case #"<<i+1<<": true"<<endl;
		else
			cout<<"Case #"<<i+1<<": false"<<endl;
	} 
	
	
} 
