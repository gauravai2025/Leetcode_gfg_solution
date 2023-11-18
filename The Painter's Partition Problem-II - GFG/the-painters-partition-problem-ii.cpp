//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
   
private:
    bool isvalid(int *arr, int n, int k, long long int mid) {
        int cnt = 1;
        long long int sum = 0;

        for (int i = 0; i < n; i++) {
            if (sum + arr[i] <= mid) {
                sum += arr[i];
            } else {
                cnt++;
                if (cnt > k || arr[i] > mid) {
                    return false;
                }
                sum = arr[i];
            }
        }
        return true;
    }

public:
    long long minTime(int arr[], int n, int k) {
        long long int st = 0;
        long long int sum = 0;
        long long int ans = LLONG_MAX; // Use LLONG_MAX for the initial value

        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        long long int end = sum;
        long long int mid;

        while (st <= end) {
            mid = (st + end) / 2;
            if (isvalid(arr, n, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends