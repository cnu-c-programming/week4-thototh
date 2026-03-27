#include <stdio.h>


int main(){
    int n = 10; 
    int *p = &n;

    printf("adress of n: %a\n", p);
    printf("*p = %d\n", *p);

    *p = 99;
    printf("n = %d\n", n);
    

    return 0;


}
