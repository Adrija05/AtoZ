//Question :
//S=1!+2!+3!....nth term
#include <stdio.h>

int main() {
    // Write C code here
    int sum=0,num;
    printf("enter the range: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        int a=fact(i);
        sum+=a;
    }
    printf("the sum is %d",sum);
    

    return 0;
}
int fact(int n){
    if(n==1){
        return n*1;
    }
    else if(n==0){
        return n*1;
    }
    else{
        return n*fact(n-1);
    }
    
    
}