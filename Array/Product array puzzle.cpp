#include<iostream>
using namespace std;

void prod(int a[],int n)
{
    int p=1;
    for(int i=0;i<n;i++)
    {
        p=p*a[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<p/a[i]<<" ";
    }
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

	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];

	    prod(a,n);
	    cout<<endl;
	}
	return 0;
}
