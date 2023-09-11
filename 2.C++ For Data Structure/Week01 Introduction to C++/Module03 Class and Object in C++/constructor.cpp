#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
    /*constructor*/
    /*1.constructor class er same name hobe*/
    /*2.speacial function*/
    /*3.Kono kisu return kore na*/
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
    // Student Isti;
    // Isti.roll=29;
    // Isti.cls=9;
    // Isti.section='A';
    // char nm[100]="Isti";
    // strcpy(Isti.name,nm);
    
    Student Isti(29,'A',9,"Isti");
    
    cout<<Isti.name<<endl;
    cout<<Isti.roll<<endl;
    cout<<Isti.section<<endl;
    cout<<Isti.cls<<endl;

    // Student Nasrullah;
    // Nasrullah.roll=30;
    // Nasrullah.cls=9;
    // Nasrullah.section='A';
    // char nm2[100]="Nasrullah";
    // strcpy(Nasrullah.name,nm2);
    Student Nasrullah(30,'A',9,"Nasrullah");
    
    cout<<"Name: "<<Nasrullah.name<<endl<<"Roll: "<<Nasrullah.roll<<endl;
    // cout<<"Roll: "<<Nasrullah.roll<<endl;
    cout<<"Section: "<<Nasrullah.section<<endl<<"Class: "<<Nasrullah.cls<<endl;
    // cout<<"Class: "<<Nasrullah.cls<<endl;  
    return 0;
}