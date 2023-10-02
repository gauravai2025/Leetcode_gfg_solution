//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
private:
int pivot(int*arr,int size){
 int strt=0,end=size-1;
 int mid=0;
 
 while(strt<end){
    mid=strt+(end-strt)/2;
    if(arr[mid]>=arr[0])
         strt=mid+1;
         else
         end=mid;
 }
 return strt;
    
}
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    if(arr[0]<arr[n-1])
	    return 0;

	    return pivot(arr,n);
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends