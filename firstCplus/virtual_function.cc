#include <iostream>

using namespace std;

class Human()
{
//Human's actions
public:
    //BuyTicket() is a virtual function
    //could be redefine in Subclass
    virtual void BuyTicket()
    {
        cout<<"Human buy ticket."<<endl;
    }
private:
};

//redefine virtual function in subclass
class Teacher : public Human
{
public:
    //redefine BuyTicket() function
    virtual void BuyTicket()
    {
        cout<<"Teacher buy ticket by coins."<<endl;
    }
};

class Student : public Human
{
public:
    //redefine virtual function
    virtual void BuyTicket()
    {
        cout<<"Student buy ticket by card."<<endl;
    }
};


int main() {
    return 0;
}