#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int r=0;
	for(int i=0;i<n;i++){
		r^=a[i];
	}
	int res=r,count=0;
	while((res&1)!=0){
		count++;
		res=res>>1;
	}

	int mask=1<<count,c=0;
	for(int i=0;i<n;i++){
		if(a[i]&mask>0){
             c^=a[i];
		}
	}
	int y=c^r;
	cout<<min(y,c)<<" "<<max(y,c)<<'\n';

	return 0;
}