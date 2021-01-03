#include<iostream>

using namespace std;

long int NoOfPaths(int m,int n)
{
    long int count[m][n];
    for(int i=0;i<m;i++)
    count[i][0]=1;

    for(int j=0;j<n;j++)
    count[0][j]=1;

    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        count[i][j]=((count[i-1][j]+count[i][j-1])%(1000000007));
    }

    return count[m-1][n-1];
}
int main()
 {
	//code
	int t;
	cin>>t;

	while(t--)
    {
        int m,n;
        cin>>m>>n;

        cout<<NoOfPaths(m,n)<<endl;
    }
	return 0;
}
