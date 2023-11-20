//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<int> findSum(vector<int> &v1, vector<int> &v2) {
	    // code here
	    vector<int>ans;
    int cary=0;
    int val;
    reverse(v1.begin(),v1.end());
    reverse(v2.begin(),v2.end());
    int m=v1.size();
    int n=v2.size();
  int min1=min(m,n);
    for(int j=0;j<min1;j++){
         val=v1[j]+v2[j]+cary;
            ans.push_back(val%10);
                cary=val/10;
    }
    if(m>min1){
    for(int f=min1;f<m;f++){
      val=v1[f]+cary;
            ans.push_back(val%10);
                cary=val/10;
    }

  }
  else if(n>min1){
    for(int l=min1;l<n;l++){
        val=v2[l]+cary;
        ans.push_back(val%10);
        cary=val/10;
    }
   }
        
  while(cary){
      ans.push_back(cary%10);
      cary=cary/10;
  }
   
  reverse(ans.begin(),ans.end());
  return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends