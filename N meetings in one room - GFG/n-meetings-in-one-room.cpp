//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class meeting{
    public:
    int arrival;
    int depart;
};

class Solution
{
    private:
  bool static comp(meeting a, meeting b) {
    if (a.depart == b.depart)
        return a.arrival < b.arrival;
    else
        return a.depart < b.depart;
}

    
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        meeting arr[n];
        
        for(int i=0;i<n;i++){

            arr[i].arrival=start[i];
            arr[i].depart=end[i];
        }
        
        sort(arr,arr+n,comp);
     
        
        int cnt=0;
        int lastend=0;
        for (int i = 0; i < n; i++) {
            
        if (i == 0) {
        cnt++;
        lastend=arr[i].depart;
    }
    
    else {
       if(arr[i].arrival>lastend){
           cnt++;
           lastend=arr[i].depart;
       }
    }
}

            
        
        return cnt;
            
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends