/*2. Write a C++ program to convert Complex type to Primitive type.
 Example -
 int main()
{
 Complex c1;
 c1.setData(3,4);
 int x;
 x=c1;
 return 0;
}*/
#include<iostream>
using namespace std;
class Complex
{
  int real,imag;
  public:
  Complex(){}
  void setData(int x,int y)
  {
    real = x;
    imag = y;
  }
  operator int()
  {
    return real;
  }
  
};
int main()
{
    Complex c1;
    c1.setData(3,4);
    int x;
    x = (int)c1;
    cout<<x<<endl;
    system("pause");
    return 0;
}