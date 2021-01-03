#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void fn(string s,int n)
{
    stack<char> st;
    int flag=1;
    while(flag!=0 && s.size()!=0)
    {
        flag=0;
        int i=0;
        while(i<n)
        {
            if(st.empty() || s[i]!=st.top())
                st.push(s[i]);
            else
            {
                flag=1;
                while(!st.empty() && st.top()==s[i])
                    i++;
                st.pop();
                st.push(s[i]);
            }
            i++;
        }
        s="";
        while(!st.empty())
        {
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        n=s.size();
    }
    cout<<s;
}

int main() {
	int t;
	string s;
	cin>>t;
	while(t>0)
	{
	    cin>>s;
	    if(s.size()==1)
	        cout<<s;
	    else
	    {
	        fn(s,s.size());
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}
