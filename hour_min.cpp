#include <iostream>
#include <cmath>
using namespace std;

main(){
    float hour;
    float minutes;
    cout << "enter the hour";
    cin >> hour;
    cout << "enter the minute";
    cin >> minutes;
    float deg_min;
    float deg_hour;
    deg_min = 6*minutes;
    deg_hour = 30*(hour + (minutes/60));
    float ans;
    ans = abs(deg_min-deg_hour);
    cout << ans;
}