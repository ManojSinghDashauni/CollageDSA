//WAP to find occurance of number

#include<stdio.h>
#define N 5

int main(){
    int a[N],i,search;
    
    printf("enter %d integer number \n",N);
    
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the no to be searched \n");
    scanf("%d",&search);
    
    
    for(i=0;i<N;i++){
        if(a[i]==search){
            printf("%d has appeared at position %d in the array \n",search,i+1);
        }
    }
}