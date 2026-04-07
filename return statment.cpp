#include <iostream>
using namespace std;

class Arithmetic
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    int add()
    {
        return a + b;
    }

    int sub()
    {
        return a - b;
    }

    int mul()
    {
        return a * b;
    }

    float div()
    {
        return a/b;
    }
};

int main()
{
    Arithmetic obj;
    obj.getData();

    cout << "Addition = " << obj.add() << endl;
    cout << "Subtraction = " << obj.sub() << endl;
    cout << "Multiplication = " << obj.mul() << endl;
        cout << "Division = " << obj.div() << endl;
    return 0;
}