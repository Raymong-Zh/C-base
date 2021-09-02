#include <iostream>

using namespace std;

//define base class Human
class Human
{
//public actions 
public:
    void Walk();
    void Talk();
//attributions
protected:
    string m_strName;
    int m_nAge;
    bool m_bMale;
private:
};

// public inherit
class Teacher : public Human
{
//Teacher actions
public:
    void PrepareLesson();
    void TeachLesson();
    void ReviewHomework();

//Teacher attributes
protected:
    int m_nDuty;
private:
};


//public inherit
class Student : public Human
{
//student actions
public:
    void AttendClass();
    void DoHomework();
//student attributes
protected:
    int m_nScore;
private:
};

//inherit Student
class Pupil : public Student
{
//Pupil actions
public:
    void AttendClass();
    void DoHomework();
protected:
private:
};




int main()
{
    return 0;
}