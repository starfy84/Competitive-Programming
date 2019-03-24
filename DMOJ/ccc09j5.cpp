#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

vector<int>adj[100001];
int dist[100001];
bool vis[100001];

int findDist(int start,int end,bool choice){
    fill(vis, vis+100001, false);
    fill(dist, dist+100001,0);
    queue<int> q; //Inits queue
    q.push(start); //Pushes the start position to the queue
    vis[start] = true;//Says that start has been checked
    
    while(!q.empty()){ //This loops until the queue is empty
        int cur = q.front(); //Grabs the first item in the queue
        for(int v:adj[cur]){ //Loops for all of the links in the vector
            if(!vis[v]){ //Checks if node has already been visited
                q.push(v); //If it has, then push it to the queue
                vis[v] = true; //And mark it as checked
                dist[v] = dist[cur] + 1; //Move to the next layer
            }
        }
        q.pop();
    }
    if (choice)
        return dist[end];
    else
        return count(dist,dist+100001,2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char inp;
    int x,y;
    adj[1] = {6};
    adj[2] = {6};
    adj[3] = {4,5,6,15};
    adj[4] = {3,5,6};
    adj[5] = {3,4,6};
    adj[6] = {1,2,3,4,5,7};
    adj[7] = {6,8};
    adj[8] = {7,9};
    adj[9] = {8,10,12};
    adj[10] = {9,11};
    adj[11] = {10,12};
    adj[12] = {9,11,13};
    adj[13] = {12,14,15};
    adj[14] = {13};
    adj[15] = {3,13};
    adj[16] = {17,18};
    adj[17] = {16,18};
    adj[18] = {16,17};
    while(true)
    {
        cin>>inp;
        if(inp=='q')
            break;
        cin>>x;
        if(inp=='i')
        {
            cin>>y;
            if(find(adj[x].begin(),adj[x].end(),y)==adj[x].end())
            {
                adj[x].push_back(y);
                adj[y].push_back(x);
            }
        }
        else if(inp=='d')
        {
            cin>>y;
            adj[x].erase(remove(adj[x].begin(),adj[x].end(),y));
            adj[y].erase(remove(adj[y].begin(),adj[y].end(),x));
        }
        else if(inp=='n')
        {
            cout<<adj[x].size()<<nl;
        }
        else if(inp=='f')
        {
            cout<<findDist(x,100000,false)<<nl;
        }
        else if(inp=='s')
        {
            cin>>y;
            int ans = findDist(x,y,true);
            cout<<(ans == 0 ? "Not connected" : to_string(ans))<<nl;
        }
    }
}