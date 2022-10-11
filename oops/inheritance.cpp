#include<iostream>
using namespace std;
class ground{
    int rooms;
protected:
    void put();
public:
    void get();
};

class middle: private ground{
    int labs;
public:
    void take();
    void give();
};

class top: public middle{
    int roof;
public:
    void in();
    void out();
};
