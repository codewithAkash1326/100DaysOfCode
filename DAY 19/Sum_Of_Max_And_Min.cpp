#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	sort(arr,arr+n);

    return arr[0]+arr[n-1];

}
