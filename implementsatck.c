#include <stdio.h>

int main(){
    int n,top=-1;
    printf("Enter the Size of Stck: ");
    scanf("%d", &n);
    int arr[n];
    int operation=1;
    while(operation){
    printf("Press Number to perform Operation: \n1. Push\n2. Pop\n3. Peek\n4. Display\n0. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &operation);
        switch(operation){
            case 1:
                if(top == n-1){
                    printf("Stack Overflow!\n");
                } else {
                    printf("Enter the value to push: ");
                    scanf("%d", &arr[++top]);
                }
                break;
            case 2:
                if(top == -1){
                    printf("Stack Underflow!\n");
                } else {
                    printf("Popped element: %d\n", arr[top--]);
                }
                break;
            case 3:
                if(top == -1){
                    printf("Stack is empty!\n");
                } else {
                    printf("Top element: %d\n", arr[top]);
                }
                break;
            case 4:
                if(top == -1){
                    printf("Stack Empty!\n");
                }
                else{
                    for (int i = top; i>=0;i--){
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 0:
                printf("Program Ended!\n");
                break;
        }
    }
}