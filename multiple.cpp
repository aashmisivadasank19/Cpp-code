#include <iostream.h>
#include <conio.h>
class abc
{
    public:
    void car ()
    {
    cout << "This is a car method";
    }
};

class ghi
{
    public:
    void truck()
    {
        cout <<" This is a truck method";
    } 
};   

class mno: public abc, public ghi
{
    public:
     void bike()
    {
             cout << " This is a bike method";
    }
 };
 
void main()
{
    clrscr();
    mno obj;
    obj.truck();
    obj.bike();
    getch();
}