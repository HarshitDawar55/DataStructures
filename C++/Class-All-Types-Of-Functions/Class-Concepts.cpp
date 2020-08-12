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

    // Adding Setter/Mutators Functions
        void setLength(int l){
            length = l;
        }

        void setBreadth(int b){
            breadth = b;
        }
    
    // Adding Destructors
        ~Rectangle();    
};

// Defining the functions declared inside class outside it using Scope Resolution Operator "::"
Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}
