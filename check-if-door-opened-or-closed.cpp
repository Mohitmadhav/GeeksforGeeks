//Problem Statement:https://www.geeksforgeeks.org/check-door-open-closed/

/* 

Given N doors and N persons. The doors are numbered from 1 to N and persons are given id’s numbered from 1 to N. Each door can have only two statuses i.e. open (1) or closed (0) . Initially all the doors have status closed. Find the final status of all the doors, when all the persons have changed the status of the doors of which they are authorized. i.e. if status open then change the status to closed and vice versa. A person with id ‘i’ is authorized to change the status of door numbered ‘j’ if ‘j’ is a multiple of ‘i’.
Note: A person has to change the current status of all the doors for which he is authorized exactly once.

 

Example 1:

Input:
N = 3
Output:
1 0 0 
Explanation:
Initiall status of rooms - 0 0 0. 
Person with id 2 changes room 2 to open,
i.e. (0 1 0). Person with id 1 changes
room 1, 2, 3 status (1 0 1).
Person with id 3 changes room 3
status i.e. (1 0 0).
Example 2:

Input:
N = 2
Output:
1 0
Explanation:
Initiall status of rooms - 0 0. 
Person with id 2 changes room 2 to open,
i.e. (0 1). Person with id 1 changes
room 1, 2 status (1 0).
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function checkDoorStatus() which takes an Integer N as input and returns an array as the answer.

 

Expected Time Complexity: O(N*sqrt(N))
Expected Auxiliary Space: O(N)

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int *checkDoorStatus(int N)
    {
        // code here
        int curr_root, root = 0;
        int *arr = (int *)malloc(sizeof(int) * N);
        for (int i = 1; i <= N; i++)
        {
            curr_root = sqrt(i);

            if (curr_root > root)
            {
                arr[i - 1] = 1;
                root = curr_root;
            }
        }

        return arr;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;

        cin >> N;

        Solution ob;
        int *ptr = ob.checkDoorStatus(N);
        for (int i = 0; i < N; i++)
            cout << ptr[i] << " ";
        cout << endl;
    }
    return 0;
}