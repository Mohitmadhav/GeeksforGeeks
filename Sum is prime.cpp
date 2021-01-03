#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isprime(int x)
{
    if(x==0||x==1)
    return false;

    for(int i=2;i<=x-1;i++)
    {
        if(x%i==0)
        return false;
    }

    return true;
}

void sum(int n)
{
    int flag=0;
    for(int i=0;i<=n;i++)
    {
        if(isprime(i)&& isprime(n-i))
        {
            flag=i;
            break;
        }
    }

    if(flag)
    cout<<flag<<" "<<n-flag;
    else
    cout<<"-1";
}
int main()
 {
	//code
	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;

	    sum(n);
	    cout<<endl;
	}
	return 0;
}
