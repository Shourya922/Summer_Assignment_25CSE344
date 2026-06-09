#include <stdio.h>
int main() {
    int n, product =1; 
    
    printf("enter no");
    scanf("%d" ,&n);
    while (n !=0){
        rev =rev *10+n%10;
        n/=10
    }
    printf("product of digits = %d" , product);
    return 0;
}

