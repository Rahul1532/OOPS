#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int roll;
    int marks1,marks2,marks3;
    public:
    student(int r , string n,int m1,int m2,int m3)
    {
        name=n;
        roll=r;
        marks1=m1;
        marks2 = m2;
        marks3=m3;
    }
    int total()
    {
        return marks1+marks2+marks3;
    }
    char grade()
    {
        float avg = total()/3;
        if (avg>60)
        return 'A';
        else if (avg >=40 && avg<60)
        return 'B';
        else 
        return 'C';  
    }
};
int main()
{
    int roll;
    string name;
    int m1,m2,m3;
    cout<<"Enter Roll number::-->> ";
    cin>>roll;
    cout<<"Enter Your Name:: -->> ";
    cin>>name;
    cout<<"Enter marks of your three subjects ";
    cin>>m1>>m2>>m3;
    student s(roll,name,m1,m2,m3);
    cout<<"Total marks "<<s.total()<<endl;
    cout<<"Your grade is "<<s.grade()<<endl;
}