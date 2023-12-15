//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    string chooseandswap(string a){
              int mp[123];
        
        for(int i=0;i<123;i++){
        mp[i]=-1;
}
     int size=a.size();
     
     for(int i=0;i<size;i++){
         if(mp[a[i]]==-1)
         mp[a[i]]=i;
     }
     
     bool flag=0;
     int i;
     int j;
     for( i=0;i<size;i++){
         for(j=97;j<a[i];j++){
             if(mp[j]>mp[a[i]]){
                 flag=1;
                 break;
             }
         }
         if(flag)
         break;
     }
     
     char replace=a[i];
     char swap= (char)j;
     
     if(flag){
     
     for(i=0;i<size;i++){
         if(a[i]==replace)
         a[i]=swap;
         else if(a[i]==swap)
         a[i]=replace;
         
     }
     }
     
     
        return a;
    }
    
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}

// } Driver Code Ends