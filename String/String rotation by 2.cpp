#include<bits/stdc++.h>

using namespace std;

bool isRotated(string s1, string s2)
{
    if(s1.length()!=s2.length())
    return false;

    else
    {
        string anticlock_rot="";
        string clock_rot ="";
        int len=s2.length();

        anticlock_rot = anticlock_rot+s2.substr(len-2,2)+s2.substr(0,len-2);
        clock_rot = clock_rot + s2.substr(2)+s2.substr(0,2);

        return (s1.compare(clock_rot)==0|| s1.compare(anticlock_rot)==0);
    }
}

int main()
    {
        int t;
        cin>>t;

        while(t--)
        {
            string s1,s2;
            cin>>s1>>s2;
            cout<<isRotated(s1,s2)<<endl;
        }

	return 0;
    }
