#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r,int s,int c,char* n)
    {
        roll=r;
        section=s;
        cls=c;
        strcpy(name,n);
    }
};
int main()
{
    char name[100]="Isti";
    // Student Isti(29,'A',7,name);
    Student* Isti = new Student(29,'A',7,name);
    // cout<<(*Isti).name;
    
    /*Shortcut*/
    // (*Isti). = Isti->
    cout<<Isti->name;
    delete Isti;
    return 0;
}