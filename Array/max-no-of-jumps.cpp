// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        //------TLE------

        //Try with 1 4 1 3 0 0 1 as test case
        // int i=0,c=0;
        
        // while(i<n){
            
        //     i+=arr[i];
        //     c++;
        // }
        
        // if(i>=n-1)
        // return c;
        
        // else return -1;
        //------TLE------


    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends