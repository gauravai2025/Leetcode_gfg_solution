//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
    long long solve(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int idx=min(k,n-k);
        
        long long int w1=0;
           long long int w2=0;
        for(int i=0;i<idx;i++){
            w1+=arr[i];
        }
        
         for(int i=idx;i<n;i++){
            w2+=arr[i];
        }
        
        return abs(w2-w1);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        auto ans = obj.solve(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends