#include<iostream>
using namespace std;
// Click on this link: https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1382190
/*
//1]
    //Encapsulation: Wrapping up data members and functions
    // Fully encapsulated class: Every data member is private marked
    //1.Encapsulation is done for information/data hiding
    //2.If we want, we can make class read only.
    //3.Code Reusability
    //4.Helps in unit testing
    class Student{
    private:
        string name;
        int age;
        int height;

    public:
        int getAge()
        {
            return this->age;
        }
    };
    */

/*
//2]
    //Inheritance: Sub-class/Child-class inherits Super-class/Parent-class.
    //Mode of inheritance:  Public: Anyone can access data members  Private: Only that class can access data members    Protected: Parent and child class can access data members
    //Superclass  Subclass  Ans
    //public          public      public
    //public          private     private
    //public          protected protected
    //protected     public      protected
    //protected     protected protected
    //protected     private      private
    //private         public       Not Accessible
    //private         private      Not Accessible
    //private         protected  Not Accessible
    //Parent class
    class Human{
    public:
        int height;
        int weight;
        int age;

    public:
        int getAge()
        {
            return this->age;
        }
        int getHeight()
        {
            return this->height;
        }
        int getWeight()
        {
            return this->weight;
        }
        void setWeight(int weight)
        {
            this->weight = weight;
        }
        void setHeight(int height)
        {
            this->height = height;
        }
        void setAge(int age)
        {
            this->age = age;
        }
    };
    //Child class
    class Male: public Human{
    public:
        string color="Brown";
        void sleep()
        {
            cout<<"Male Sleeping"<<endl;
        }
        //while protected
        int getHeight()
        {
            return this->height;
        }
    };
    */
    //Types of inheritance: 1.Single 2.Multi-Level 3.Multiple 4.Hierarchical 5.Hybrid
    /*
    //1.Single inheritance:
    class Animal{
    public:
        int age;
        int weight;
    public:
        void speak()
        {
            cout<<"speaking"<<endl;
        }
    };
    class Dog: public Animal{
    };
    */
    /*
    //2.Multi-Level inheritance:
    class Animal{
    public:
        int age;
        int weight;
    public:
        void speak()
        {
            cout<<"speaking"<<endl;
        }
    };
    class Dog: public Animal{
    };
    class GermanSheppard: public Dog{
    };
    */

    /*
    //3.Multiple inheritance:
    class Animal{
    public:
        int age;
        int weight;
    public:
        void bark()
        {
            cout<<"barking"<<endl;
        }
    };
    class Human{
        public:
        string color;
        void speak()
        {
            cout<<"Speaking"<<endl;
        }
    };
    class Hybrid: public Animal,public Human{
    };
    */

    /*
    //4.Hierarchical inheritance: One class Serve as parent class for more then one class
    class A{
    public:
        void func1()
        {
            cout<<"Inside func1"<<endl;
        }
    };

    class B: public A{
    public:
        void func2()
        {
            cout<<"Inside func2"<<endl;
        }
    };

    class C: public A{
    public:
        void func3()
        {
            cout<<"Inside func3"<<endl;
        }
    };
    */

    /*
    //5.Hybrid Inheritance: Combination of more than one type of inheritance
    */

    /*
    //** Inheritance Ambiguity: When there are multiple parents of a child having a function with same name then there comes Inheritance Ambiguity.
    //Scope Resolution operator ::
    class A{
    public:
        void func()
        {
            cout<<"I'm A"<<endl;
        }
    };

    class B{
    public:
        void func()
        {
            cout<<"I'm B"<<endl;
        }
    };

    class C: public A,public B{
    };
    */

//3]
    //Polymorphism: Existing in multiple forms.
    //1.Compile time Polymorphism: 1)Function overloading 2)Operator overloading    (Static polymorphism)
    /*
    // 1)Function overloading: Functions with same name,return type,arguments
    class A{
    public:
        void SayHello()
        {
            cout<<"Hello Guru"<<endl;
        }
        void SayHello(string name)
        {
            cout<<"Hello"<<name<<endl;
        }
    };
    */
    /*
    //2)Operator overloading
    //+ -> substraction
    class B{
    public:
        int a,b;
    public:
        int add()
        {
            return a+b;
        }
        void operator+ (B &obj)
        {
            int val1 =this->a;
            int val2 =obj.a;
            cout<<"Output: "<<val2-val1<<endl;
        }
        void operator() ()
        {
            cout<<"Meh racket hu "<<this->a<<endl;
        }
    };
    */

    //2.Run time Polymorphism: 1)Method overriding    (Dynamic polymorphism)
    //1)Method overriding
    //Methods of parent & child classes should have same name and parameters.
    //It is possible through inheritance only
    /*
    class Animal{
    public:
        void speak()
        {
            cout<<"Speaking"<<endl;
        }
    };
    class Dog: public Animal{
    public:
        void speak()
        {
            cout<<"Barking"<<endl;
        }
    };
    */

//4]
    //Abstraction: Implementation hiding
    //Advantages: Only you can make changes to your data or functions
    //                    It makes the application secure by not allowing anyone else to see the background details
    //                    Increases the reusability of the code
    //                    Avoids duplication of code


int main()
{
    /*
    Dog d1;
    d1.speak();
    */

    /*
    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1+obj2;
    obj1();
    */

    /*
    A a1;
    a1.SayHello();
    */

    /*
    C c1;
    //c1.func();        Ambiguity
    c1.A::func();
    c1.B::func();
    */

    /*
    A a1;
    a1.func1();

    B b1;
    b1.func1();
    b1.func2();

    C c1;
    c1.func1();
    c1.func3();
    */

    /*
    Hybrid h1;
    h1.speak();
    h1.bark();
    */

    /*
    GermanSheppard g;
    g.speak();
    */

    /*
    Dog d;
    d.speak();
    */

    /*
    Male m1;
    m1.setAge(21);
    m1.setHeight(173);
    m1.setWeight(55);
    cout<<m1.age<<endl;
    cout<<m1.weight<<endl;
    cout<<m1.height<<endl;
    cout<<m1.color<<endl;
    m1.sleep();
    */
}
