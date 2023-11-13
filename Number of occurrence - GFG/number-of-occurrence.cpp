//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
    
    private:
    
 int first_occurence(int a[],int size,int key){
     int start=0,end=size-1;
     int mid=0;
     int ans=-1;

while(start<=end){
   
  mid=start+(end-start)/2;
        if(a[mid]==key){
        end=mid-1;
        ans=mid;}  // search for leftmost occurence of element
        
    else if(key>a[mid]){   // position -1 in output means absence of number in array
    start=mid+1;}
    
    else if(key<a[mid]){
    end=mid-1;}
   

}
return ans;
}

 
 int last_occurence(int a[],int size,int key){
     int start=0,end=size-1;
     int mid=0;
     int ans=-1;

while(start<=end){
   
  mid=start+(end-start)/2;
        if(a[mid]==key){
        start=mid+1;
        ans=mid;}  // search for rightmost occurence of element
        
    else if(key>a[mid]){   // position -1 in output means absence of number in array
    start=mid+1;}
    
    else if(key<a[mid]){
    end=mid-1;}
   

}
return ans;
}
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int size, int val) {
	    // code here
	  int idx_last=last_occurence(arr,size,val);
  int idx_first=first_occurence(arr,size,val);
  int count=idx_last-idx_first+1;



if(idx_first==-1)
return 0;
else
return count;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends