//Problem Statement: https://www.geeksforgeeks.org/find-the-element-before-which-all-the-elements-are-smaller-than-it-and-after-which-all-are-greater-than-it/

#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n) {
    
    int left[n],right[n];
    left[0]= INT_MIN;
    right[n-1]=INT_MAX;
    
    for(int i=0;i<n-1;i++)
    left[i+1]=max(left[i],arr[i]);
    
    for(int j=n-1;j>0;j--)
    right[j-1]=min(right[j],arr[j]);
    
    for(int i=1;i<n-1;i++){
        if(arr[i]>=left[i] && arr[i] <=right[i]){
            return arr[i];
        }
        
      
    }
    return -1;
    
}

// #include <iostream>
// #include<bits/stdc++.h>

// using namespace std;

// int leftMax[10000000];
// int eq_element(int arr[],int n)
// {
//    leftMax[0] = arr[0];
//     for (int i = 1; i < n; i++)
//         leftMax[i] = max(leftMax[i - 1], arr[i]);
//     int index = -1, rightMin = arr[n - 1], minIndex = INT_MAX;
//     for (int i = n - 2; i > 0; i--)
//     {
//         if (arr[i] >= leftMax[i] && arr[i] <= rightMin)
//             minIndex = min(minIndex, i);
//         rightMin = min(rightMin, arr[i]);
//     }
//     return minIndex == INT_MAX ? -1 : arr[minIndex];
// }

// int main() {
// 	//code

// 	int t;
// 	cin>>t;

// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    int a[n];

// 	    for(int i=0;i<n;i++)
// 	    cin>>a[i];

// 	    cout<<eq_element(a,n)<<endl;
// 	}
// 	return 0;
// }
