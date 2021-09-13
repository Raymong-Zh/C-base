#include <iostream>

using namespace std;

int main()
{
    int nArray[3] = {1, 2, 3}; //define an array
    int* pIndex = nArray;
    cout<<"the pointer points to addr: "<<pIndex<<endl; //output the address 
    cout<<"the value of the var which pointer points to: "<<*pIndex<<endl; //output the value

    /*
    pIndex++; //the pointer add,  points to the next element
    cout<<"the pointer points to addr: "<<pIndex<<endl; //output the address
    cout<<"the value of var which the pointer points to: "<<*pIndex<<endl; //output the value
    */
    int* pEnd = nArray + 3;  //addr of the last elment
    while(pIndex != pEnd)  
    {
        cout<<*pIndex<<endl;
        ++pIndex;
    }
    
    return 0;
}