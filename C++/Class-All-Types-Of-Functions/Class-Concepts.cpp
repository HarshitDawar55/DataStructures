#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(){
            length = breadth = 1;
        }
        Rectangle(int l, int b);
        
};