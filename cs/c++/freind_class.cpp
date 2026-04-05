#include<iostream>
using namespace std;
class B; // Forward declaration of class B
class A {
    int privateVarA;
public:
    A(int x) : privateVarA(x) {}
    friend class B; // B is a friend of A, so it can access private members of A
};
class B {
    int privateVarB;
public:
    B(int y) : privateVarB(y) {}
    void display(A objA) {
        cout << "Private variable of class A accessed by class B: " << objA.privateVarA << endl;
    }
};
int main() {
    A objA(42);
    B objB(23);
    objB.display(objA);
    return 0;
}
