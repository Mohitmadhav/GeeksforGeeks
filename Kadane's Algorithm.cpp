#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int max_sum(vector <int> ar)
{   int n;int curr_sum=ar[0];int sum=ar[0];
    n=ar.size();

    for(int i=1;i<n;i++)
    {
        curr_sum=max(ar[i],curr_sum+ar[i]);
        sum=max(sum,curr_sum);
    }
    return sum;

}


int main() {
	//code
	int t;
	cin>>t;

	while(t-->0)
	{
	    int n;
	    cin>>n;

	    vector <int> a;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }

	    cout<<max_sum(a)<<endl;

	}
	return 0;
}
