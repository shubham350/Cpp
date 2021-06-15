#include <iostream>
using namespace std;

float Area(float a[2],float b[2],float c[3])
{ 
  return (0.5*((b[0]-a[0])*(c[1]-a[1])-(c[0]-a[0])*(b[1]-a[1])));
}

float* Point_int(float a[2],float b[2],float c[2],float d[2])
{
  float t2 = ((a[0]-b[0])*(a[1]-c[1])-(a[0]-c[0])*(a[1]-b[1]))/((c[0]-d[0])*(a[1]-b[1])-(c[1]-d[1])*(a[0]-b[0]));
  float* arr = new float[2];
  arr[0] = (1-t2)*c[0]+t2*d[0];
  arr[1] = (1-t2)*c[1]+t2*d[1];
  return arr;
}

bool Left( float a[2],float b[2],float c[3])
{
  return Area(a,b,c) > 0;
}

bool Intersection(float a[2],float b[2],float c[2],float d[2])
{
    return (Left(a,b,c)^Left(a,b,d)) & (Left(c,d,a)^Left(c,d,b));
}

int main()
{
  float a[2] = {0,0};
  float b[2] = {1,1};
  float c[2] = {1,0};
  float d[2] = {0,1};
  float* ptr = Point_int(a,b,c,d);
  cout << ptr[0] << " " << ptr[1];
  delete[] ptr;
  cout << Left(a,b,c)<<endl;
  cout << Intersection(a,b,c,d)<<endl;
  return 0;
}



