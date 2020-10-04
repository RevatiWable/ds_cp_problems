#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001], low[100001], in[100001];
int timer;
void dfs(int node,int par)
{
	vis[node]=1;
	in[node]=low[node]=timer;
	timer++;
	for(int i=0;i<ar[node].size();i++)
	{
		if(ar[node][i]==par)
		{
			continue;
		}
		if(vis[ar[node][i]]==1)
		{
			//edge node-child is a back edge
			low[node]= min(low[node], in[ar[node][i]]);
		}
		else
		{
			//edge node-child is a forward edge
			dfs(ar[node][i],node);
			if(low[ar[node][i]] > in[node])
			{
				cout<<node<<"-"<<ar[node][i]<<" is a bridge\n";
			}
			low[node]= min(low[node], low[ar[node][i]]);
		}
	}
}
int main()
{
	int n,m,a,b,i;
	cin>>n>>m;
	for(i=1;i<=m;i++)
	{
		cin>>a>>b;
		ar[a].push_back(b);
		ar[b].push_back(a);
	}
	dfs(1,-1);
}
