#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int leftMax[10000000];
int eq_element(int arr[],int n)
{
   leftMax[0] = arr[0];
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i - 1], arr[i]);
    int index = -1, rightMin = arr[n - 1], minIndex = INT_MAX;
    for (int i = n - 2; i > 0; i--)
    {
        if (arr[i] >= leftMax[i] && arr[i] <= rightMin)
            minIndex = min(minIndex, i);
        rightMin = min(rightMin, arr[i]);
    }
    return minIndex == INT_MAX ? -1 : arr[minIndex];
}

int main() {
	//code

	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];

	    for(int i=0;i<n;i++)
	    cin>>a[i];

	    cout<<eq_element(a,n)<<endl;
	}
	return 0;
}
