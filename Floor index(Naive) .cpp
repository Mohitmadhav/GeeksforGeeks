#include<iostream>
using namespace std;

int floor_Index(long int a[],long int n,long int k)
{
    int c=-1;
    for(int i=0;i<n;i++)
    {
        while(a[i]<=k)
        c++;
    }
    return c;

}
int main()
 {
	//code
	int t;
	cin>>t;

	while(t--)
	{
	    long int n,k;
	    cin>>n>>k;
	    long int a[n];

	    for(int i=0;i<n;i++)
	    cin>>a[i];

	    cout<<floor_Index(a,n,k)<<endl;

	}
	return 0;
}
