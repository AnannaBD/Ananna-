#include <stdio.h>
int LCM(int,int);
int main() {
    int a,b;
    printf("Enter two integer number\n");
    scanf("%d%d",&a,&b);
    printf("LCM of %d and %d is= %d",a,b,LCM(a,b));
    return 0;
}

int LCM(int a, int b) {
    int max,i ;
    max= a>b?a:b;
    for(i=max; 1; i=i+max) {
        if(i%a==0 && i%b==0)
            break;
    }
    return i;
}