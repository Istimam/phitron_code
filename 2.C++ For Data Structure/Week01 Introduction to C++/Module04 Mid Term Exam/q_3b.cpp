#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    int age;
    Person(int a)
    {
        age=a;
    }
    void displayValue()
    {
        cout<<age;
    }
};
Person& Staticobject()
{
    static Person age(24);
    return age;
}
int main()
{
    Person& objRef = Staticobject();
    objRef.displayValue();
    return 0;
}