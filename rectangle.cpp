// #include<iostream>
// class Rectangle{
//     private :
//         int width;
//         int height;
//     public :
//         Rectangle();
//         Rectangle(int width,int height);
//         int area();
//         int perimeter();
#include "rectangle.h";

Rectangle::Rectangle(){
    this -> width = 0;
    this -> height = 0;
}
Rectangle::Rectangle(int width,int height){
    if(width<0) this -> width = 0;
    if(height<0) this -> width = 0;
    this -> width = width;
    this -> height = height;
}
int Rectangle::area(){
    return width*height;
}
int Rectangle::perimeter(){
    return (width+height)*2;
}
