#include <iostream>
using namespace std;

float Area(float a[2],float b[2], float c[2]){
    return ((b[0]-a[0])*(c[1]-a[1])-(c[0]-a[0])*(b[1]-a[1]));
}

main(){
    float a[2];
    float b[2];
    float p[2];
    for(int i=0; i<2; i++){
       cout<< "enter the coodrinates of a";
       cin >> a[i];
    }
    for(int i=0; i<2; i++){
       cout<< "enter the coodrinates of b";
       cin >> b[i];
    }
    for(int i=0; i<2; i++){
       cout<< "enter the coodrinates of p";
       cin >> p[i];
    }
    if (Area(a,b,p) > 0){
        cout << "the point is to the left";
    }
    else if(Area(a,b,p) < 0){
        cout << "the point is to the right";
    }
    else{
        cout << "the point is on the line";
    } 
return 0;
}