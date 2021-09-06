//Explanation: https://www.geeksforgeeks.org/sum-of-all-subarrays/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
class Solution{   
public:
    long long subarraySum(long long a[], long long n)
    {
        // Your code goes here
        ll sum=0;
        ll ans=0;
        for(ll i=0;i<n;i++){
            ll x=(n-i);
            ll y= x*(i+1);
            ll z= ((a[i]%mod)*(y%mod))%mod;
             ans= (ans%mod+ z%mod)%mod;
        }
        
        return ans;
    }
};


int main()
 {
     long long t; 
     cin>>t;
     while(t--)
     {
         long long n; cin>>n;
         long long a[n+5];
         for(long long i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.subarraySum(a, n)<<endl;
     }
    return 0;
}
