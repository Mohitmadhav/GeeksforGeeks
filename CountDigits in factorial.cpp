#include<bits/stdc++.h>

using namespace std;

long digits(int n)
{
    double s=0.0;
    for(int i=n;i>0;i--)
    {
        s=s+log10(i);
    }

    return floor(s+1);
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

	    cout<<digits(n)<<endl;
	}
	return 0;
}
