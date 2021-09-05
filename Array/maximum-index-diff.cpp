//Problem Statement: https://www.geeksforgeeks.org/given-an-array-arr-find-the-maximum-j-i-such-that-arrj-arri/
//Stack Approach:https://ide.geeksforgeeks.org/jXDFjXt3Og

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int maxIndexDiff(int arr[], int n)
    {
        // Your code here
        int i, j;
        int lMin[n], rMax[n];

        lMin[0] = arr[0];
        for (i = 1; i < n; i++)
        {
            lMin[i] = min(lMin[i - 1], arr[i]);
        }

        rMax[n - 1] = arr[n - 1];
        for (j = n - 2; j >= 0; j--)
        {
            rMax[j] = max(rMax[j + 1], arr[j]);
        }

        i = 0, j = 0;
        int maxDiff = -1;
        while (i < n && j < n)
        {
            if (lMin[i] <= rMax[j])
            {
                maxDiff = max(maxDiff, j - i);
                j++;
            }

            else
                i++;
        }

        return maxDiff;
    }
};

// { Driver Code Starts.

/* Driver program to test above functions */
int main()
{
    int T;
    //testcases
    cin >> T;
    while (T--)
    {
        int num;
        //size of array
        cin >> num;
        int arr[num];

        //inserting elements
        for (int i = 0; i < num; i++)
            cin >> arr[i];
        Solution ob;

        //calling maxIndexDiff() function
        cout << ob.maxIndexDiff(arr, num) << endl;
    }
    return 0;
} // } Driver Code Ends