#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int m,x,n;
    int found=0;
    printf("enter the size of array: ");
    scanf("%d %d",&m,&n);
    int arr[m][n];

    printf("enter the elements of array: ");
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
    }

    printf("the elements of array\n");
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
    }

    printf("enter the elements of array you want search: ");
    scanf("%d",&x);
    int i=0, j=n-1;
    while(i<n && j>=0){
        if(arr[i][j]==x){
            found=1;
            break;
        }
        else if(arr[i][j]>x)
            j--;
        else
            i++;
    }
    if(found==1)
    printf("The element is present\n");
    else
    printf("The element is not pressnt\n");
return 0;
}

