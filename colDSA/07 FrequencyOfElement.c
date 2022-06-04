// 7 - WACP to find the frequency of an element WAP to find occurrence of a number

#include <stdio.h>
int main()
{
    int arr[20],freq[20];
    int size,i,j,count;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("enter elements in array: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    
    for(i=0;i<size;i++){
        count=1;
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=count;
        }
    }
    
    printf("\nFrequency of all elements of array : \n");
    for(i=0;i<size;i++){
        if(freq[i]!=0);{
            printf("frequency of %d is %d\n",arr[i],freq[i]);
        }
    }
    return 0;
}
