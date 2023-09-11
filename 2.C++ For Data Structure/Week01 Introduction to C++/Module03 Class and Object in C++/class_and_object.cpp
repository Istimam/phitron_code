#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Student Isti;
    Isti.roll=29;
    Isti.cls=9;
    Isti.section='A';
    char nm[100]="Isti";
    strcpy(Isti.name,nm);

    Student Nasrullah;
    Nasrullah.roll=30;
    Nasrullah.cls=9;
    Nasrullah.section='A';
    char nm2[100]="Nasrullah";
    strcpy(Nasrullah.name,nm2);

    cout<<Isti.roll;  
    return 0;
}