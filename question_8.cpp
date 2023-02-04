/*8. Create a Rupee class and convert it into int. And Display it.
Example-
int main()
{
 Rupee r = 10;
 int x = r;
cout<<x;
 return 0;
}*/
#include<iostream>
using namespace std;
class Rupee
{
   int r;
   public:
   Rupee(){}
   Rupee(int r):r(r){}
   operator int()
   {
    return r;
   }
};

int main()
{
    Rupee r = 10;
    int x=r;
    cout<<x;
    return 0;
}
