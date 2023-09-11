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
    Student Isti("Istimam",1,'A',88,12);
    Student IS("Isti",2,'A',90,12);
    Student Nas("Nasrullah",3,'A',100,12);
    if(Isti.math_marks > IS.math_marks && Isti.math_marks > Nas.math_marks)
    {
        cout<<"Math Marks : "<<Isti.math_marks<<endl;
        cout<<"Name : "<<Isti.name<<endl;
    }
    else if(IS.math_marks > Isti.math_marks && IS.math_marks > Nas.math_marks)
    {
        cout<<"Math Marks : "<<IS.math_marks<<endl;
        cout<<"Name : "<<IS.name<<endl;
    }
    else
    {
        cout<<"Math Marks : "<<Nas.math_marks<<endl;
        cout<<"Name : "<<Nas.name<<endl;
    }
    return 0;
}