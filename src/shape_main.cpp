#include <string>
#include<cmath>
#include<iostream>
#include "../header/triangle.hpp"
#include "../header/rectangle.hpp"

using namespace std;

int main(){
    
    string shape;
    double base;
    double width;
    double height;
    
    cout << "Choose a shape,triangle or retangle." << endl;
    cin >> shape;
    
    while ( shape != "triangle" && shape != "retangle" ){
        cout << "Please choose a valid shape, triangle or retangle." << endl;
        cin >> shape;
    }
    
    if (shape == "triangle"){
        cout << "Enter the base and height." << endl;
        cin >> base >> height;
        while (base < 0 || height < 0 || (base - floor(base)) != 0 || (height - floor(height)) != 0){
            cout << "Please enter non negative integer as base and height" << endl;
            cin >> base >> height;
        }
        Triangle trian1;
        trian1.set_base(base);
        trian1.set_height(height);
        cout << "Triangle 1 area: " << trian1.area() << endl;
    }
    else{
        cout << "Enter the width and height." << endl;
        cin >> width >> height;
        while (width < 0 || height < 0 || (width - floor(width)) != 0 || (height - floor(height)) != 0){
            cout << "Please enter non negative integers as width and height" << endl;
            cin >> width >> height;
        }
        Rectangle rect1;
        rect1.set_width(int(width));
        rect1.set_height(int(height));
        cout << "Rectangle 1 area: " << rect1.area() << endl;
    }
    
    return 0;
}

