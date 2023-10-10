#include<iostream>
using namespace std;
class base
{
    public:
    void fun1()
    {
        cout<<"Base fun1"<<endl;
    }
    virtual void fun2()=0;
   /* {
        cout<<"Base fun2"<<endl; // remove the body 
    }*/
};
class derived : public base{
    public : 
    void fun2(){
        cout<<"Derived fun2"<<endl;
    }
};
int main()
{
    base *b = new derived();
    b->fun1();
    b->fun2();
}