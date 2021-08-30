#include <iostream>

using namespace std;

// salary management program
int main()
{
    //define a const for total number of employers
    const int MAX_NUM = 1000;
    //array for saving all salary data
    int nSalary[MAX_NUM];

    //input salary data for each employer
    int nTemp = 0; //temp var for saving user input data
    int nIndex = 0; //input index
    //use while loop for accepting multi input
    do
    {
        cout<<"please input employer "<<nIndex<<"'s salary: "<<endl;
        cin>>nTemp;
        //salary can not be negative
        //if input error, you need input again
        if ( nTemp<0 )
        {
            cout<<"no kidding, please input again!"<<endl;
            continue;
        }
        //save legal input to array
        nSalary[nIndex] = nTemp;
        ++nIndex;
    } while ( nIndex < MAX_NUM );
    // count average salary
    float fAverageSalary;
    int nTotal = 0; //total of salary
    // count total by for loop
    for (int i = 0; i < MAX_NUM; ++i)
    {
        nTotal += nSalary[i];
    }
    // average = total / num
    fAverageSalary = (float)nTotal / MAX_NUM;
    cout<<MAX_NUM<<" employers' average salary is "<<fAverageSalary<<endl;
    //find max and min salary...
    return 0;
}