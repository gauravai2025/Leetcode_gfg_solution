//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    private:
    bool isvalid(int *a,int n,int m,int mid){
    long long int sum=0;
        int cnt=1;
        
     for(int i=0;i<n;i++){
        if(sum+a[i]<=mid){
            sum+=a[i];
        }
        else{
            cnt++;
            if(cnt>m || a[i]>mid)
            return 0;
         
            sum=a[i];
        }
     }
     
    //  if(cnt>m)
    //  return 0;
  
     return 1;
        
    }
    
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N)
        return -1;
        long long int sum=0;
         for(int i=0;i<N;i++){
             sum+=A[i];
         }
         
       long long  int st=0;
       long long  int end=sum;
       long long  int mid;
       long long int ans=-1;
       
       while(st<=end){
         mid=(st+end)/2;
        if(isvalid(A,N,M,mid)){
        end=mid-1;
        ans=mid;
        }
        else
        st=mid+1;
        }
           
        return ans;   
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends