// Sample Input 1 :
// 1
// 5
// 3 2 -6 1 0
// Sample Output 1:
// 4
// Explanation for Input 1:
// The first positive number is 1 and it is present in the array similarly 2 and 3 are also present in the array. 4 is missing from the array. Thus, the minimum positive integer that is missing is 4.
// Sample Input 2 :
// 1
// 5
// 0 1 2 3 4
// Sample Output 2:
// 5


#include<bits/stdc++.h>
using namespace std;
 
int firstMissing(int arr[], int n)
{
    // Write your code here.
    sort(arr,arr+n);
    int value=1;
    for(int i=0;i<n;i++){
        if(arr[i]<=0){
            
            continue;
        }
        else if(arr[i]!=value){
            return value;
        }

        value++;
    }

    return value;
    
    

}
int main(){
 
 
 
return 0;
}