#include <iostream>

using namespace std;

//calculate summary of two intergers
int Add(int a, int b){
    cout<<" int Add(int a, int b) is used!"<<endl;
    return a + b;
}

//calculate sum of two float number
float Add(float a, float b){
    cout<<" float Add(float a, float b) is used!"<<endl;
    return a + b;
}

int main(){
    //use int Add(int a, int b)
    int nSum = Add(2, 3);
    cout<<" 2 + 3 = "<<nSum<<endl;

    //use float Add(float a, float b)
    float fSum = Add(2.5f, 3.7f);
    cout<<" 2.5 + 3.7 = "<<fSum<<endl;

    return 0;
}