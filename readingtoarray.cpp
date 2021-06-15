#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
  string str;
  string myText;
  vector<string> v;
  vector<float> f;
  ifstream MyReadFile("input1.txt");
  
  while(getline(MyReadFile, myText))
  {
    str = myText;
    stringstream ss(str);
 
    while(ss.good())
    {
       string substr;
       getline(ss, substr,',');
       v.push_back(substr);
    }
  }

  for (size_t i = 0; i < v.size(); i++)
      f.push_back(stof(v[i]));

  for (auto i = f.begin(); i != f.end(); ++i)
        cout << *i << " ";
  
  cout << endl;

  for( int j=0; j<f.size(); j++)
      cout << f[j]<< " ";

  cout << endl;
  cout << f.size()<< endl;

  float arr[f.size()/2][2];
  
  for(int k = 0; k < f.size()/2; k++)
  {
    for(int l= 0; l<2; l++)
    { 
       arr[k][l] = f[2*k + l];
       cout << arr[k][l];
    }
    cout << endl;
  }

  return 0;
}