//Problem Statement: https://practice.geeksforgeeks.org/problems/make-a-distinct-digit-array2007/1#
//https://www.geeksforgeeks.org/print-distinct-elements-given-integer-array/

// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
	public:
   	vector<int>  common_digits(vector<int>nums){
   	    // Code here
   	   
   	    set<int> dis;
   	    int n=nums.size();
   	    for(int i=0;i<n;i++){
   	       while(nums[i]!=0){
   	           int rem=nums[i]%10;
   	           dis.insert(rem);
   	           nums[i]=nums[i]/10;
   	       }
   	    }
   	    vector<int> ans(dis.begin(),dis.end()); 
   	    return ans;
   	}    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		vector<int> ans = ob.common_digits(nums);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}  
	return 0;
}  // } Driver Code Ends