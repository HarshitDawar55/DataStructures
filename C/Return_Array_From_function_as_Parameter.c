#include<stdio.h>
#include<stdlib.h>

int * funciton_to_return_Array(int size){
    int *p;
    p = (int *)malloc(size * sizeof(int));
    return (p);
}

int main(){
    int *array_pointer;
    array_pointer = funciton_to_return_Array(10);
    for(int i = 0; i < 10; i++){
        array_pointer[i] = 1;
    }

    for (int i = 0; i < 10; i++){
        printf("%d\n", array_pointer[i]);
    }
    return 0;
}