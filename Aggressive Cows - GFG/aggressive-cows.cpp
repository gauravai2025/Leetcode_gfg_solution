//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    
    private:
    bool isvalid(vector<int>&arr,int n,int k,int mid){
        int preval=arr[0];
        int cnt=1;
        
        for(int i=1;i<n;i++){
            if(abs(preval-arr[i])>=mid){
                cnt++;
                preval=arr[i];
            }
            
        }
        
        if(cnt<k)
        return 0;
        else 
        return 1;
    }
    
public:

    int solve(int n, int k, vector<int> &stalls) {
        
        int st=1;
        int max1=*max_element(stalls.begin(),stalls.end());
        int end=max1-1;
        int mid;
        int ans=1;
        
        sort(stalls.begin(),stalls.end());
        
        while(st<=end){
            mid=(st+end)/2;
            if(isvalid(stalls,n,k,mid)){
                ans=mid;
                st=mid+1;
            }
            else
            end=mid-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends