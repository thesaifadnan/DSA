#include<stdio.h>
void rotate(int n,int arr[n][n]){
    int prev,temp, cur;
    for(int i=0; i<n/2; i++){
        prev = arr[i][i];
        //shift all first row element to right position
        for(int j=i+1; j<n-i; j++){
            cur = arr[i][j];
            arr[i][j] = prev;
            prev = cur;
        }
        //move elements from the rightmost column to the bottom row.
        for(int j=i+1; j<n-i; j++){
            cur = arr[j][n-1-i];
            arr[j][n-1-i] = prev;
            prev = cur;
        }
        //move elements from the bottom row to the leftmost column.
        for(int j=n-i-1; j>i; j--){
            cur = arr[n-1-i][j-1];
            arr[n-1-i][j-1] = prev;
            prev = cur;
        }
        //shift all last row element to left position
        for(int j=n-i-1; j>i; j--){
            cur = arr[j-1][i];
            arr[j-1][i] = prev;
            prev = cur;
        }
    }
    return;
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the elements of the array:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    rotate(n,arr);
    printf("The arrary after rotatating it clockwise : ");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}