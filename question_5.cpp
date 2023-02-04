/*5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add 
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
 Invent1 s1=(4,5);
 Invent2 d1;
 float tv;
 tv=s1;
 d1=s1;
 return 0;
}
*/
#include<iostream>
using namespace std;
class Invent1
{
 int a,b;
 public:
 Invent1(int a,int b):a(a),b(b){} //Initializer List
 operator float()
 {
    return a;
 }
 int getA(){return a;}
 int getB(){return b;}

};
class Invent2
{
 int a,b;
 public:
 Invent2(){}
 Invent2(Invent1 s)
 {
    a=s.getA();
    b=s.getB();
 }
 void display()
 {
    cout<<"A ="<<a<<endl<<"B = "<<b<<endl;
 }
};
int main()
{
    Invent1 s1=Invent1(4,5);
    Invent2 d1;
    float tv;
    tv =(float)s1;
    d1=s1;
    d1.display();
    cout<<endl<<tv;
    return 0;
}