#include <stdio.h>

void swap_endian(int *x){

}
void inc(int* x){
    if(x==NULL){
        return;
    }else{
        *x = *x +1;
        printf("%d\n", *x);
    }
}

int main(){
    int x = 3;

    inc(&x);
    inc(NULL);

    return 0;

}
