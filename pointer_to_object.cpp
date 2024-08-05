#include<iostream>
using namespace std;
 
class Rectangle {
    public:
        int length;
        int breadth;

        int area(){
            return length*breadth;
        }
        
        int perimeter(){
            return 2 * (length + breadth);
        }
};

int main(){
    Rectangle r;  // Object create in stack
    Rectangle *p;
    p = &r;
    p->length = 10;
    p->breadth = 5;
    
    cout<< p->area() <<endl;
    cout << p->perimeter() << endl;
    
    return 0;
}