//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
    private:
    void mul( vector<int>& ans , int n){
     int cary=0;
    int val;
    for(int i=ans.size()-1;i>=0;i--){
        val=ans[i]*n+cary;
        cary=val/10;
        ans[i]=val%10;

    }
    while(cary){
        ans.insert(ans.begin(),cary%10);
        cary=cary/10;
    }
    


}

public:
    vector<int> factorial(int N){
        // code here
         vector<int>ans;
         ans.push_back(1);
        for(int i=2;i<=N;i++){
            mul(ans,i);
        }
       // reverse (ans.begin(),ans.end());
     return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends