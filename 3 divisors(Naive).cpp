#include<bits/stdc++.h>

using namespace std;

int main()
 {
	//code

	int t;
	cin>>t;

	while(t--)
	{
	    long n;
	    cin>>n;
	    long c=0;long m=0;

	    for(long i=1;i<=n;i++)
	    {
	        c=0;
	        for(long j=1;j<=i;j++)
	        {
	            if(i%j==0)
	            c++;

	        }

	        if(c==3)
	        m++;
	    }


	    cout<<m<<endl;
	}

	return 0;
}
