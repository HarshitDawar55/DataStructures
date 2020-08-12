#include<iostream>
using namespace std;


// Defining the Template Class
template <class T>
class Mathematical_Operations{
    private:
        T n1, n2;

    public:
    // Defining the Constructor
        Mathematical_Operations(T n1, T n2){
            this->n1 = n1;
            this->n2 = n2;
        }

};
