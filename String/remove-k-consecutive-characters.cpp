//Other Methods:https://www.geeksforgeeks.org/reduce-the-string-by-removing-k-consecutive-identical-characters/

/* 
Examples:  

Input: K = 2, str = “geeksforgeeks” 
Output: gksforgks 
Explanation: After removal of both occurrences of the substring “ee”, the string reduces to “gksforgks”.

Input: K = 3, str = “qddxxxd” 
Output: q 
Explanation: 
Removal of “xxx” modifies the string to “qddd”. 
Again, removal of “ddd”modifies the string to “q”. 

*/
#include <bits/stdc++.h>

using namespace std;

void removeDuplicates(string s, int k)
{

    stack<char> st;
    int count = 1;

    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (!st.empty() && st.top() == s[i])
        {
            count++;
            if (count == k)
            {
                st.pop();
                count = 1;
            }
            // else
            // {
            //     count++;
            // }
        }

        else
        {
            st.push(s[i]);
        }
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
int main()
{

    string str = "qddxxxd";
    int iden = 3;
    // cin>>str>>iden;

    removeDuplicates(str, iden);
    cout << endl;

    return 0;
}