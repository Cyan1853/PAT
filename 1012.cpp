#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	int k,f=0,t,a[6]={0},b[6]={0};
	float c;
	vector<int> m;
	while(cin>>t){
		if(f==0){
			k=t;
			f++;
		}else{
			m.push_back(t);
			f++;
			if(f>k)
				break;
		}
	}
	t=0;
	f=0;
	a[5]=-1;
	vector<int>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		if(*it%5==0&&*it%2==0){
			a[1]+=*it;
			b[1]=1;
		}
		else if(*it%5==1){
			b[2]=1;
			if(t==0){
				a[2]+=*it;
				t=1;
			}else{
				a[2]-=*it;
				t=0;
			}
		}
		else if(*it%5==2){
			a[3]++;
			b[3]=1;
		}
		else if(*it%5==3){
			a[4]+=*it;
			b[4]=1;
			f++;
		}else if(*it%5==4){
			b[5]=1;
			if(a[5]<*it)
				a[5]=*it;
		}
	}
	for(int i=1;i<5;i++){
		if(b[i]==1){
			if(i==4){
				c = a[4]/1.0/f;
				c *=10;
				c = round(c);
				cout<<c/10<<" ";
				continue;
			}
			cout<<a[i]<<" ";
		}
		else
			cout<<"N ";
	}
	if(b[5]==1)
		cout<<a[5];
	else
		cout<<"N";		
}
