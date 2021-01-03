#include<bits/stdc++.h>

using namespace std;

long fact(long n)
{
    if(n==0||n==1)
    return 1;

    else
    {

        long f=1;
    for(long i=n;i>0;i--)
     f=f*i;

    return f;
    }


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

	    cout<<fact(n)<<endl;
	}
	return 0;
}
