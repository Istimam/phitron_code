#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    char name[100];
    float height;
    int age;
    Person(char* nam,float h,int a)
    {
        
        strcpy(name,nam);
        height=h;
        age=a;
    }
};
int main()
{
    char name[100]="Isti";
    Person* Isti = new Person(name,5.9,24);
    cout<<"Name : "<<Isti->name<<endl<<"Height : "<<Isti->height<<endl<<"Age : "<<Isti->age<<endl;
    return 0;
}