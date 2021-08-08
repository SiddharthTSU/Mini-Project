#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <fstream>
#include<conio.h>
using namespace std;
 int i = 500;
float present =0;
float periods = 0;
    string roll;
    string day;
    string month;
    string year;
    string attend;
    string fdaata;
    string date;
    string student;
    char response;
    string  sub;
    string newroll;
    float attendance1;
    // string Droll,Ddate,Dattend;
void attendance(){
cout << "Enter attendence for " <<sub<< endl;
    cout << "1]Present\n2]Absent\n3]Lecture not scheduled" << endl;
    ofstream fout("Newattend.csv",ios::app);

    start:
   response =_getch();
    switch(response){
        case 49:
            periods = periods +1;
        cout<<response<<"\npresent ok\n";
        response = '1';

        present = present +1;

        fout<<sub<<":"<<"P"<<",";
        break;
        case 50:
        periods++;
            cout<<response<<"\nmarked absent\n";
            response = '0';
            fout<<sub<<":"<<"A"<<",";
        break;
        case 51:
            cout<<response<<"\nNot sceduled\n";
             fout<<sub<<":"<<"NA"<<",";
        break;
        default:
            goto start;
    }

fout.close();}
int kk = 0;


void writeattendence()
{


    cout << "enter roll.no." << endl;
    cin >> roll;
    cout << "Enter Date(dd)"<< endl;
    cin >> day;
    cout << "Enter month(mm)"<< endl;
    cin >> month;
    cout << "Enter year(yyyy)"<< endl;
    cin >> year;
     date = day + "/" + month + "/" + year;
    // string SE=0;
cout<<date<<endl;
ofstream fiut("Newattend.csv",ios::app);
    fiut<<"\n"<<roll<<",";
    fiut<<date<<",";
fiut.close();

    sub = "SE ";
attendance();
sub = "CO ";
attendance();
sub = "oop";
attendance();
sub = "AT ";
attendance();
sub = "OS ";
attendance();
sub = "CN2";
attendance();

 attendance1 = present/periods;
attendance1 = attendance1*100;
cout<<"Attendance is :"<<attendance1<<"%\n";
ofstream readat("Newattend.csv",ios::app);
readat<<attendance1<<"*";
readat.close();
system("pause");
   
    
}

// void readattendence(){
//     main();
// }