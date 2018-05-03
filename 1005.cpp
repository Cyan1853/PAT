#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t,i,k;
	cin>>k;
	int m[k],flag[k]={0};
	vector<int> n,o;
	n.push_back(1);
	for(i=0;i<k;i++){
		cin>>m[i];
		t=m[i];
		while(t!=1){
			if(t%2)
				t = (t*3+1)/2;
			else
				t /= 2;
			n.push_back(t);
		}
	}
	vector<int>::iterator it;
	for(i=0;i<k;i++){
		for(it = n.begin();it!=n.end();it++){
			if(*it == m[i] && flag[i]==0){
				flag[i]=1;
				break;
			}
		}
	}
	t=0;
	for(i=0;i<k;i++){
		if(flag[i]==0){
			o.push_back(m[i]);
		}
	}
	sort(o.begin(),o.end());
	reverse(o.begin(),o.end());
	for(it = o.begin();it!=o.end();it++){
		if(it==o.begin()){
				cout<<*it;
			}
		else
			cout<<" "<<*it;	
	}
}
