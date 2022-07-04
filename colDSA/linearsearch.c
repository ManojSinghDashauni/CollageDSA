//WAP to implement linear search.
#include <stdio.h>
#define N 10
int main()
{
  int arr[N],num,i,n,pos=-1,found=0;
  
  printf("\n Enter the number of elements in the array : ");
  scanf("%d",&n);
  printf("\n Enter the elements : ");
  
  for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
  }
  
  printf("\nEnter the number that has to be searched : ");
  scanf("%d",&num);
  
  for(i=0;i<n;i++){
      if(arr[i]==num){
          found=1;
          pos=i+1;
          printf("\n%d is found in the array at position = %d",num,pos);
          break;
      }
  }
  
  if(found==0){
      printf("\n%d does not exist in the array",num);
  }
  
  return 0;
}
