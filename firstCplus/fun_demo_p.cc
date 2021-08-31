#include <iostream>
using namespace std;

float GetAverageSalary(int *pSalary, const int MAX_NUM);
int InputSalary(int *pSalary, const int MAX_NUM);

//calculate average salary
float GetAverageSalary(int *pSalary, const int MAX_NUM){
    // calculate summary
    int nTotal = 0; //salary summary
    for (int i = 0; i < MAX_NUM; ++i){
        nTotal += pSalary[i];
    }
    // average = summary / num
    return (float)nTotal / MAX_NUM;
}

//input salary into data array
int InputSalary(int *pSalary, const int MAX_NUM){
    int nTemp = 0; //temp var for saving user input data
    int nIndex = 0; //input index number
    do {
        cout<<"please input employer "<<nIndex<<"'s salary: "<<endl;
        cin>>nTemp;
        // if input is negative, end loop
        if (nTemp < 0){
            break;
        }
        // saving legal data
        pSalary[nIndex] = nTemp;
        ++nIndex;
    } while (nIndex < MAX_NUM);
    //return total number of input 
    return nIndex;
}

int main(){
    const int MAX_NUM = 5;
    int nSalary[MAX_NUM];
    //input salary info
    int nCount = InputSalary(nSalary, MAX_NUM);
    //calculate average salary
    float fAverageSalary = GetAverageSalary(nSalary, nCount);


    //int nSalary[MAX_NUM] = {20, 2000, 35, 40, 60};
    //float fAverageSalary = GetAverageSalary(nSalary, MAX_NUM);
    cout<<"average info is: "<< fAverageSalary<<endl;

    return 0;
}