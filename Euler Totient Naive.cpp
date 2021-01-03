#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    return b;

    return gcd(b%a,a);
}

long phi(long n)
{
    long ans=1;

    for(long i=2;i<n;i++)
        if(gcd(i,n)==1)
        ans++;

        return ans;
}

int main()
 {
	//code
	int t;
	cin>>t;

	while(t--)
	{
	   long n;
	    cin>>n;

	     float x=0.0;
	    for(long i=1;i<=n;i++)
	    {
	        float a=(float)(i/phi(i));
	       x=max(x,a);
	    }

	    cout<<x<<endl;

	}
	return 0;
}
