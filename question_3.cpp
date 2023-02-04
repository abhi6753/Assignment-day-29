/*3. Create a Product class and convert Product type to Item type using constructor
int main()
{
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;
 return 0;
}*/
#include<iostream>
using namespace std;
class Product
{
  int a,b;
  public:
  Product(){}
  Product(Product &p1)
  {
    a=p1.a;
    b=p1.b;
  }
  void setData(int x,int y)
  {
    a=x;
    b=y;
  }
  int getA()
  {
    return a;
  }
  int getB()
  {
    return b;
  }
};
class Item
{
  int a,b;
  public:
  Item(){}
  Item(Product p)
  {
    a=p.getA();
    b=p.getB();
  }
  void display()
  {
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
  }
};
int main()
{
  Item i1;
  Product p1;
  p1.setData(3,4);
  i1=(Item)p1;
  i1.display();
  return 0;
}
