//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
       
        // define max heap
        priority_queue<pair<double,int>>pq;
        int val=0;
        int wt=0;
        
        for(int i=0;i<n;i++){
            val=arr[i].value;
            wt=arr[i].weight;
            pq.push({(1.0*val/wt),i});
            
        }
        
        double ans=0;
        int wt_curr=0;
        int wt_put=0;
        pair<double,int>pr;
        
        while(wt_curr<W && (!pq.empty())){
            pr=pq.top();
            pq.pop();
            wt_put=W-wt_curr;
            wt_put=min(wt_put,arr[pr.second].weight);
            ans+=wt_put*pr.first;
            wt_curr+=wt_put;
            
        }
        return ans;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends