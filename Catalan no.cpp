#include<iostream>
#include <boost/multiprecision/cpp_int.hpp>

using boost::multiprecision::cpp_int;
using namespace std;

 cpp_int binomialCoeff(unsigned int n,unsigned int k)
{
 cpp_int res=1;

    if(k>n-k)
    k=n-k;

    for(int i=0;i<k;i++)
    {
        res*=n-i;
        res/=i+1;
    }

    return res;
}

 cpp_int catalan(unsigned int n)
{
     cpp_int  c =binomialCoeff(2*n,n);

    return c/(n+1);
}
int main()
 {
	//code
	int t;
	cin>>t;

	while(t--)
	{
	    unsigned int n;
	    cin>>n;

	    cout<<catalan(n)<<endl;
	}
	return 0;
}
