#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        person(string name,int age)
        {
            // (*this).name=name;
            // (*this).age=age;
            /*shortcut*/
            this->age=age;
            this->name=name;
        }
        void hello()
        {
            cout<<"Hello";
        }
};
int main()
{
    person rakib("Rakib Ahsan",24);
    cout<<rakib.name<<endl<<rakib.age;
    return 0;
}