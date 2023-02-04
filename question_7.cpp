/*7. Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
 Time t1(2,30);
 t1.display();
 Minute m1;
 m1.display();
 m1=t1 // Fetch minute from time
 t1.display();
 m1.display();
 return 0;
}
*/

#include <iostream>
using namespace std;

class Time
{
    int min, sec;

public:
    Time(){}
    Time(int m, int s) : min(m), sec(s) {}
    Time(Time &t)
    {
        min = t.min;
        sec = t.sec;
    }
    void display()
    {
        cout << "Minutes = " << min <<" seconds = " << sec << endl;
    }
    int getMin()
    {
        return min;
    }

};
class Minute
{
    int min;
public:
Minute(){min=0;}
Minute(Time t)
{
  min = t.getMin(); 
}
void display()
{
    cout<<"Minutes = "<<min;
}

};

int main()
{
    Time t1(2, 30);
    t1.display();
    cout<<endl;
    Minute m1;
    m1.display();
    cout<<endl;
    m1 =(Minute)t1; // Fetch minute from time
    t1.display();
    cout<<endl;
    m1.display();
    return 0;
}