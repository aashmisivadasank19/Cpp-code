#include <iostream.h>
#include <conio.h>
class calculator
{
public:
int num1, num2;
float result;
void GetData()
{
cout << "Enter 2 Number:";
cin >> num1 > > num2;
}
void add()
{
result = num1+num2;
}
void subract ()
{
result = num1-num2;
}
void multiply()
{
result = num1*num2;
}
void divide()
{
result = num1/num2;
}
void modulus()
{
result = num1%num2;
}
void display Data()
{
cout <<< Result: " << result;"
}
};

int main()
{
clrscr();

int op;

calculator c = new calculator();
c.get Data();

cout << "1. Add\n2. Sub\n 3.Mult\n 4.Div\n5. Mod\n Select: ";

cin >> op;
switch (op) {

case 1: 
c.add();
c.display Data();
break;

case 2:
c.subtract ();
c.display Data();
break;

case 3:
c.multiply ();
c.display Data ();
break;

case 4:
c.divide();
c.display Data();
break

case 5:
c.modulus ():
c.display Data ();
break;

default:
cout << "Enter Valid Input";
}
getch();
return 0;
}

