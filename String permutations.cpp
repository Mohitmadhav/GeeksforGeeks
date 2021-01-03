#include<bits/stdc++.h>

using namespace std;

void permutate(string s,int start,int end)
{
    if(start==end)
    cout<<s<<" ";

    else
    {
        for(int i=start;i<=end;i++)
        {
            swap(s[start],s[i]);

            permutate(s,start+1,end);

            swap(s[i],s[start]);
        }
    }
}

int main()
 {
	int t;
	cin>>t;

	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length();
	    permutate(s,0,n-1);
	    cout<<endl;

	}

	return 0;
}
