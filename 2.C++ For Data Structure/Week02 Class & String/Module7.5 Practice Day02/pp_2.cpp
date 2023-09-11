#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
};
int main()
{
    int n;
    cin>>n;
    Student num[n];
    for (int i = 0; i < n; i++)
    {
        cin>>num[i].name>>num[i].roll>>num[i].marks;
    }
    for (int i = n-1; i >= 0; i--)
    {
        cout<<num[i].name<<" "<<num[i].roll<<" "<<num[i].marks<<endl;
    }
    
    return 0;
}