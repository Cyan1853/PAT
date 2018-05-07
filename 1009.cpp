#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[82];
	cin.getline(a,80);
	int i,j,l=strlen(a);
	int t=l;
	for(i=l-1;i>=0;i--){
		if(a[i]==' '){
			for(j=i+1;j<t;j++){
				cout<<a[j];
			}
			cout<<" ";
			t = i;
		}
	}
	for(j=0;j<t;j++){
		cout<<a[j];
	}
}
