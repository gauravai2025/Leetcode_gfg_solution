//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int target )
    {
        // code here
  int startingPosition = lower_bound(arr, arr+n, target) - arr;
 int endingPosition = lower_bound(arr, arr+n, target+1) - arr - 1;
        if(startingPosition < n && arr[startingPosition] == target){
            return {startingPosition, endingPosition};
        }
        return {-1, -1};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends