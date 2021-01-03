#include <iostream>
#include<bits/stdc++.h>

using namespace std;

long int merge(long int a[],long int l,long int r,long int mid,long int n);

long int mergesort(long int a[],long int l,long int r,long int n)
{

    long int mid;long int inv_count=0;
    if(l<r)
    {
    mid=(l+r)/2;

    inv_count+=mergesort(a,l,mid,n);
    inv_count+=mergesort(a,mid+1,r,n);
    inv_count+=merge(a,l,r,mid+1,n);
    }

    return inv_count;
}

long int merge(long int a[],long int l,long int r,long int mid,long int n)
{
    int temp[n];long int i,j,k;long int inv_count=0;
    i=l;
    j=mid;
    k=l;

    while((i<=mid-1) && (j<=r))
    {
        if(a[i]<=a[j])
        temp[k++]=a[i++];
        else
        {
            temp[k++]=a[j++];
            inv_count+=mid-i;
        }
    }

    //remaining elements

    while(i<=mid-1)
    temp[k++]=a[i++];
    while(j<=r)
    temp[k++]=a[j++];

    for(int i=l;i<=r;i++)
    a[i]=temp[i];

    return inv_count;
}

int main() {
	//code

	int t;
	cin>>t;

	while(t-->0)
	{
	    long int n;
	    cin>>n;

	    long int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    cout<<mergesort(a,0,n-1,n)<<endl;

	}
	return 0;
}
