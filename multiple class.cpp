#include <iostream.h>
#include <conio.h>
class abc
{
    public:
    int num1, num2;
    float result;
    abc(int n1, int n2)
        {
            num1= n1;
            num2=n2;
            result = 0;
        }

    int add ()
    {
    result = num1 + num2;
    return result;
    }
};
class displayData
    { 
        public:
        void display(float res)
        {
            cout << "Result: " << res;
        }
    };
    void main()
{
    clrscr();
    int num1, num2;
    float res;
    cout <<" Enter Ist Number:";
    cin >> num1;
    cout <<" Enter and Number:";
    cin >> num2;
    abc obj(num1, num2);
    res=obj.add();
    displayData obj1;
    obj1.display (res); 
    getch();
}