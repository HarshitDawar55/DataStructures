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

    // Adding Facilitators (Functions which perform some operations on the data)
        void area(){
            cout<<(length * breadth)<<endl;
        }

        void perimeter(){
            cout<<2 * (length + breadth)<<endl;
        }

    // Adding Accessor/Getter Functions
        void getLength(){
            cout<<length<<endl;
        }

        void getBreadth(){
            cout<<breadth<<endl;
        }
};