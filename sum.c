#include <stdio.h>

int main() {

     int N,i,a[1000];
     int sum = 0;

    printf("Enter the number of elements in array\n");
    scanf("%d",&N);

    printf("Enter array elements\n");
    for(i=0;i<N;i++)
       scanf("%d",&a[i]);

     for(i=0;i<N;i++) //summing up all the elements
        sum += a[i];
    
    printf("Sum of array elements is %d\n",sum);
    
}