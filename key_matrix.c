/*Given a matrix of size n X n, where every row and every column is sorted in increasing order.
Write an algorithm and a program to find whether the given key element is present in the matrix
or not. (Linear time complexity)
Input Format:
First line contains n (the size of matrix).
For next n input lines, each line contains space-separated n integers describing each row of the
matrix.
Last line of input will contain key integer to be searched
Output Format:
Output will be “Present” if the key element is found in the array, otherwise print “Not Present*/
#include <stdio.h>
int main() {
    int arr[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    int key;
    int i = 0, j = 3;
    printf("Enter key element: ");
    scanf("%d", &key);
    while (i < 4 && j >= 0) {
  if (arr[i][j] > key) {
   j--;
}
else if (arr[i][j] < key) 
{   i++;}
else {
printf("Key found at [%d][%d]", i, j);
return 0; }}
printf("Key not found");
return 0;
}