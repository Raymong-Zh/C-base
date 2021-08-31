# include <iostream>
using namespace std;
int Add(int a, int b);

int Add(int a, int b){
    int nResult = a + b;
    return nResult;
}

int Power(int n){
    return n * n;
}

int PowerSum(int a, int b){
    return Power(a) + Power(b);
}



int main(){
    int a = 1;
    int b = 2;
    //int nResult = Add(a, b);
    int nResult = PowerSum(a, b);
    cout<<a<<" + "<<b<<" = "<<nResult<<endl;
    return 0;
}