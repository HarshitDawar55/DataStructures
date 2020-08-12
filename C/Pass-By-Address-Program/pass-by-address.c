#include<stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    printf("Enter the 2 numbers \n");
    int x, y;

    scanf("%d %d", &x, &y);

    printf("Before swapping, x = %d y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping, x = %d y = %d\n", x, y);

    return 0;
}