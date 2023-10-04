#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    string name;
    int mark1 , mark2,mark3;
    public :
    student(int r , string n , int m1,int m2,int m3)
   { roll = r;
    name = name;
    mark1 = m1;
    mark2 = m2;
    mark3 = m3;
   }
   int total()
   {
   return mark1+mark2+mark3;
   }
   char grade()
   {
    float avg = total()/3;
    if (avg>60)
    return 'A';
    else if (avg>=40 && avg<60)
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
    cout<<"Enter the roll number ";
    cin>>roll;
    cout<<"Enter name ";
    cin>>name;
    cout<<"Enter marks in three subjects ";
    cin>>m1>>m2>>m3;
    student s(roll,name,m1,m2,m3);
    cout<<"Total is "<<s.total()<<endl;
    cout<<"Grade is "<<s.grade()<<endl;
}
