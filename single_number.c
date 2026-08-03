/*Given an array of nonnegative integers, where all numbers occur even number of times except
one number which occurs odd number of times. Write an algorithm and a program to find this
number. (Time complexity = O(n))
Input format:
The first line contains number of test cases, T.
For each test case, there will be two input lines.
First line contains n (the size of array).
Second line contains space-separated integers describing array.
Output format:
The output will have T number of lines.
For each test case, output will be the element which occured odd number of times. If no such
element is present in the array, then print “No such element present”.*/


#include<stdio.h>
int main(){
 int arr[5]={2,4,3,2,3};
 int i;
 int ans=0;
 for (i=0;i<5;i++){
    ans=ans^arr[i];
 }
  if(ans==0){
      printf("no such element present");
  }
else{
    printf("the single number number odd number of times is:%d",ans);}
}