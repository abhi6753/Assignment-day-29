/*1.Write a C++ program to convert Primitive type to Complex type.
 Example -
 int main()
{
 Complex c1;
 Int x=5;
 c1=x;
 return 0;
}*/
#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
    public:
    Complex()
    {
       real=imag=0;
    }
    Complex(int x)
    {
        real=imag=x;
    }
    void display()
    {
        cout<<"Real = "<<real<<endl<<"Immaginary = "<<imag<<endl;
    }
};
int main()
{
    Complex c1;
    int x;
    cout<<"Enter value of x: ";
    cin>>x;
    c1=(Complex)x;
    c1.display();
    return 0;
}