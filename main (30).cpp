#include <iostream>
using namespace std;

    //base class
class B {
    virtual void fun() {}
};
    //Derived class
class D : public B {
};

 // Driver Code
int main()
{
    B* b = new D; // Base class pointer
    D* d = dynamic_cast<D*>(b); // Derived class pointer
    if (d != NULL)
        cout << "coding ";
    else
        cout << "cannot cast B* to D*";
    getchar();
    return 0;
}