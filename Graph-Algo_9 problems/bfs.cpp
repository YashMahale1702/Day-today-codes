#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100000];
int vis[100000]={0};

void bfs(int node)
{
    queue<int> q;
    vis[node]++;
    q.push(node);
    cout<<node<<" ";
    while(!(q.empty()))
    {
        int x=q.front();
        q.pop();
        for(auto it : adj[x])
        {
            if(!(vis[it]))
            {
                vis[it]++;
                q.push(it);
                cout<<it<<" ";
            }
        }
    }
}