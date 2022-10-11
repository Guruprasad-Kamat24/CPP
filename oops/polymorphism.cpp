#include<iostream>
using namespace std;
//Function overloading
/*class apnacollage
{
public:
    void fun()
    {
        cout<<"HI"<<endl;
    }
    void fun(int x)
    {
        cout<<"HI int"<<endl;
    }
    void fun(double x)
    {
        cout<<"HI double"<<endl;
    }

};*/

//Operator overloading
/*class complexi
{
private:
    int real, img;
public:
    complexi(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    complexi operator  +  (complexi const &obj)
    {
        complexi res;
        res.img = img+obj.img;
        res.real = real+obj.real;
        return res;
    }

    void  display()
    {
        cout<<real<<" + i"<<img<<endl;
    }
};*/

class base
{
public:
    virtual void print()
    {
        cout<<"Base print function"<<endl;
    }
    void display()
    {
         cout<<"Base display function"<<endl;
    }

};

class derived: public base{
public:
    void print()
    {
        cout<<"Derived print function"<<endl;
    }
    void display()
    {
         cout<<"Derived display function"<<endl;
    }
};
int main()
{
    /*apnacollage obj;
    obj.fun();
    obj.fun(4);
    obj.fun(4.2);*/

    /*complexi c1(12,7), c2(6,7);
    complexi c3 = c1+c2;
    c3.display();*/

    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr -> print();
    baseptr ->display();
}
