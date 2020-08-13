#include <stdio.h>



int main() {

    int N,i,j,a[1000],b[1000];

    printf("Enter the number of elements in array\n");
    scanf("%d",&N);

    printf("Enter array elements\n");
    for(i=0;i<N;i++)
       scanf("%d",&a[i]);

    for(i=N-1,j=0;i>=0;i--,j++) //copying array elements into b from a in reverse order
       b[j]=a[i];

    printf("Reversed array is:\n");
    for(j=0;j<N;j++)
        printf("%d\n",b[j]);

    return 0;

}