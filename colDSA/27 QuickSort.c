//Name : Manoj Singh Dashauni
//Section: F
//Roll No. : 12

//Objective: WACP to implement quick sort
//Description: In this program we will enter the elements in an array and then sort the element in the array in ascending order by implementing quick sort.


#include<stdio.h>
#define MAX 100
int partition(int arr[],int first,int last)
{
   int i, j, pivot, temp;
      i=first+1;
      j=last;
      pivot=arr[first];
      while(i<=j)
        {
         while(arr[i]<pivot&&i<last)
            i++;
         while(arr[j]>pivot)
            j--;
         if(i<j)
         {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j++;
         }
         else
            i++;
      }
      arr[first]=arr[j];
      arr[j]=pivot;
      return j;

}

void quick(int arr[],int first,int last)
{
    int pivloc;
    if(first>=last)
        return;
    pivloc=partition(arr,first,last);
    quick(arr,first,pivloc-1);
    quick(arr,pivloc+1,last);
}

int main()
{
   int i, n, array[MAX];

   printf("Enter the number of elements: ");
   scanf("%d",&n);

   printf("Enter elements:\n");
   for(i=0;i<n;i++)
      scanf("%d",&array[i]);

   quick(array,0,n-1);

   printf("Order of Sorted elements is:\n");
   for(i=0;i<n;i++)
   {
      printf("%d",array[i]);
    printf("\n");
   }
   return 0;
}



/*
output

Enter the number of elements: 5
Enter elements:
2 4 1 5 8
Order of Sorted elements is:
1
2
4
5
8
*/
