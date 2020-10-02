#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int d[n];
	    for(int i=0;i<n;i++){
	        d[i]=1;
	    }
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(a[i]>a[j]&&d[i]<d[j]+1){
	                d[i]=d[j]+1;
	            }
	        }
	    }
	    int m=d[0];
	    for(int i=1;i<n;i++){
	        if(m<d[i]){
	            m=d[i];
	        }
	    }
	    cout<<m<<"\n";
	}
	return 0;
}