//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    private:
 int solvedptab(int wt[], int val[], int n, int w) {
    vector<vector<int>> dp(n, vector<int>(w + 1, 0));

    // base case
    for (int i = wt[0]; i <= w; i++) {
        if (wt[0] <= w)
            dp[0][i] = val[0];
        else
            dp[0][i] = 0;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= w; j++) {
            int include = 0;
            if (wt[i] <= j)
                include = val[i] + dp[i - 1][j - wt[i]];

            int exclude = dp[i - 1][j];
            dp[i][j] = max(include, exclude);
        }
    }

    return dp[n - 1][w];
}

public:
// Function to return max value that can be put in knapsack of capacity W.
int knapSack(int W, int wt[], int val[], int n) {
    return solvedptab(wt, val, n, W);
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