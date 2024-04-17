#include <stdio.h>
int main() {
    int n,i,j;
    printf("enter the number of times");
    scanf("%d",&n);
    printf("9");
    for(i=2;i<=n;i++) {
        // printf(" + ");
        for(j=1;j<=i;j++){
            printf("+9");
        }
    }
    return 0;
}