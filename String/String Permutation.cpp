#include<bits/stdc++.h>

using namespace std;

void permutations(vector<string>& v, string str, int l,int r)
{
   if(l==r)
   v.push_back(str);

   else
   {
       for(int i=l;i<=r; i++)
       {
           swap(str[l],str[i]);
           permutations(v,str,l+1,r);
           swap(str[l],str[i]);
       }
   }

}


int main()
 {
	//code

	int t;
	cin>>t;

	while(t--)
	{
	    string str;
	    cin>>str;
	    int len=str.length();
	    vector<string> v;

	   permutations(v,str,0,len-1);
	   sort(v.begin(),v.end());

	   int n=v.size();

	   for(int i=0; i<n;i++)
	   {
	       cout<<v[i]<<" ";
	   }
        //You can also use next_permutation (STL C++)
        //See Code Library - Youtube
        // https://www.youtube.com/watch?v=6XRNJ1QdSfs&list=PLDdcY4olLQk0A0o2U0fOUjmO2v3X6GOxX&index=9
	   cout<<endl;

	}
	return 0;
}
