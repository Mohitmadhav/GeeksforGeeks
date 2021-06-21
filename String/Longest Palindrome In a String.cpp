#include<bits/stdc++.h>
using namespace std;

void print(string str, int l,int r)
{
    for(int i=l;i<=r;i++)
    {
        cout<<str[i];
    }
}

void lps(string str)
{
    int low, high;
    int start=0,end=1;

    for(int i=1;i<str.length();i++)
    {
        //Even case
        low=i-1;
        high=i;

        while(low>=0 && high<str.length()&& str[low]==str[high])
        {
            if(high-low+1>end)
            {
                start=low;
                end=high-low+1;
            }

            low--;
            high++;

        }



       //Odd case
       low=i-1;
       high=i+1;

        while(low>=0 && high<str.length()&& str[low]==str[high])
        {
            if(high-low+1>end)
            {
                start=low;
                end=high-low+1;
            }

            low--;
            high++;

        }


    }
     print(str,start,start+end-1);
}
int main()
 {
	//code
	int t;
	cin>>t;

	while(t--)
	{
	    string str;
	    cin>>str;

	    lps(str);
	    cout<<endl;
	}
	return 0;
}
