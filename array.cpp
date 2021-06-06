#include <iostream>
using namespace std;

main(){
    int size;
    cout << "enter the size of the array";
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int x,y;
    cout << "enter the size to be converted into";
    cin >> x;
    cin >> y;
    float arr1[x][y];
    
    if(size != x*y){
       cout << "the sizes do not match ";
    }

    else{
        for(int j=0;j<x;j++){
            for(int k = 0;k<y;k++){
                arr1[j][k] = arr[j*y+k];
            }
        }
    }
    for(int j=0;j<x;j++){
        for(int k = 0;k<y;k++){
                cout << arr1[j][k];
        }
        cout << "\n";
    }
return 0;
}
            
    