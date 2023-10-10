#include<iostream>
using namespace std;
class test
{
    private:
    int a,b;
    
    static int count;
    public:
    test()
    {
        a=10;
        b=10;
        count++;
    }
    void incre()
    {
        a++;
        b++;
        count++;
    }
    void display()
    {
        cout<<a<<b;
        cout<<count<<endl;
    }
};
int test :: count=0;
int main()
{
    test t1;
    test t2;
    t1.display();
    t2.display();
    t1.incre();
    t1.display();
    t2.display();
    
}