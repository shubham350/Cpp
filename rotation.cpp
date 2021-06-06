#include <iostream>
#include <cmath>
using namespace std;

main(){
    float x;
    float x_rot;
    float y;
    float y_rot;
    float theta;
    cout << "enter the x-coordinate";
    cin >> x;
    cout << "enter the y-coordinate";
    cin >> y;
    cout << "enter the rotation angle in radians:";
    cin >> theta;
    x_rot =  x*cos(theta) - y*sin(theta);
    y_rot = x*sin(theta) + y*cos(theta);
    cout << " the rotated coordinates are:";
    cout << x_rot <<" , " << y_rot;
}