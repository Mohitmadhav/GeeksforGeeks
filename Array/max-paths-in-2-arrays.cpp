//Problem Statement: https://practice.geeksforgeeks.org/problems/max-sum-path-in-two-arrays/1#
//Similar Solution: https://ide.geeksforgeeks.org/ACK5IA

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    /*You are required to complete this method*/
    int max_path_sum(int A[], int B[], int l1, int l2)
    {

        //Your code here
        int i = 0, j = 0, s1 = 0, s2 = 0, sum = 0;

        while (i < l1 && j < l2)
        {

            if (A[i] < B[j])
            {
                s1 += A[i];
                i++;

                //Same as s1+=A[i++]
            }

            else if (A[i] > B[j])
            {
                s2 += B[j];
                j++;
                //Same as s2+=A[j++]
            }

            else
            {
                sum += A[i] + max(s1, s2);
                s1 = 0;
                s2 = 0;
                i++;
                j++;
            }
        }

        while (i < l1)
        {
            s1 += A[i];
            i++;
            //Same as s1+=A[i++]
        }

        while (j < l2)
        {
            s2 += B[j];
            j++;
            //Same as s2+=A[j++]
        }

        return sum + max(s1, s2);
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;
        fflush(stdin);
        int a[N], b[M];
        for (int i = 0; i < N; i++)
            cin >> a[i];
        for (int i = 0; i < M; i++)
            cin >> b[i];
        Solution obj;
        int result = obj.max_path_sum(a, b, N, M);
        cout << result << endl;
    }
}

// } Driver Code Ends