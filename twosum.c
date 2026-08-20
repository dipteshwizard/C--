#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int s;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the sum to find the pair: ");
    scanf("%d",&s);
    //int s=7;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==s){
                printf("The pair is %d and %d\n",arr[i],arr[j]);
            }
        }

    }
    return 0;
}