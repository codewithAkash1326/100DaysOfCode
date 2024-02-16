// Codestudio Sort 0 1 2
//   Problem statement
// You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

// Note :
// Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.


#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
     int Ocnt=0,fcnt=0,tcnt=0;
     int idx=0;
     for(int i=0;i<n;i++){
        if(arr[i]==0) Ocnt++;
        else if(arr[i]==1) fcnt++;
        else tcnt++;
     }
     for(int i=0;i<Ocnt;i++){
        arr[idx++]=0;
     }

     for(int i=Ocnt;i<Ocnt+fcnt;i++){
        arr[idx++]=1;
     }

     for(int i=Ocnt+fcnt;i<Ocnt+fcnt+tcnt;i++){
        arr[idx++]=2;
     }

}
