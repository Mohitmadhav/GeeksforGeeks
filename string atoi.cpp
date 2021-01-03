#include <bits/stdc++.h>
using namespace std;

int atoi(string str)
{

	int num=0,i=0,sign=1;
	if(str[i]=='-')
	{
	    sign=-1;i++;

	}
	while(str[i]!='\0')
	{
		int digit=str[i]-'0';
		if(digit<0 || digit>9)
		 return -1;

		num=num*10+digit;
		i++;
	}

	return sign*num;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;

        int val=atoi(s);
        cout<<val<<endl;
	}
}
