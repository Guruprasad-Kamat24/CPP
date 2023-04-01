#include<iostream>
#include<string.h>
using namespace std;
class Hero{
public:
    //Static keyword: Creates a data member that belongs to class
    static int timeToComplete;
    private:
        int health;
        //string name;
        char *name;
        char level;

    public:
    int getHealth()
    {
        return health;
    }
    /*string getName()
    {
        return name;
    }*/
    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }
    /*void setName(string n)
    {
        name = n;
    }*/
    void setLevel(char L)
    {
        level = L;
    }

    void setName(char name[])
    {
        strcpy(this->name,name);
    }

    //Static functions:
    static int random()
    {
        return timeToComplete;
    }

    //Constructor
    Hero()
    {
        cout<<"Constructor  Called"<<endl;
        name = new char[100];
    }

    //parameterized constructor
    Hero(int health,char level)
    {
        //cout<<"This-> "<<this<<endl;
        this->level = level;
        this->health = health;
    }

    //Copy Constructor
    Hero(Hero& temp)
    {
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    //Destructor
    /*~Hero(){
        cout<<"Destructor Called"<<endl;
    }*/

    void print()
    {
        cout<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Health: "<<this->health<<endl;
        cout<<"Level: "<<this->level<<endl;
    }


};
//Initialize static keyword => Belongs to class
// :: => Scope Resolution Operator
int Hero::timeToComplete = 5;

//There exists a default constructor in class without any parameters
//But when we create one with parameters then default constructor goes off.
int main()
{
    //Static data:
    cout<<Hero::timeToComplete<<endl;
    Hero a;
    cout<<a.timeToComplete<<endl;

    Hero b;
    b.timeToComplete = 10;
    cout<<b.timeToComplete<<endl;

    //Static Functions:
    cout<<Hero::random()<<endl;


    //Copy Constructor
    /*Hero suresh(70,'C');
    suresh.print();
    Hero ritesh(suresh);
    ritesh.print();*/

    //DEEP & SHALLOW copy
    //1.SHALLOW copy
    /*Hero h1;
    h1.setHealth(12);
    h1.setLevel('A');
    char name[7] = "Guru";
    h1.setName(name);
    h1.print();
    //use default copy constructor;
    Hero h2(h1);
    h2.print();
    h1.setName("B") ;
    h1.print();
    h2.print();

    //2.DEEP copy
    Hero h1;
    h1.setHealth(12);
    h1.setLevel('A');
    char name[7] = "Guru";
    h1.setName(name);
    h1.print();
    Hero h2(h1);
    h2.print();
    h1.setName("B") ;
    h1.print();
    h2.print();*/

    // Copy Assignment Operator
    /*Hero h1;
    h1.setHealth(12);
    h1.setLevel('A');
    char name[7] = "Guru";
    h1.setName(name);

    Hero h2(h1);
    h1.setName("B") ;
    h1.print();
    h2.print();

    h1 = h2;
    h1.print();
    h2.print();*/

    /*//Destructor --> used to deallocate the memory
    //static:
    Hero a;                         //Destructor is called automatically for static allocation
    //Dynamic:
    Hero *b = new Hero();
    delete b;                       //Destructor is called manually for dynamic allocation
    */

    // Parameterized constructor
    /*Hero guru(75,'A');
    cout<<"Address of Guru: "<<&guru<<endl;
    guru.getHealth();*/


    /*//Allocating Dynamic memory
    Hero *guru = new Hero;
    (*guru).setHealth(90);
    (*guru).setLevel('A');
    (*guru).setName("Guruprasad");
    cout<<"Name is "<<(*guru).getName()<<endl;
    cout<<"Health is "<<(*guru).getHealth()<<endl;
    cout<<"Level is "<<(*guru).getLevel()<<endl;
    //OR:
    guru->setHealth(90);
    guru->setLevel('A');
    guru->setName("Guruprasad");
    cout<<"Name is "<<guru->getName()<<endl;
    cout<<"Health is "<<guru->getHealth()<<endl;
    cout<<"Level is "<<guru->getLevel()<<endl;
    */

}
