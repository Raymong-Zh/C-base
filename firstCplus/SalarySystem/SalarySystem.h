
//SalarySystem.h file
//for statement of class
#pragma once

//include head file
#include <iostream>
#include <string>
using namespace std;

//employee class
class Emplyee
{
public:
    //Constructor
    //create Emplyee object by name name and time
    Emplyee(string strName, int nYears)
        : m_strName(strName),
          m_nYears(nYears)
    {};

//actions
public:
    //use pure virtual function as pub interface
    //GetSalary() is different between manager and common emplyee
    virtual int GetSalary()=0;

    //publict interface for getting emplyee's name
    //define it as an inline function
    string GetName()
    {
        return m_strName;
    };

//attribute could be inherited
protected:
    //work years
    int m_nYears;
    //name
    string m_strName;
};

//manager class
//inheriting from Emplyee
class Manager : public Emplyee
{
public:
    //use constructor of base class
    Manager(string strName, int nYears)
        : Emplyee(strName, nYears)
    {};

public:
    //GetSalary() function
    virtual int GetSalary()
    {
        return 5000 * m_nYears + 10000;
    }
};


//common Worker
class Worker : public Emplyee
{
public:
    Worker(string strName, int nYears)
        : Emplyee(strName, nYears)
    {};

public:
    //virtual function
    virtual int GetSalary()
    {
        return 200 * m_nYears + 2000;
    }
};


//count employee
const int MAX_COUNT = 1000;

//salary system
class SalarySystem
{
public:
    //constructor and de-constructor
    SalarySystem(void);
    ~SalarySystem(void);

//actions
public:
    //input employee info
    void InputEmplyee(void);
    //display employee info
    void DisplaySalary(void);
    //get average salary
    double GetAverSalary(void);

//private attribute
private:
    //current employee count
    int m_nCount;
    //save pointers of Emplyee to an array
    Emplyee* m_arrEmplyee[MAX_COUNT];
};
