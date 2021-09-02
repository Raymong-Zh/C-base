#include <iostream>

using namespace std;

// class statement
class Teacher{
//member function
//describe actions of this object
public:
    void PrepareLesson();
//member vars
//describe attribute of this object
protected:
    string m_strName;
private:
};

//class defination 1
/*
class Teacher
{
// member functions
// describe actions of the object
public:
    void PrepareLesson()
    {
        cout<<"teacher prepare lesson."<<endl;
    };
//...
};

*/

//class defination 2
void Teacher::PrepareLesson()
{
    cout<<"Teacher prepare lesson."<<endl;
}

//use "struct" to declare a React class
struct Rect
{
    //member functions are public in default
    int GetArea()
    {
        return m_nW * m_nH;
    }
    //member vars are public in default too
    int m_nH;
    int m_nW;
};



int main(){
    Rect rect;
    rect.m_nW = 3;
    rect.m_nH = 4;
    cout<<"Rect's area is: "<<rect.GetArea()<<endl;
    return 0;
}