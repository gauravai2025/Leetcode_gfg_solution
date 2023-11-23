//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
    private:
 int countsmall(vector<vector<int>> &matrix, int R, int C,int mid){
     int cnt=0;
        for(int i=0;i<R;i++){
          cnt+= upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
        }
        return cnt;
    }
    
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        int mid;
        int ans=0;
        int req=(R*C)/2;
        
        int min1=INT_MAX;
        for(int i=0;i<R;i++){
            min1=min(min1,matrix[i][0]);
        }
        
        int max1=INT_MIN;
        for(int i=0;i<R;i++){
            max1=max(max1,matrix[i][C-1]);
        }
        
        int st=min1;
        int end=max1;
        
        while(st<=end){
            mid=(st+end)/2;
            int cntsmall=countsmall(matrix,R,C,mid);
            if(cntsmall<=req)
            st=mid+1;
            else
            end=mid-1;
                
            
        }
        return st;
          
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends