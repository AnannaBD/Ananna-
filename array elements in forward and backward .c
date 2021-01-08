#include <stdio.h>

int main() {
    int arr[100],i,j,k,l,size,forward, backward;
    /*start input from screen*/
    printf("Enter the size of array:\n");
    scanf("%d", &size);
    printf("Enter the %d array elements:\n",size);
    for(i=0; i<size ; i++) {
        scanf("%d", &arr[i]);
    }
    /*Finishing input from screen*/

    /*forward value*/
    printf("Forward value of the array is:-\n");
    for(j=0; j<size ; j++) {
        forward= arr[j];
        printf("%d """, forward);
    }
    /*Reverse Value*/
    printf("\n Reverse value of the array is :- \n");
    l= size - 1;
    for(k=l; k>=0 ; k--){
    backward = arr[k];
    printf("%d ", backward); 
    }

}