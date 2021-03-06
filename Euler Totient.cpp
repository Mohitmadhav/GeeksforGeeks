#include<bits/stdc++.h>
using namespace std;

vector<long long> sieveOfE(int n)
{
    bool prime[n+1];
    vector<long long> v;
    memset(prime, true, sizeof(prime));

    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==true) {
            for(int j=i*2;j<=n;j+=i) {
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<n+1;i++) {
        if(prime[i]==true) {
            v.push_back(i);
        }
    }
    return v;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> v;
        v=sieveOfE(40);
        long long res=1;
        for(long long i=0;i<v.size();i++)
        {
            if(res*v[i]<=n) {
                res=res*v[i];
            }
        }
        cout<<res<<"\n";
    }
}
