/*10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.
Example-
int main()
{
 Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
 return 0;
}*/
#include<iostream>
using namespace std;
class Rupee
{
    float rupee;

public:
    Rupee() {}
    Rupee(int x) : rupee(x) {}
    /*Rupee(Rupee &r1)
    {
       rupee=r1.rupee;
    }*/
    float getRupee()
    {
        return rupee;
    }
    void display()
    {
        cout<<"Rupee"<< rupee<<endl;
    }
};
class Dollar
{
    float dollar;
    public:
    Dollar() {}
    Dollar(Rupee r)
    {
        dollar = r.getRupee()/82.49;
    }
    void display()
    {
        cout<<"$"<<dollar<<endl;
    }
    operator Rupee()
    {
       return dollar*82.49;
    }
};
int main()
{
    Rupee r = 23;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}