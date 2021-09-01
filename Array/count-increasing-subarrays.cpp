//Problem Statement: https://practice.geeksforgeeks.org/problems/count-increasing-subarrays5301/1#
//See brute: https://www.geeksforgeeks.org/count-strictly-increasing-subarrays/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	int countIncreasing(int arr[], int n) {
	    // code here
	    int small =arr[0];
	    int c=0;
	    int j=0;
	    
	    for(int i=1;i<n;i++){
	        if(arr[i]>small){
	            c+=(i-j);
	        }
	        
	        else{
	            j=i;
	        }
	        
	        small=arr[i];
	    }
	    
	    return c;
	}
};

// { Driver Code Starts.

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
        auto ans = ob.countIncreasing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends