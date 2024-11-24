#include <bits/stdc++.h>
using namespace std;

// class attribute are private bydefault
class student
{
    string name;

public:
    int age;
    bool gender;

    student(){
        cout<<"default constructor"<<endl;//called autmatically when no parameters are passed!.
    }

    // defining copy constructor
    student(student &a){
        cout<<"copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    student(string s,int a,int g)
    {   
        cout<<"parameterised constructor"<<endl;
        name = s;
        age=a;
        gender=g;
    }

    // destructor -- called when an object get destroyed.
    ~student(){ // parameters no return
    cout<<"destructor called"<<endl;
    } // == number of objects formed.

    void setName(string s) // access private
    {
        name = s;
    }
    void getName()
    {
        cout << name << endl;
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

    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender)
            return true;
        return false;
    }

};

int main()
{
    // using constructor
    student a("ben",10,1);
    // a.getName();

    // a.printInfo();

    student b; // default constructor called.
    
    // copy constructor
    student c(a); //or
    // student c=a; 
    // c.getName();

    if (c==a)
        cout<<"same"<<endl;
    else
        cout<<"not same"<<endl;
    return 0;
}


/*
default copy constructor -- shallow copy -- data members of object are pointing to some dynamically allocated memory , in shallow copy pointers get copied but locations are not copied ;

defined copy constructor -- deep copy -- locattions are copied too.
*/