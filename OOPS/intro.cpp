#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;

public:
    int age;
    bool gender;

    Student(){
        cout<<"Default constructor"<<endl;
    }

    Student(string s, int a, int g){
        cout<<"Parameterised constructor"<<endl;
        name=s;
        age=a;
        gender =g;
    }

    Student (Student &a){
        cout<<"Copy constructor"<<endl;
        name = a.name;
        age= a.age;
        gender=a.gender;
    }

    ~Student(){
        cout<<"Destructor called"<<endl;
    }

    void setName(string s)
    {
        name = s;
    }

    void getName(){
        cout<<name<<endl;
    }

    void printInfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }

    //Operator overloading
    bool operator ==(Student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};

int main()
{
    // Student a;
    // a.name = 'vaibhav';
    // a.age=19;
    // a.gender=1;



    // Student arr[3];
    // string s;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Enter name, age and gender: ";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cin >> arr[i].age;
    //     cin >> arr[i].gender;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }



    Student a("Vaibhav", 19, 1);
    // a.printInfo();
    Student b("Rahul", 20, 0);
    Student c = a;

    if(b==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
    return 0;
}


//Default copy constructor -> Shallow copy
//Data members of object are pointing to dynamically allocated memory then 
//if we copy the object, pointers will get copied but the locations at which they are pointing don't get copied.


//Deep copy
//Also copies the locations at which pointers of object are pointing.
