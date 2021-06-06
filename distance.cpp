#include <iostream>
#include <cmath>
using namespace std;

float dist(float a[2], float b[2]){
    return pow(a[0]-b[0],2) + pow(a[1]-b[1],2);
}

main(){
    int size;
    int a=1000;
    cout << "enter the number of points";
    cin >> size;
    float arr[size][2];
    cout << "enter the coordinate of points";
    for(int i = 0; i<size; i++){
        for(int j=0; j<2; j++){
            cin >> arr[i][j];
        }
    }
    float b[2];
    float c[2];
    for(int i =0; i<size; i++){
        for(int j= 0; j<size; j++){
            if(i==j){continue;}
            if (dist(arr[i],arr[j])<a){
                a = dist(arr[i],arr[j]);
		b = arr[i];
                c = arr[j];
            }
        }
    }
    cout <<' '<< b<<' ' << c;
    cout << "distance is" << a;
return 0;
}