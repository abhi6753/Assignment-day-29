/*4. Create Product class and convert Product type to Item type using casting operator
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
class Item
{
    int a,b;
    public:
    Item(){}
    void Display()
    {
        cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
    }
    int& getA(){return a;}
    int& getB(){return b;}
};
class Product
{
    int a,b;
    public:
    Product(){}
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    operator Item()
    {
        Item temp;
        temp.getA()=a;
        temp.getB()=b;
        return temp;
    }

};
int main()
{
    Product p1;
    Item i1;
    p1.setData(3,4);
    i1=(Item)p1;
    i1.Display();
    system("pause");
    return 0;
}