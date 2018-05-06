#include<iostream>
using namespace std;
int main(){
	int i,j,k,n;
	cin>>k>>n;
	int m[k];
	for(i=0;i<k;i++){
		cin>>m[i];
	}
	int t1,t2;
	t1 = m[0];
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			if(j+1==k){
				m[0]=t1;
			}else{
				t2 = m[j+1];
				m[j+1]=t1;
				t1 = t2;
			}
		}
	}
	for(i=0;i<k;i++){
		if(i==0)
			cout<<m[i];
		else
			cout<<" "<<m[i];
	}
} 
