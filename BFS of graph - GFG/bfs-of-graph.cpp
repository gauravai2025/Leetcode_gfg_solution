//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
    private:
    void bfs(int node, vector<int>&ans, unordered_map<int,bool>&visited,vector<int>adj[]){
        queue<int>q;
        q.push(node);
        ans.push_back(node);
        visited[node]=true;
        
        while(!q.empty()){
            int front=q.front();
            q.pop();
            
           for(auto &it :adj[front]){
               if(!visited[it]){
                   ans.push_back(it);
                   q.push(it);
                   visited[it]=true;
               }
           }
            
        }
        
    }
    
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
       
        vector<int>ans;
        unordered_map<int,bool>visited;
        
        // for(int i=0;i<V;i++){
        //     if(!visited[i])
        //     bfs(i,ans,visited,adj);
        // }
        
         bfs(0,ans,visited,adj);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends