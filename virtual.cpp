#include<iostream>
using namespace std;
class base
{
    public:
   virtual void fun()
    {
        cout<<"Base Class func";

    }
};
class derived: public base
{
    public:
    void fun()
    {
        cout<<"Derived Class Fun";
    }
};
int main()
{
    derived d;
    base *p = &d;
    p->fun();
}