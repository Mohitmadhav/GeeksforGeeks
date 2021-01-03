#include<bits/stdc++.h>

using namespace std;

unsigned long mod = 1000000007;

unsigned long getnCr(unsigned int N, unsigned int R){
    R = (R > N/2 && R < N) ? N-R : R;
    if( R > N) return 0;

    unsigned long nCr[N+1][R+1];
    for(int n = 0; n < N+1; n++){
        for(int r = 0; r < R+1; r++){

            if(n < r){ continue;}
            if(r == 0 || r == n){ nCr[n][r] = 1; continue;}
            if(r > n/2){nCr[n][r] = nCr[n][n-r]; continue;}
            nCr[n][r] = (nCr[n-1][r-1] + nCr[n-1][r])%mod;
        }
    }
    return nCr[N][R];
}

int main()
 {
	//code
	int t;
	cin>>t;

	while(t--)
	{
	    unsigned int n,k;
	    cin>>n>>k;



	    cout<< getnCr(n,k)<<endl;
	}
	return 0;
}
