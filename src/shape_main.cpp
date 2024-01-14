#include <iostream>
#include "../header/triangle.hpp"
#include "../header/rectangle.hpp"

using namespace std;

int main(){
    //initialize variables
    char shape;
    int height;
    int base;
    int width;

    //ask for shape
    cout << "Triangle or Rectangle? (Enter t/r)" << endl;
    cin >> shape;

    //if triangle
    if(shape == 't'){
        triangle t1;
        cout << "Give me the base" << endl;
        cin >> base;
        //test for whether the dimension is less than 0 or is not an integer
        while(base < 0 || cin.fail()) {
            //if not integer clear input
            cin.clear();
            cin.ignore(256, '\n'); 
            cout << "Error, value less than 0 or not an int, try again" << endl;
            cin >> base;
        }
        t1.set_base(base);
        cout << "give me the height" << endl;
        cin >> height;
        //test for whether the dimension is less than 0 or is not an integer
        while(height < 0 || cin.fail()) {
            //if not integer clear input
            cin.clear();
            cin.ignore(256, '\n'); 
            cout << "Error, value less than 0 or not an int, try again" << endl;
            cin >> height;
        }
        t1.set_height(height);
        cout << "Triangle area: " << t1.area() << endl; 
    }
    else if(shape == 'r'){
        Rectangle r1;
        cout << "Give me the width" << endl;
        cin >> width;
        //test for whether the dimension is less than 0 or is not an integer
        while(width < 0 || cin.fail()) {
            //if not integer clear input
            cin.clear();
            cin.ignore(256, '\n'); 
            cout << "Error, value less than 0 or not an int, try again" << endl;
            cin >> width;
        }
        r1.set_width(width);
        cout << "Give me the height" << endl;
        cin >> height;
        //test for whether the dimension is less than 0 or is not an integer
        while(height < 0 || cin.fail()) {
            //if not integer clear input
            cin.clear();
            cin.ignore(256, '\n'); 
            cout << "Error, value less than 0 or not an int, try again" << endl;
            cin >> height;
        }
        r1.set_height(height);
        cout << "Rectangle area: " << r1.area() << endl;
    }
    return 0;
}