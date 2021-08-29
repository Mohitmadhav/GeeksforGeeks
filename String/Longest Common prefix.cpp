#include<bits/stdc++.h>

using namespace std;

string commPrefix(string s1,string s2)
{
    string common;
    for(int i=0, j=0;i<s1.length() &&j<s2.length();i++,j++)
    {

            if(s1[i]==s2[j])
            common.push_back(s1[i]);
            else
            break;


    }
    return common;
}
string lcp(string s[],int n)
{
    string pre=s[0];

    for(int i=1;i<n;i++)
    {
        pre=commPrefix(pre,s[i]);
    }


    return pre;
}

int main()
 {
	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;

        string s[n];

        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }

        string prefix=lcp(s,n);

        if(prefix.empty())
        cout<<"-1"<<endl;
        else
        cout<<prefix<<endl;
	}
	return 0;
}
