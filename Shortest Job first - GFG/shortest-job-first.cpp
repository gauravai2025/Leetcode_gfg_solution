//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Back-end complete function Template for C++

class Solution {
  public:
   long long solve(vector<int>& bt) {
    multimap<int, int> task;
    int size = bt.size();

    for (int i = 0; i < size; i++) {
        task.insert({bt[i], i});
    }

    vector<long long int> ct(size, 0);
    int ct_time = 0;

    for (auto& it : task) {
        ct_time += (it.first);
        ct[it.second] = ct_time;
    }

    // Calculate turnaround time and waiting time
    long long int wt_time = 0;
    for (int i = 0; i < size; i++) {
        wt_time += (ct[i] - bt[i]);
    }

    //cout<< wt_time << endl;
    long long int avg_wt = wt_time /size;
    return avg_wt;

    
}


};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> bt(n), p(n);
        for (int i = 0; i < n; i++) {
            cin >> bt[i];
        }
        Solution obj;
        long long ans = obj.solve(bt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends