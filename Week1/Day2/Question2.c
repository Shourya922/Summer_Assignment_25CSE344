#include <stdio.h>
int main() {
    int n, rev =0; 
    
    printf("enter no");
    scanf("%d" ,&n);
    while (n !=0){
        rev =rev *10+n%10;
        n/=10
    }
    printf("reversed no = %d" , rev);
    return 0;
}

