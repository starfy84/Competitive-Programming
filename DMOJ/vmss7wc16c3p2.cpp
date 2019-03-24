#include <bits/stdc++.h>
#define nl "\n"
using namespace std;

vector<int>adj[100001];
bool vis[100001];

bool findDist(int start,int end){
    fill(vis, vis+100001, false); //Empties array
    queue<int> q; //Inits queue
    q.push(start); //Pushes the start position to the queue
    vis[start] = true;//Says that start has been checked
    while(!q.empty()){ //This loops until the queue is empty
        int cur = q.front(); //Grabs the first item in the queue
        for(int v:adj[cur]){ //Loops for all of the links in the vector
            if(!vis[v]){ //Checks if node has already been visited
                q.push(v); //If it has, then push it to the queue
                vis[v] = true; //And mark it as checked
            }
        }
        q.pop();
    }
    return vis[end];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,a,b,x,y;
    cin>>n>>m>>a>>b;
    for(int i = 0 ;i < m ;i ++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(findDist(a,b))
        cout<<"GO SHAHIR!";
    else
        cout<<"NO SHAHIR!";
    cout<<nl;
}