#include<iostream>
using namespace std;

int search(int a[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        return i+1;
    }

    return -1;
}
int main()
 {
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int a[n];

        for(int i=0;i<n;i++)
        cin>>a[i];

        cout<<search(a,n,k)<<"\n";
    }
	return 0;
}
