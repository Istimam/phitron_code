#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        person(string nm,int ag,int m1,int m2)
        {
            name=nm;
            age=ag;
            marks1=m1;
            marks2=m2;
        }
        void hello()
        {
            cout<<name<<" "<<age<<endl;
        }
        int total_marks()
        {
            return marks1+marks2;
        }
};
int main()
{
    person rakib("Rakib Ahsan",24,97,3);
    rakib.hello();
    // int total=rakib.total_marks();
    // cout<<total;
    cout<<rakib.total_marks();                             
    // cout<<rakib.name<<" "<<rakib.age<<endl;
    return 0;
}