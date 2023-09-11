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
    char name1[100]="Isti";
    Person* Isti = new Person(name1,5.9,29);
    char name2[100]="Nasrullah";
    Person* Nasrullah = new Person(name2,6.00,10);
    if(Nasrullah->age > Isti->age)
    {
        cout<<Nasrullah->name<<endl;
    }
    else{
        cout<<Isti->name<<endl;
    }
    return 0;
}