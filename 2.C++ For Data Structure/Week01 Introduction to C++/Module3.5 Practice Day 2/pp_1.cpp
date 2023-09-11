#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        char section;
        int math_marks;
        int cls;
        Student(char* n,int r,char sec,int mm,int c)
        {
            roll=r;
            section=sec;
            math_marks=mm;
            cls=c;
            strcpy(name,n);
        }
};
int main()
{
    Student Isti("Isti",01,'A',88,12);
    cout<<Isti.name<<endl;
    cout<<Isti.roll<<endl;
    cout<<Isti.section<<endl;
    cout<<Isti.cls<<endl;
    cout<<Isti.math_marks<<endl;
    return 0;
}