//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  unordered_map<int,bool>visited;
  
    bool dfs(int node,int parent,vector<int> adj[]){
    visited[node]=true;
    bool iscycle=false;
    for(auto & child:adj[node]){
        if(visited[child] && child==parent)
        continue;
        if(visited[child])
        return true;
        
        iscycle|=dfs(child,node,adj);
        
        
    }
    return iscycle;
        
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        bool iscycle=false;
        for(int i=0;i<V;i++){
            if(visited[i])
            continue;
            else{
            if(dfs(i,-1,adj))
            {
                iscycle=true;
                break;
            }
            }
        }
        return iscycle;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends