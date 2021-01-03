#include<bits/stdc++.h>

using namespace std;

int roman_to_int(string roman)
{
    map<char,int> hmap;

    hmap['I']=1;
    hmap['V']=5;
    hmap['X']=10;
    hmap['L']=50;
    hmap['C']=100;
    hmap['D']=500;
    hmap['M']=1000;

    if(roman.length()<=1)
    return hmap[roman.at(0)];

    else
    {
        int i=0;int res=0;
        while(i<roman.length())
        {
            if(hmap[roman[i+1]]>hmap[roman[i]])
            {
                res+=hmap[roman[i+1]]-hmap[roman[i]];
                i=i+2;
            }

            else
            {
                res+=hmap[roman[i]];
                i++;
            }
        }
        return res;
    }
}

int main()
 {
	int t;
	cin>>t;

	while(t--)
	{
	    string roman;
	    cin>>roman;
	    cout<<roman_to_int(roman)<<endl;
	}
	return 0;
}
