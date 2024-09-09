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

    int i=0;
    int j=n-1;
    while(i<n && j>=0){
        if(arr[i][j]==1){
            max=i;
            j--;
        }
        else{
            i++;
        }    
    }

    printf("The row with max no. of 1 is %d \n",max);
    return 0;
}

