#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	int n,t=0;
	vector<int> m;
	cin>>n;
	for(int i=2;i<=n;i++){
		int k=sqrt(i);
		for(int j=2;j<=k;j++){
			if(i%j==0 && i!=j){
				t=1;
				break;
			}
		}
		if(t==0){
			m.push_back(i);
		}else
			t=0;
	}
	int count=0;
	int l = m.size();
	for(int i=0;i<l;i++){
		if(m[i+1]-m[i]==2)
			count++;
	}
	cout<<count;
} 
