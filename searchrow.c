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

    for(int j=0;j<m;j++){
    if(arr[j][0]<=x && x<=arr[j][n-1]){
        for(int i=0;i<n;i++){
          if(x== arr[j][i]){
          found=1;
          break;
          }
        }
    }
    }
    if(found==1)
    printf("the element is present\n");
    else
    printf("the element is not pressnt\n");
return 0;
}

