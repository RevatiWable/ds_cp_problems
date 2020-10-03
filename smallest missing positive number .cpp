#include<bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int n) { 
    int m=INT_MIN;
    for(int i=0;i<n;i++)
    {
    if(arr[i]<0)
    {arr[i]=0;}
        m=max(m,arr[i]);
    }
 
    int a[m+1];
    for(int i=0;i<=m;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        a[arr[i]]=1;
    }
  
    for(int i=1;i<=m;i++)
    {
        if(a[i]==0)
        return i;
    }
    return m+1;
}
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        cout<<findMissing(arr, n)<<endl;
    }
    return 0; 
} 