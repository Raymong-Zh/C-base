#include <iostream>

using namespace std;

int main()
{
    //array of pointers
    char* arrMonth[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    //define a pointer which point to a pointer
    //array name is the address of the first name
    char** pMonth = arrMonth;
    //cout<<arrMonth<<endl;
    //cout<<pMonth<<endl;
    //get user input
    int nIndex;
    cout<<"please input a number for the month: "<<endl;
    cin>>nIndex;
    //calculate by pointer
    char* pCurMonth = *(pMonth + (nIndex - 1));
    cout<<"the month is: "<<pCurMonth<<endl;
}