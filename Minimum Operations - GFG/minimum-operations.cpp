//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    int cnt_bit(int n){
        int cnt=0;
        while(n!=0){
            cnt++;
            n-=n&(-n);
        }
        return cnt;
        
    }
  public:
    int minOperation(int n)
    {
        //code here.
        int ans=log2(n)+cnt_bit(n);
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
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends