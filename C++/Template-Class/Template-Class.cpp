#include<iostream>
#include<math.h>
using namespace std;


// Defining the Template Class
template <class T>
class Mathematical_Operations{
    private:
    // Declaring the Variables
        T n1, n2;

    public:
    // Defining the Constructor
        Mathematical_Operations(T n1, T n2){
            this->n1 = n1;
            this->n2 = n2;
        }
    
    // Function for addition
        T add(){
            T result;
            result = n1 + n2;
            return result;
        }

    // Function for Subtraction
        T sub(){
            T result;
            result = abs(n1 - n2);
            return result;
        }

    // Function for Multiplication
        T multiply(){
            T result;
            result = n1 * n2;
            return result;
        }
};

int main(){
    // Declaring the Class object for Integer Operations
    Mathematical_Operations<int> O1(1.5, 5.7);
    cout<<O1.add()<<endl;
    cout<<O1.sub()<<endl;
    cout<<O1.multiply()<<endl;

    // Declaring the Class object for Float Operations
    Mathematical_Operations<float> O2(1.5, 5.7);
    cout<<O2.add()<<endl;
    cout<<O2.sub()<<endl;
    cout<<O2.multiply()<<endl;

    // Declaring the Class object for Double Operations
    Mathematical_Operations<double> O3(1.5, 5.7);
    cout<<O3.add()<<endl;
    cout<<O3.sub()<<endl;
    cout<<O3.multiply()<<endl;
    return 0;
}
