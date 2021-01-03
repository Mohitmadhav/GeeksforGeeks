#include<bits/stdc++.h>

using namespace std;

int gp(double a,double b,int n)
{
    double r=(b/a);

    double ans=(double)(a)*(pow(r,n-1));

    return floor(ans);
}

int main()
 {
	//code

	int t;
	cin>>t;

	while(t--)
	{
	    double a,b;
	    cin>>a>>b;

	    int n;
	    cin>>n;

	    cout<<gp(a,b,n)<<endl;
	}
	return 0;
}
