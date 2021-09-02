#include <iostream>

//Human class with member function BuyTicket()

class Human
{
public:
    //buy ticket
    void BuyTicket()
    {
        cout<<"human buy ticket."<<endl;
    }
private:

};

//Teacher class
class Teacher : public Human
{

};

//Student Class
class Student : public Human
{

};


//main function
int main()
{
    //Human type pointer
    Human* pPassenger = NULL;
    //point to a techer
    pPassenger = new Teacher();
    //this teacher buys ticket
    pPassenger->BuyTicket();
    delete pPassenger;

    //point to a student
    pPassenger = new Student();
    //this student buys ticket
    pPassenger->BuyTicket();
    delete pPassenger;

    pPassenger = NULL;

    return 0;

}