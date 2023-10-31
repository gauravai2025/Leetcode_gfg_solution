//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
void pushZerosToEnd(int arr[], int n) {
    int left = 0; // Initialize a pointer for non-zero elements

    // Traverse the array
    for (int right = 0; right < n; right++) {
        if (arr[right] != 0) {
            // If the current element is non-zero, move it to the left pointer position
            swap(arr[left] ,arr[right]);

            // Increment the left pointer
            left++;
        }
    }

    // // Set all the remaining elements to zero
    // for (int i = left; i < n; i++) {
    //     arr[i] = 0;
    // }
}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends