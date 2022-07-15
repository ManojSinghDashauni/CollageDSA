//Name- Manoj Singh Dashauni
//Section - F
//Roll No. - 12

//Objective: WAP to find common elements in array.
//Description: In this program the user is asked to input elements in the elements in array and find the common duplicate elements. 


#include<stdio.h>

void main(){
    int i,arr[20],j,no;
    printf("Enter size of array: ");
    scanf("%d",&no);
    printf("Enter any %d elements in array: ",no);
    for(i=0;i<no;i++){
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements are: ");
    for(i=0; i<no; i++){
        for(j=i+1;j<no;j++){
            if(arr[i]==arr[j]){
                printf("%d\n",arr[i]);
            }
        }
    }
}

/*
OUTPUT
Enter size of array: 5
Enter any 5 elements in array: 1 3 2 3 4
Duplicate elements are: 3
*/