#include<iostream>
using namespace std;
class test
{
    private:
    int a,b;
    public:
    static int count;
    test()
    {
        a=10;
        b=10;
        count++;
    }
};
int test :: count=0;
int main()
{
    test t1;
    test t2;
    cout<<t1.count;
    cout<<t2.count;
}