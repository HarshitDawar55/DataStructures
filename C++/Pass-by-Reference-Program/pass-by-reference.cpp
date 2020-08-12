#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    cout<<"Enter the 2 numbers"<<endl;
    int x, y;

    cin>>x>>y;

    cout<<"Before swapping x: "<<x<<" y: "<<y<<endl;

    swap(&x, &y);

    cout<<"After swapping x: "<<x<<" y: "<<y<<endl;

    return 0;
}