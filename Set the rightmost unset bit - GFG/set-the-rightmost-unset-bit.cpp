//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
int posf(int num){
    int cnt=0;
    while(num){
        cnt++;
        if(!(num&1))
        return cnt;
        num=num>>1;
    }
    return -1;
}
    int setBit(int N)
    {
      
       int rmu= posf(N);
       if(rmu==-1)
       return N;
       else{
         rmu--;
         int mask=1<<rmu;
         N=N|mask;
         return N;
       }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.setBit(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends