#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int temp, i, j, n;
    printf("Enter number of times to shift: ");
    scanf("%d", &n);
    int N = 10; 
    int nts = n % N; 
    for (j = 0; j < nts; j++) {
        temp = arr[0];
        for (i = 0; i < N - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[N - 1] = temp; 
    }
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}