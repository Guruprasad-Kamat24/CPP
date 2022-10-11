#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;
    student()                                               //Default Constructor
    {
        cout<<"Default Constructor"<<endl;
    }

    student(string s,int a,int g)                   //Parameterised Constructor
    {
        cout<<"Parameterised Constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }

    student(student &a)                             //Copy Constructor
    {
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;

    }

    ~student()
    {
        cout<<"Destructor called"<<endl;
    }

    void printInfo()
    {
        cout<<"Name: "<<endl;
        cout<<name<<endl;
        cout<<"Age: "<<endl;
        cout<<age<<endl;
        cout<<"Gender: "<<endl;
        cout<<gender<<endl;
    }

    bool operator == (student &a){                                                  //Operator Overloading
        if(name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    /*student a;
    a.name = 'Guru';
    a.age = 20;
    a.gender = 1;*/

    //array
    /*student arr[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Name: "<<endl;
        cin>>arr[i].name;
        cout<<"Age: "<<endl;
        cin>>arr[i].age;
        cout<<"Gender: "<<endl;
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++)
    {
        arr[i].printInfo();
    }*/

    student a("Urvi",20,0);
    a.printInfo();
    student b;
    student c(a);     //or student c=a;
    student d("Rahul",50,1);
    if(c==d)
    {
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
}
