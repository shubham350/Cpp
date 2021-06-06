#include <iostream>
#include <string>
using namespace std;

main(){
    string a = "Hello World";
    int b = a.length();
    int i;
    for(i=b;i>=0;i--){
        cout << a[i];
    }
}