#include<bits/stdc++.h>

using namespace std;

vector<long> common(long a[],long b[],long c[],long n1,long n2,long n3)
{
     long i=0,j=0,k=0;
     vector<long> v;

     while(i<n1 &&j <n2 && k<n3)
     {
         if(a[i]==b[j] && b[j]==c[k])
         {
             v.push_back(a[i]);
             i++;j++;k++;
         }

         else if(a[i]<b[j])
         i++;

         else if(b[j]<c[k])
         j++;
         else
         k++;
     }

   return v;
}

int main()
 {
	//code
	int t;
	cin>>t;

	while(t--)
	{
	    long n1,n2,n3;
	    cin>>n1>>n2>>n3;

	    long a[n1],b[n2],c[n3];

	    for(long i=0;i<n1;i++)
	    cin>>a[i];

	    for(long j=0;j<n2;j++)
	    cin>>b[j];

	    for(long k=0;k<n3;k++)
	    cin>>c[k];

	    vector<long>final= common(a,b,c,n1,n2,n3);



	    if(final.empty())
	    final.push_back(-1);

	    long len=final.size();

	    vector<long>::iterator ip;
	    ip=std::unique(final.begin(),final.begin()+len);
	    final.resize(std::distance(final.begin(),ip));

	    long lenf=final.size();

	    for(long p=0;p<lenf;p++)
	    cout<<final[p]<<" ";

	    cout<<endl;
	}
	return 0;
}
