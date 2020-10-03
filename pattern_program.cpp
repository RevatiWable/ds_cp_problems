#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,s=0,j;
    cin>>n;
    for(ll i=1;i<=n+1;i++){
        // for gap
        for(ll t=1;t<=n-s;t++){
            cout<<"  ";
        }
        if(i==1){
            cout<<"0";
        }   
            if(i!=1){
            cout<<"0"<<" ";
            }
            for( j=1;j<=i-1;j++){
                cout<<j<<" ";
            }
            j-=2;
            while(j>=1){
             //   if(j!=1){
                cout<<j<<" ";
             //   }
               /* if(j==1){
                    cout<<j;
                } */
                j--;
            }
            if(i!=1){
            cout<<"0";
            }
            
        cout<<'\n';
        s++;
    }
    s=n-1;
    for(ll i=1;i<=n;i++){
        // for gap
        for(ll t=1;t<=n-s;t++){
            cout<<"  ";
        }
        // for number
        
        if(i==n){
        cout<<"0";
        }
        if(i!=n){
            cout<<"0"<<" ";
        }
        for(ll j=1;j<=s;j++){
            cout<<j<<" ";
        }
        ll o=s-1;
        while(o>=1){
            cout<<o<<" ";
            o--;
        }
        if(i!=n){
            cout<<"0";
        }
        s--;
        cout<<'\n';
    }
    return 0;
}