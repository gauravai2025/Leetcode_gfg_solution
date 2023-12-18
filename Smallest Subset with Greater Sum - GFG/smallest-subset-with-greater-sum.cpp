//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        
        sort(Arr.begin(),Arr.end());
        
        long long int sum=accumulate(Arr.begin(),Arr.end(),0ll);
        long long int chksum=0;
        long long int rstsum=0;
       
       int ans=0;
        
        for(int i=N-1;i>=0;i--){
            chksum+=Arr[i];
            rstsum=sum-chksum;
            ans++;
            if(chksum>rstsum)
            return ans;
            
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends