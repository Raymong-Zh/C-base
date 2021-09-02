#include "stdafx.h"
//include head file of SalarySystem statement
#include "SalarySystem.h"

//main function
int main()
{
    //create SalarySystem object
    SalarySystem nSalarySys;
    //get user input
    nSalarySys.InputEmplyee();
    //display specific salary info
    nSalarySys.DisplaySalary();

    return 0;
}