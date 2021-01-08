#include <stdio.h>

int main() {
    int arr[100],i,search,size;
    /*start input from screen*/
    printf("Enter the size of array:\n");
    scanf("%d", &size);
    printf("Enter the %d array elements:\n",size);
    for(i=0; i<size ; i++) {
        scanf("%d", &arr[i]);
    }
    /*Finishing input from screen*/
    /* input search*/
    printf("input the value you want to search:-");
    scanf("%d", &search);
    /*start searching*/
    for(i=0; i<size ; i++){
     if(search==arr[i]){
    printf("The value is in the array at positio %d ", i+1);
    }
    else ("The value doesn’t exist");
    }
    
    
}