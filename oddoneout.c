#include<stdio.h>
int main(){
    int n,t;
    printf("Enter the number of test cases: ");
    scanf("%d",&t);
    while(t--){
        printf("Enter the size of array: ");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the elements of array: ");
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        int temp=arr[0];
        for(int i=1;i<n;i++){
            temp = temp^arr[i];
        }
        if(temp)
        printf("The element is %d\n",temp);
        else 
        printf("No such element present\n");
    }
    return 0;
}
