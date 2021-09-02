#include "StdAfx.h"
//include head file with class defination
#include "SalarySystem.h"

//constructor
SalarySystem::SalarySystem(void)
{
    m_nCount=0;
}

//de-constructor: clear and release mem
SalarySystem::~SalarySystem(void)
{
    //loop the array of employee pointers and clear
    for(int i=0; i<m_nCount; ++i)
    {
        Emplyee* pEmplyee = m_arrEmplyee[i];
        //delete object
        delete pEmplyee;
        //set the point to NULL
        m_arrEmplyee[i] = NULL;
    }
}

//get user input
void SalarySystem::InputEmplyee(void)
{
    //display prompt info
    cout<<"please input worker info\n"<<
        "format: name   work_years is_manager_or_not\n"<<
        "e.g. ChenLiangqiao 4 0\n"<<
        "input end for ending the input"<<endl;
    //local var
    string strName="";
    int nYears=0;
    bool bManager=false;
    int nIndex = 0;

    //loop for accept user input
    while(nIndex < MAX_COUNT)
    {
        //clear cin
        cin.clear();
        //read user input
        cin>>strName>>nYears>>bManager;
        //is end or not
        if("end" == strName)
            break;
        //create employee object
        Emplyee* pEmplyee = NULL;
        if(bManager)
        {
            //if input is a manager, create Manager object
            pEmplyee = new Manager(strName, nYears);
        }
        else
        {
            //if input is a worker
            pEmplyee = new Worker(strName, nYears);
        }
        //save the employee pointers to array
        m_arrEmplyee[nIndex] = pEmplyee;
        //increase the index
        ++nIndex;
    }
    //save total number of employee
    m_nCount = nIndex;
}

//display salary info
void SalarySystem::DisplaySalary(void)
{
    //display salary info
    cout<<"salary system"<<endl;
    cout<<"current employee number is: "<<m_nCount<<
        "\naverage salary is: "<<GetAverSalary()<<endl;
    cout<<"all employees salary info shown below: "<<endl;
    //loop array of employer pointers, output info of every employee
    //user pointer of base class
    for(int i = 0; i < m_nCount; ++i)
    {
        Emplyee* pEmplyee = m_arrEmplyee[i];
        cout<<pEmplyee->GetName()<<"\t"<<
            pEmplyee->GetSalary()<<endl;
    }
}

//calculate average salary
double SalarySystem::GetAverSalary()
{
    int nTotal = 0;
    // calculate total value
    for (int i = 0; i < m_nCount; ++i)
    {
        Emplyee* pEmplyee = m_arrEmplyee[i];
        nTotal += pEmplyee->GetSalary();
    }
    //return average salary
    return (double)nTotal / (m_nCount);
}