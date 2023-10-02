//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
  int cntb(int num){
      int cnt=0;
      while(num){
          cnt++;
          num=num>>1;
      }
      return cnt;
  }
  
    int replaceBit (int num, int k)
    {
        int tlb=cntb(num);
        
        k=tlb-k+1;
       k--;
   long long  int    pos=(1<<k);
        pos=(~pos);
        num=(num&pos);
        return num;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        Solution ob;
        cout <<ob.replaceBit (n, k) << endl;
    }
    return 0;
}


// } Driver Code Ends