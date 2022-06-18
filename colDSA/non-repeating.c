//non-repeating element

#include<stdio.h>
int non_repeating(int arr[], int length);

int main(){
    int array[]={1,3,5,7,9,0,1,2,3,4,5,6,7,8,9,0};
    int length=15;
    int count=non_repeating(array,length);
    printf("count is %d",count);
    return 0;
}
int non_repeating(int arr[],int length){
    int i,j,count=0;
    
    for(i=0;i<length;i++){
        for(j=0;j<length;j++){
            if(arr[i]==arr[j]&& i!=j){
                break;
            }
        }
            if(j==length){
                count++;
            }
    }
    return count;
}