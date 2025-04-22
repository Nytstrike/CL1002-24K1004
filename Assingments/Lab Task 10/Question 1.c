// Write a recursive function that takes an array and its size as input and prints all the
// elements.
#include<stdio.h>
void print_array(int arr[],int n){
    int j=n-1;
    printf("%d\n",arr[j]);
    if(j>-1){
        print_array(arr,j);
    }
}
int main (){
    int arr[100];
    int size;
    printf("Enter array size:");
    scanf("%d",&size);
    for(int i;i<size;i++){
        printf("\nEnter number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    print_array(arr,size);
}
