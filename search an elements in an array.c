#include <stdio.h>

int main() {
    int arr[100],i,search,size,found;
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
    found=0;
    for(i=0; i<size ; i++){
     if(search==arr[i]){
    found=1;
    if(found==1){
    printf("The value is in the array at positio %d ", i+1);
    }
    }
    }
    
    if(found==0) {
    printf("The value doesn’t exist ");
    }
    
    return 0;
}