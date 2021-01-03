// C++ program for 3-way quick sort
#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// A utility function to print an array
void printarr(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		printf("%d ", a[i]);
	printf("\n");
}

/* This function partitions a[] in three parts
a) a[l..i] contains all elements smaller than pivot
b) a[i+1..j-1] contains all occurrences of pivot
c) a[j..r] contains all elements greater than pivot */

//It uses Dutch National Flag Algorithm
void partition(int a[], int low, int high, int &i, int &j)
{
	// To handle 2 elements
	if (high - low <= 1)
	{
		if (a[high] < a[low])
			swap(&a[high], &a[low]);
		i = low;
		j = high;
		return;
	}

	int mid = low;
	int pivot = a[high];
	while (mid <= high)
	{
		if (a[mid]<pivot)
			swap(&a[low++], &a[mid++]);
		else if (a[mid]==pivot)
			mid++;
		else if (a[mid]>pivot)
			swap(&a[mid], &a[high--]);
	}

	//update i and j
	i = low-1;
	j = mid; //or high-1
}

// 3-way partition based quick sort
void quicksort(int a[], int low, int high)
{
	if (low>=high) //1 or 0 elements
		return;

	int i, j;

	// Note that i and j are passed as reference
	partition(a, low, high, i, j);

	// Recur two halves
	quicksort(a, low, i);
	quicksort(a, j, high);
}

// Driver program
int main()
{
    int t;
    cin>>t;

    while(t-->0)
    {
        int size;
    cin>>size;
	int a[size] ;
	for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

	printarr(a, size);
	quicksort(a, 0, size - 1);
	printarr(a, size);
    }
	return 0;
}
