#include <iostream>

using namespace std;

//function for calculating sum of an array
//pArray is the first address of the array and nArrayCount is the number of array elements
//nSum is the summary of all data

void SumArray(int* pArray, int nArrayCount, int* nSum)
{
    *nSum = 0;

    //for loop the array
    for (int i = 0; i < nArrayCount; ++i)
    {
        //visit array element by pointer
        //visit var which save the result(nArraySum)
        *nSum += *pArray;
        pArray++;//pointer calculating
    }
}


int main()
{
    //define array and var
    int nArraySum;
    int nArray[5] = {1, 2, 3, 4, 5};

    //use function
    SumArray(nArray, 5, &nArraySum);

    //output result
    cout<<"the sum of array is: "<<nArraySum<<endl;

    return 0;
}