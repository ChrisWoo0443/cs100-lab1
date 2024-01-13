#include <iostream>
#include "../header/triangle.hpp"
#include "../header/rectangle.hpp"

using namespace std;

int main(){
    char shape;
    int height;
    int base;
    int width;

    cout << "Triangle or Rectangle? (t/r)" << endl;
    cin >> shape;

    if(shape == 't'){
        triangle t1;
        cout << "Give me the base" << endl;
        cin >> base;
        while(base < 0) {
            cout << "Error, value less than 0 try again or not an int" << endl;
            cin >> base;
        }
        t1.set_base(base);
        cout << "give me the height" << endl;
        cin >> height;
        while(height < 0) {
            cout << "Error, value less than 0 try again" << endl;
            cin >> height;
        }
        t1.set_height(height);
        cout << "Triangle area: " << t1.area() << endl; 
    }
    else if(shape == 'r'){
        Rectangle r1;
        cout << "Give me the width" << endl;
        cin >> width;
        while(width < 0) {
            cout << "Error, value less than 0 try again" << endl;
            cin >> width;
        }
        r1.set_width(width);
        cout << "Give me the height" << endl;
        cin >> height;
        while(height < 0) {
            cout << "Error, value less than 0 try again" << endl;
            cin >> height;
        }
        r1.set_height(height);
        cout << "Rectangle area: " << r1.area() << endl;
    }

    return 0;
}