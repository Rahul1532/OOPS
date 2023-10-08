#include<iostream>
using namespace std;
class parent
{
    public:
    void display()
    {
        cout<<"Display Parent"<<endl;
    }
};
class child
{
    public:
    void display()
    {
        cout<<"Display Child"<<endl;
    }

};
int main()
{
    parent P;
    P.display();
    child c;
    c.display();
}