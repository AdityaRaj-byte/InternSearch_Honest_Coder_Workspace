#include <stdio.h>



int main() {

    int N,i,j,flag,a[1000];

    printf("Enter the number of elements in array\n");
    scanf("%d",&N);

    printf("Enter array elements\n");
    for(i=0;i<N;i++)
       scanf("%d",&a[i]);

    j = i-1;
    i = 0;

    while(i<j) {   //replacing elements from first with  elements from last one by one
        flag =a[i];
        a[i] =a[j];
        a[j]=flag;
        i++;
        j--;
    }

    printf("Reversed array is:\n");
    for(i=0;i<N;i++)
        printf("%d\n",a[i]);

    return 0;

}
