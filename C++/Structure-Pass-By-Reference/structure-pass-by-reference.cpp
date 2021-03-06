#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

void swap(struct rectangle &p){
    // "." operator is used instead of "->" operator because here I have used reference not structure,
    // therefore as pointer is not present, so "->" cannot be used, & in reference "." operator is used.
    int temp = p.length;
    p.length = p.breadth;
    p.breadth = temp;
}

int main(){
    struct rectangle rec = {10, 5};
    cout<<"Initial values = "<<rec.length<<" "<<rec.breadth<<endl;
    swap(rec);
    cout<<"After Swapping values = "<<rec.length<<" "<<rec.breadth<<endl;
    return 0;
}