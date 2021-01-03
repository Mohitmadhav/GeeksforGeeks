#include<bits stdc++.h="">
using namespace std;
int main()
{
int t; cin>>t;
while(t--)
{
int n; cin>>n;
int a[n];
for(int i=0; i<n; i++)cin="">>a[i];
int x; cin>>x;
if(binary_search(a, a+n, x))
{
int i=0, j;
while(a[i] < x) i++;
j=i;
while(a[j] == x) j++;
cout << i << " "<< j-1 << endl;
}else{
cout << -1<< endl;
}
}
return 0;
}
