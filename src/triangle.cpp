#include "../header/triangle.hpp"

void triangle::set_base(int b){
    this->base = b;
}

void triangle::set_height(int h){
    this->height = h;
}

int triangle::area(){
    return (0.5 * this->base) * this->height;
}