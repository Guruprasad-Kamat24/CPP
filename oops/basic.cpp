#include<iostream>
//#include "Hero.cpp"
using namespace std;
class Hero{
    //Properties
    private:
    char name[100];
    public:
    int health;
    char level;

    //Getters
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }

    //Setters
    void setHealth(int h)
    {
         health = h;
    }
    void setLevel(char L)
    {
        level = L;
    }
};
// Padding & greedy alignment
// Empty class has 1 byte of memory to keep track of it
// Getters and setters are the functions used to access private properties from class
int main()
{
    //Object of class
    Hero ramesh;
    //cout<< "Size: "<<sizeof(h1)<<endl;


    //When private
    ramesh.setHealth(70);
    cout<<"Ramesh Health: "<<ramesh.getHealth()<<endl;


    // When Public
    // Set the values of properties
    //ramesh.health = 70;
    //ramesh.level = 'A';

    //To access data members using . operator
    //cout<<"Health is: "<<ramesh.health<<endl;
    //cout<<"Level is: "<<ramesh.level<<endl;

    //Access Modifiers
    /*
    1. Public            // Properties can be accessed from anywhere
    2. Private          //By default    // Properties can be accessed only inside class
    3. protected
    */

}
