//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    private:
    void primefact(int num,set<int>&ans){
    for(int i=2;i*i<=num;i++){  // time complexity o(sqrt(n))
        while(num%i==0){
            ans.insert(i);
            num/=i;

        }
    }
    if(num>1)
    ans.insert(num);
    }
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    set<int>st;
	    primefact(N,st);
	    vector<int>ans;
	    
	    for(auto & it:st){
	        ans.push_back(it);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends