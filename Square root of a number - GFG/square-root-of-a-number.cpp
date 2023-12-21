//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long int lo=1;
        long long int high=x;
        long long mid;
        
        
        while(lo<=high){
            mid=lo+(high-lo)/2;
            if(mid==x/mid)
            return mid;
            
            else if(mid>x/mid)
            high=mid-1;
            
            else
            lo=mid+1;
            
        }
        return high;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends