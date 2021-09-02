#include <iostream>

using namespace std;

class Teacher
{
//public members
public:
    //Constructor should be public
    Teacher(string strName)
    {
        m_strName = strName;
    }

    //PrepareLesson() should be public
    void PrepareLesson()
    {
        cout<<"prepare lessons."<<endl;
    }
    //GetName() should be public
    string GetName()
    {
        return m_strName;
    }

//protect member
//could be used by children class
protected:
    //own name
    string m_strName;

private:
};


int main()
{
    //create object with class
    Teacher MrChen("ChenLiangqiao");

    //visit public member
    string strTeacherName;
    strTeacherName = MrChen.GetName();

    //error can not visit protected member
    MrChen.m_strName = "Jiawei";

    return 0;

}