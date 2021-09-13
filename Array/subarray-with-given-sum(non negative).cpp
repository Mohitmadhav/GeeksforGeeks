//Problem Statement :https://www.geeksforgeeks.org/find-subarray-with-given-sum/

#include <iostream>
using namespace std;

int main() {
	//code
	int n,s,t;
	cin>>t;

	 while(t-->0)
	{
	    cin>>n>>s;
	    int ar[1000000];int start=0;const int a=-1;

	    for(int i=0;i<n;i++)
	    cin>>ar[i];

	    int sum=ar[0];

	    for(int j=1;j<=n;j++)
	    {

	        while(sum>s && start<j-1)
	        {
	            sum=sum-ar[start];
	            start++;
	        }
	        if(sum==s)
	        {
	            cout<<start+1<<" "<<j<<endl;
	            break;
	        }

	        if (j<n)
	        sum=sum+ar[j];

	    }

	    if(sum!=s)
	   cout<<a<<endl;

	}
	return 0;
}
