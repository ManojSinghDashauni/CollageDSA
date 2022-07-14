//Name : Manoj Singh Dashauni
//Section: F
//Roll No. : 12

//Objective: WACP to implement merge sort
//Description: In this program we will enter the elements in an array and then sort  the element in the array in ascending order by implementing merge sort.


#include <stdio.h>
void merge(int [], int, int, int);
void mergesort(int [],int, int);
void main()
{
    int array[50];
    int i, size;
    printf("Enter total number of elements:");
    scanf("%d", &size);
    
    printf("Enter the elements:\n");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    
    mergesort(array,0,size-1);
    printf("After merge sort:\n");
    for(i=0;i<size;i++){
        printf("%d   ",array[i]);
    }
}

void mergesort(int array[],int first,int last)
{
    int mid;
    if(first < last){
        mid = (first + last) / 2;
        mergesort(array, first, mid);
        mergesort(array, mid + 1, last);
        merge(array, first, mid, last);
    }
}

void merge(int array[],int first,int mid,int last)
{
    int i, m, k, j, temp[50];
    j = first;
    i = first;
    m= mid + 1;
    
    while ((j<= mid) && (m <= last)){
        if (array[j] <=array[m]){
            temp[i] = array[j];
            j++;
        }
        else{
            temp[i] = array[m];
            m++;
        }
        i++;
    }
    
    
    if (j> mid){
        for (k = m; k <= last; k++){
            temp[i] =array[k];
            i++;
        }
    }
    
    else{
        for (k = j; k <= mid; k++){
             temp[i] = array[k];
             i++;
        }
    }
    
    for (k = first; k <= last; k++){
       array[k] = temp[k];
    }
}

/*
output

Enter total number of elements:5
Enter the elements:
3 2 5 1 4
After merge sort:
1   2   3   4   5 
*/
