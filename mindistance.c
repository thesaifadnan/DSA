#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int mindis(int, int, int[], int);
int main(){
    int t;
    printf("enter the number of test cases: ");
    scanf("%d",&t);
    while(t--){
        int n;
        printf("enter the size of array: ");
        scanf("%d",&n);
        int arr[n];
        printf("enter the elements of array: ");
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int x,y;
        printf("enter the elements of array you want the distance b/w: ");
        scanf("%d%d",&x,&y);
        int mind = mindis(x,y, arr,n);
        printf("the min distance is %d \n",mind);
    }
    
}

int mindis(int x, int y, int arr[], int n){
    int a=-1;
    int b=-1;
    int dis,min=INT_MAX;
    for(int i =0; i<n;i++){
        if(x==arr[i]){
            a=i;
        }
        if(y==arr[i]){
            b=i;
        }
        if(a!=-1 && b!=-1){
            dis=abs(a-b);
            if(dis<min){
                min=dis;
            }
        }
    }
    if(min==INT_MAX){
        return -1;
    }
    return min;
}
