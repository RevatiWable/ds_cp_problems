/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a[n][m];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>a[i][j];
	        }
	    }
	    int k=0,l=0,i;
	    while(l<n && k<m){
	        for(int i=l;i<m;i++){
	            cout<<a[k][i]<<" ";
	        }
	        k++;
	        for(int i=k;i<n;i++){
	            cout<<a[i][m-1]<<" ";
	        }
	        m--;
	        if(k<n){
	            for(int i=m-1;i>=l;i--){
	                cout<<a[n-1][i]<<" ";
	            }
	            n--;
	        }
	        
	        if(l<m){
	            for(int i=n-1;i>=k;i--){
	                cout<<a[i][l]<<" ";
	            }
	            l++;
	        }
	    }
	 cout<<"\n";
	    }
	    
	
	return 0;
}