#include <iostream>
using namespace std;

main(){
    int n;
    cout << "enter the depth of pyramid";
    cin >> n;
    for(int i=0; i<n; i++){
      for(int k=n;k>i+1; k--){
          cout <<' ';
      }
      for(int j=0; j<i+1; j++){
        cout <<'*';
        cout <<' ';
       }
      cout <<'\n';
     }
return 0;
}