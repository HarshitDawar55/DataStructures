#include<iostream>
using namespace std;

class Rectangle{
    private:
    // Declaring the Private Variables
        int length;
        int breadth;
    public:
    // Declaring Default Constructor
        Rectangle(){
            length = breadth = 1;
        }
    // Declaring Parameterized Constructor
        Rectangle(int l, int b);

};