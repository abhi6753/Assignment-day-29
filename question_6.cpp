/*6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in 
int ) to Time class.
Example-
int main()
{
 int duration;
 cout<<”Enter time duration in seconds”;
 cin>>duration;
 Time t1 = duration;
 t1.display();
 return 0;
}*/
#include<iostream>
using namespace std;
class Time
{
    int hr,min,sec;
    public:
    Time(){}
    Time(int s)
    {
        hr= s/3600;
        min = s/60;
        sec = s%60;
    }
    void display()
    {
        cout<<hr<<" Hours "<<min<<" Minutes "<<sec<<" Seconds "<<endl;
    }
};
int main()
{
    int duration;
    cout<<"Enter time duration in seconds: ";
    cin>>duration;
    Time t1 = duration;
    t1.display();
    return 0;
}