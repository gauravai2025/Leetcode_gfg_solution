//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){
        //Write your code here
        int ans=0;
        sort(X.begin(),X.end(),greater<int>());
        sort(Y.begin(),Y.end(),greater<int>());
        
        int vertical=1;
        int horz=1;
        
        int i=0,j=0;
        
        while(i<M-1 && j<N-1){
            
            if(X[i]>=Y[j]){
                ans+=X[i]*horz;
                vertical++;
                i++;
            }
            
            else{
                ans+=Y[j]*vertical;
                horz++;
                j++;
            }
        }
        
        while(i<M-1){
              ans+=X[i]*horz;
                vertical++;
                i++;
        }
        
        
        while(j<N-1){
             ans+=Y[j]*vertical;
                horz++;
                j++;
        }
        
        return ans;
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int m, n;
	    cin >> m >> n;
	    vector<int>X(m - 1), Y(n - 1);
	    for(int i = 0; i < m - 1; i++){
	        cin >> X[i];
	    }
	    for(int i = 0; i < n - 1; i++){
	        cin >> Y[i];
	    }
	    Solution ob;
	    int ans = ob.minimumCostOfBreaking(X, Y, m, n);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends