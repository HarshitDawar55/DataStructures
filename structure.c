#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;
};

int main(){
struct rectangle rec;

printf("Hello Welcome to Rectangle Structure\nEnter the length & Breadth of the Rectangle!\n");

scanf("%d %d", &rec.length, &rec.breadth);

printf("%d %d\n", rec.length, rec.breadth);

return 0;
}