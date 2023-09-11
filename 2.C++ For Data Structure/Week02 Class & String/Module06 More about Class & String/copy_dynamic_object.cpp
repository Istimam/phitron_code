#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
};
int main()
{
    Person* rakib=new Person("Rakib Ahsan",25);
    Person* sakib=new Person("Sakib Ahmed",23);

    // delete sakib;
    // rakib->name=sakib->name;
    // rakib->name=sakib->age;
    *rakib=*sakib;
    // delete sakib;
    cout<<"rakib"<<endl<<rakib->name<<endl<<rakib->age<<endl;
    cout<<"sakib"<<endl<<sakib->name<<endl<<sakib->age;
    return 0;
}