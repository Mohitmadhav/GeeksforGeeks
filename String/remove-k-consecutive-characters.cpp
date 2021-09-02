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
            if (count == k)
            {
                st.pop();
                count = 1;
               
            }
            else
            {
                count++;
            }
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