#include <iostream>
using namespace std;

int candidate(int a[],int size)
{
    int maj_index=0;int count=1;
    for(int i=0;i<size;i++)
    {
        if(a[maj_index]==a[i])
        count++;
        else
        count--;
        if(count==0)
        {
            maj_index=i;
            count=1;
        }
    }

    return a[maj_index];
}

bool majority(int a[],int size,int cand)
{
    int c=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==cand)
        c++;}
        if(c>size/2)
        return 1;
        else
        return 0;

}

void printMajority(int a[],int size)
{
    int cand= candidate(a,size);
    if(majority(a,size,cand))
    cout<<cand<<endl;
    else
    cout<<-1<<endl;


}
int main() {
	//code

	int t;
	cin>>t;

	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int ar[n];

	     for(int i=0;i<n;i++)
	     {
	         cin>>ar[i];
	     }

	     printMajority(ar,n);
	}
	return 0;
}
