//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
     vector<int>ans;
     int coin[10]={2000,500,200,100,50,20,10,5,2,1};
     int j=0;
     int val;
      
      while(N!=0){
          val=N/coin[j];
          
          while(val--){
              ans.push_back(coin[j]);
          }
          N=N%coin[j];
          j++;
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
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends