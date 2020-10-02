/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#define ll long long
const ll MSIZE = 1000001; 

using namespace std;

int main()
{
   
    ll t;
    cin>>t;
    while(t--){
        
         vector<ll >lprime; 
         vector<ll>SP(MSIZE); 
         vector<ll >isprime(MSIZE , true); 

        ll n;
        cin>>n;
        
        isprime[0] = isprime[1] = false ; 
  
  
        for (ll i=2; i<n ; i++) 
        { 
        
        if (isprime[i]) 
        { 
            
            lprime.push_back(i); 
  
           
            SP[i] = i; 
        } 
  
       
        for (ll j=0;j<(ll)lprime.size()&&i*lprime[j]<n && lprime[j]<= SP[i]; 
             j++) 
        { 
            isprime[i*lprime[j]]=false; 
  
            
            SP[i*lprime[j]] = lprime[j] ; 
        } 
    } 
        
        for (ll i=0; i<lprime.size() && lprime[i] <= n ; i++) 
        cout << lprime[i] << " "; 
        
        cout<<"\n";
    }

    return 0;
}
