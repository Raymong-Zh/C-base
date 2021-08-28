#include "stdafx.h"
#include <iostream>
//import head file needed by input/output file stream
#include <fstream>

using namespace std;
//main function
int main()
{
    //define var for save data in this program
    int nYear, nMonth, nDate;
    //try to open Date.txt file and link to input file stream fin
    ifstream fin("Date.txt");
    //if open success, read content from this file
    if ( !fin.bad() )
    {
        //ignore the first line 
        fin.ignore(256, '\n');
        //read data from fin stream by ">>" and save to reated vars
        fin>>nYear>>nMonth>>nDate;
        //display data
        cout << "date in this file: "
             <<nYear<<"-"<<nMonth<<"-"<<nDate<<endl;
        //read done and close file
        fin.close();
    }
    else
    {
        //if open failed
        cout<<"can't open file and read."<<endl;
    }
    //input new data and write to file
    cout<<"please input current date(year, month, day): "<<endl;
    //read from keyboard input and save to related vars
    cin>>nYear>>nMonth>>nDate;

    //try to open Date.txt file and link to output file stream fout
    ofstream fout("Date.txt");
    //if open success then write to file
    if ( !fout.bad() )
    {
        //write data to fout by <<
        //menas write data to file
        fout<<"user input date is: \n"
            <<nYear<<" "<<nMonth<<" "<<nDate;
        //write done, close file
        fout.close();
    }
    else
    {
        //if open file failed
        cout<<"can't open file"<<endl;
    }
    return 0;
}