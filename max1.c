#include <stdio.h>

int main() {
    int  arr[5][6]={{0,0,0,1,1,1},{0,0,1,1,1,1},{0,0,0,0,1,1},{1,1,1,1,1,1},{0,0,0,0,0,1}};
    int i=0;
    int maxrow;
    int j=5;
    while(i<=5&&j>=0){
        if(arr[i][j]==1){
             maxrow=i;
            j--;
            
        }
        else{
            i++;
        
        }
        
    }
printf("%d",maxrow);
    return 0;
}