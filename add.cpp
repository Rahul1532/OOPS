#include<iostream>
using namespace std;
class add
{
    private:
    int a;
    int b;
    
    public:
    add(int x,int y)
    {
        a=x;
        b=y;
    }
    int sum()
    {
        return a+b;
    }
};
int main()
{
    add a(5 , 5) ;
    cout<<a.sum();

}