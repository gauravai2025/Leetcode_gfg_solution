//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
bool isSubsetSum(vector<int> arr, int sum) {
    int size = arr.size();
    bool dp[size + 1][sum + 1];

    for (int i = 0; i <= size; i++) {
        for (int j = 0; j <= sum; j++) {
            if (i == 0 && j == 0)
                dp[i][j] = true;
            else if (i == 0)
                dp[i][j] = false;
            else if (j == 0)
                dp[i][j] = true;
            else {
                int val = arr[i - 1];
                if (j >= val) {
                    dp[i][j] = dp[i - 1][j - val] || dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
    }

    return dp[size][sum];
}



};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends