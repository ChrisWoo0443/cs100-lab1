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
        cout << "Give me the base" << endl;
        
        cout << "give me the height" << endl;
    }
    else if(shape == 'r'){
        cout << "Give me the width" << endl;

        cout << "Give me the height" << endl;
    }

    return 0;
}