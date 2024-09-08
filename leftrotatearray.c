#include <stdio.h>
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int d, int n) {
    d %= n;
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}
int main() {
    int n,k,t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while (t--){
        printf("Enter the size of array and rotation count: ");
        scanf("%d%d", &n,&k);
        int arr[n];
        printf("Enter the elements of array: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        rotateArray(arr, k, n);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}