//Problem Statement: https://www.geeksforgeeks.org/maximum-contiguous-circular-sum/

/* 
Given an array arr[] of N integers arranged in a circular fashion. Your task is to find the maximum contiguous subarray sum.


Example 1:

Input:
N = 7
arr[] = {8,-8,9,-9,10,-11,12}
Output:
22
Explanation:
Starting from the last element
of the array, i.e, 12, and 
moving in a circular fashion, we 
have max subarray as 12, 8, -8, 9, 
-9, 10, which gives maximum sum 
as 22.
Example 2:

Input:
N = 8
arr[] = {10,-3,-4,7,6,5,-4,-1}
Output:
23
Explanation: Sum of the circular 
subarray with maximum sum is 23

Your Task:
The task is to complete the function circularSubarraySum() which returns a sum of the circular subarray with maximum sum.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).


Constraints:
1 <= N <= 106
-106 <= Arr[i] <= 106

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int kadane(int ar[], int n)
    {

        int curr_sum = ar[0];
        int sum = ar[0];

        for (int i = 1; i < n; i++)
        {
            curr_sum = max(ar[i], curr_sum + ar[i]);
            sum = max(sum, curr_sum);
        }
        return sum;
    }
    int circularSubarraySum(int arr[], int num)
    {

        // your code here
        int sum = 0;
        int wrapsum;
        int nonwrapsum = kadane(arr, num);

        if (nonwrapsum < 0)
            return nonwrapsum;

        for (int i = 0; i < num; i++)
        {
            sum += arr[i];
            arr[i] = -arr[i];
        }

        wrapsum = sum + kadane(arr, num);
        int finalsum = max(wrapsum, nonwrapsum);

        return finalsum;
    }
};

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
        //calling function
        cout << ob.circularSubarraySum(arr, num) << endl;
    }

    return 0;
}