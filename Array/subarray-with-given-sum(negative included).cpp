//Problem Statement: https://www.geeksforgeeks.org/find-subarray-with-given-sum-in-array-of-integers/


#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int subArraySum(int arr[], int n, int sum)
    {
    	//code here.
    	int pre_sum=0;
    	int count=0;
    	unordered_map<int,int>mp;
    	
    	for(int i=0;i<n;i++){
    	    pre_sum+=arr[i];
    	    
    	    if(pre_sum==sum)
    	    count++;
    	    
    	    if(mp.find(pre_sum-sum)!=mp.end())
    	    count+=mp[pre_sum-sum];
    	    
    	    mp[pre_sum]++;
    	        
    	    
    	}
    	return count;
    }
};


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution ob;
	    cout<<ob.subArraySum(arr, n, sum);
	    cout<<'\n';
	}
	return 0;
}  