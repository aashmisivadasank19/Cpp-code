#include<iostream>
using namespace std;

class A {
    private:
        int x;
    public:
        A(int a) { x = a; }
        friend void show(A);
};

void show(A obj) {
    cout << "x = " << obj.x;
}

int main() {
    A obj(10);
    show(obj);
    return 0;
}