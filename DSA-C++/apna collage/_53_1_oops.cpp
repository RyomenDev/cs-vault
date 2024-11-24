#include <bits/stdc++.h>
using namespace std;

// class attribute are private bydefault
class student
{
    string name;

public:
    int age;
    bool gender;

    void setName(string s) // access private 
    {
        name = s;
    }
    void getName(){
        cout<<name<<endl;
    }

    void printInfo()
    {
        cout << "Name=";
        cout << name << endl;
        cout << "age=";
        cout << age << endl;
        cout << "gender=";
        cout << gender << endl;
    }
};

int main()
{
    // student a;
    // a.name = 'ben';
    // a.age = 10;
    // a.gender = 1;

    // array of objects
    student arr[2];
    for (int i = 0; i < 2; i++)
    {
        // cout << "Name=";
        // cin >> arr[i].name;

        string s;
        cin>>s;
        arr[i].setName(s);

        // cout << "age=";
        cin >> arr[i].age;
        // cout << "gender=";
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 2; i++)
        arr[i].printInfo();

    return 0;
}

