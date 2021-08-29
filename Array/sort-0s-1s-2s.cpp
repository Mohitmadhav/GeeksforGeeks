//Problem Statement: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void sort012(int a[], int n)
    {
        // code here
        //This code has more complexity(Wont work for large n)
        // int j=0;int k=n-1;

        // for(int i=0;i<n;i++){
        //     if(a[i]==0 && a[i]<a[j] && j<n){
        //         swap(a[i],a[j]);
        //         j++;
        //     }

        //     if(a[i]==2 && a[i]>a[k] && k>=0){
        //         swap(a[i],a[k]);
        //         k--;
        //     }
        // }
        int k = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                k++;
                swap(a[i], a[k]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                k = i - 1;
                break;
            }
        }
        for (int i = k + 1; i < n; i++)
        {
            if (a[i] == 1)
            {
                k++;
                swap(a[i], a[k]);
            }
        }
    }
};

// { Driver Code Starts.
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends