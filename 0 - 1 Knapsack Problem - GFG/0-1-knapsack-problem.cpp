//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    private:
 int solvedp(int wt[],int val[],int index,int w, vector<vector<int>>&dp){
        // base case
        if(index==0){
            if(wt[0]<=w)
            return val[0];
            else
            return 0;
        }
        // access value of already calculated value
        if(dp[index][w]!=-1)
        return dp[index][w];
        
        int include=0;
        if(wt[index]<=w){
            include=val[index]+solvedp(wt,val,index-1,w-wt[index],dp);
            
        }
        int exclude=0+solvedp(wt,val,index-1,w,dp);
        
      dp[index][w]=max(include,exclude);
      return dp[index][w];
        
    }
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        int index=n-1;
        // define 2 D vector
        vector<vector<int>>dp(n,vector<int>(W+1,-1));
      return solvedp(wt,val,index,W,dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends