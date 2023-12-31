//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        int sunday=S/7;
        int buyingdays=S-sunday;
        int totalfoods=buyingdays*N;
        int totalreqfoods=S*M;
        
        if(totalreqfoods>totalfoods)
        return -1;
        else{
            int ans=ceil(1.0*totalreqfoods/N);
            return ans;
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends