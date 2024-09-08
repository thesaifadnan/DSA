#include<stdio.h>
int main(){
    int m,x,y,n;
    int max=0;
    printf("Enter the size ( No . of rows & coloumns ) of array: ");
    scanf("%d%d",&m,&n);
    int arr[m][n];

    printf("Enter the elements of array: \n");
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
    }

    printf("The elements of array : \n");
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
    }


    for(int j=0;j<m;j++){
            x=0;
        for(int i=0;i<n;i++){
         x=x+ arr[i][j];
          }
          if(x>max){
          max=x;
          y=j;
          }
        }

    printf("The row with max no. of 1 is %d \n",y+1);
    return 0;
}

