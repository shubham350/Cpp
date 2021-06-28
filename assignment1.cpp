#include <iostream>
#include <cmath>

class Vector 
{
 public:
 float arr[3];
 Vector(float x, float y, float z)
 {
  arr[0] = x;
  arr[1] = y;
  arr[2] = z;
 }

 float norm()
 {
   float a = sqrt(arr[0]*arr[0] + arr[1]*arr[1] + arr[2]*arr[2]);
   return a;
 }

 float dot(Vector v2)
 { 
   float d = this->arr[0]*v2.arr[0] + this->arr[1]*v2.arr[1] + this->arr[2]*v2.arr[2];
   return d;
 }

 float Angle(Vector v2)
 {
   float a = acos(this->dot(v2)/(this->norm()*v2.norm()));
   return a;
 }
};

float radtodeg(float a)
{
  return a*(180*7/22);
}
int main()
{
  Vector v1(2,1,0);
  Vector v2(2,4,0);
  std::cout << v1.arr[0]<<std::endl;
  std::cout << v1.norm()<<std::endl;
  float b = v1.dot(v2);
  std::cout<< b << std::endl;
  float a = v1.Angle(v2);
  std::cout<< radtodeg(a);
  return 0; 
}