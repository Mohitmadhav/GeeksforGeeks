// Problem Statement: https://practice.geeksforgeeks.org/problems/amend-the-sentence3235/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string amendSentence(string s)
    {
        // your code here
        int n = s.length();
        s[0] = tolower(s[0]);
        string ans;

        for (int i = 0; i < n; i++)
        {

            if (isupper(s[i]))
            {
                ans += " ";
                s[i] = tolower(s[i]);
            }
            ans += s[i];
        }

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.amendSentence(s) << endl;
    }
}