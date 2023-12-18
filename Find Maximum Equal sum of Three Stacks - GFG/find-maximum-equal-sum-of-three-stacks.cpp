//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        
        int sum1=0,sum2=0,sum3=0;
        
        for(int i=0;i<N1;i++){
            sum1+=S1[i];
        }
        
         for(int i=0;i<N2;i++){
            sum2+=S2[i];
        }
        
         for(int i=0;i<N3;i++){
            sum3+=S3[i];
        }
        
        pair<int,int>p1={sum1,1};
        pair<int,int>p2={sum2,2};
        pair<int,int>p3={sum3,3};
        
        int i=0,j=0,k=0;
        
        while(i<N1 && j<N2 && k<N3){
            
            if(p1.first==p2.first && p2.first==p3.first)
            return p1.first;
            
            pair<int,int>maxv=max(p1,max(p2,p3));
            
            if(maxv.second==1){
                
                p1.first=p1.first-S1[i];
                i++;
            }
            
              else if(maxv.second==2){
                
                p2.first=p2.first-S2[j];
                j++;
            }
            
            else{
                 p3.first=p3.first-S3[k];
                k++;
            }
            
        }
        return 0;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends