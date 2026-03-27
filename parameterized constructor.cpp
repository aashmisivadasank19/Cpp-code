#include <iostream.h>
#include <conio.h>
class abc
{
    public:
    int num1, num2;
     float result;

    abc(int n1,int n2)
    {
    num1 = n1;
    num2=n2;
    result = 0;
    }

    void add ()
    {
    result = num1 + num2;
    }
    
    void displayData()
    {
    cout << "Result: "<<result;
    }
};

void main()
{
    clrscr();
    int num1, num2;
    cout << " Enter 1st Number:";
    cin >> num1;
    cout <<" Enter 2nd Number:";
    cin >> num2;
    abc obj(num1, num2);
    obj.add();
    obj.displayData();
    getch();
}