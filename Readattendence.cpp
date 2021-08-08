
#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <conio.h>
#include <sstream>
#include <iomanip>
using namespace std;


string Ndate;
string Droll, Ddate, Dattend;
string fse, fco, foop, fat, fos, fcn;
int scounter;
int k = 0;
string Psub, Asub;
int counttheaverage;
float totalattendence, newwattend;
float spercent;
int precounter, abcounter;
 string nnroll,rroll;
void readbyrolldate()
{
    int state = 0;
    ifstream disp("Newattend.csv");
    while (disp.peek() != EOF)
    {
        getline(disp >> ws, Droll, ',');
        getline(disp >> ws, Ddate, ',');
        //getline(disp>>ws,fdaata,'#');
        getline(disp >> ws, fse, ',');
        getline(disp >> ws, fco, ',');
        getline(disp >> ws, foop, ',');
        getline(disp >> ws, fat, ',');
        getline(disp >> ws, fos, ',');
        getline(disp >> ws, fcn, ',');
        getline(disp >> ws, Dattend, '*');
        if (nnroll.compare(Droll) == 0)
        {
            if (k == 0)
            {
                cout << "Roll number : " << Droll << endl;
            }
            k = k + 1;
            state = 1;
            if (Ndate.compare(Ddate) == 0)
            {
                cout << "Date : " << Ddate << endl;
                cout << "sub  P/A\n"
                     << endl;
                cout << fse << endl
                     << fco << endl
                     << foop << endl
                     << fos << endl
                     << fcn << endl;
                cout << "Attendance : " << Dattend << "%" << endl
                     << endl;
                state = 2;
            }
        }
    }
    if (state == 0)
    {
        cout << "No data found\n";
    }
    disp.close();
}

void readbydate()
{
    int state = 0;
    ifstream dispday("Newattend.csv");
    while (dispday.peek() != EOF)
    {
        getline(dispday >> ws, Droll, ',');
        getline(dispday >> ws, Ddate, ',');
        //getline(dispday>>ws,fdaata,'#');
        getline(dispday >> ws, fse, ',');
        getline(dispday >> ws, fco, ',');
        getline(dispday >> ws, foop, ',');
        getline(dispday >> ws, fat, ',');
        getline(dispday >> ws, fos, ',');
        getline(dispday >> ws, fcn, ',');
        getline(dispday >> ws, Dattend, '*');
        if (Ndate.compare(Ddate) == 0)
        {
            cout << "Roll number : " << Droll << endl;

            cout << "Date : " << Ddate << endl;
            cout << "sub   P/A\n"
                 << endl;
            cout << fse << endl
                 << fco << endl
                 << foop << endl
                 << fos << endl
                 << fcn << endl;
            cout << "Attendance : " << Dattend << "%" << endl
                 << endl;
            state = 2;
        }
    }
    if (state == 0)
    {
        cout << "No data found\n";
    }
    dispday.close();
}

void readalldata()
{
    counttheaverage = 0;
    newwattend = 0;
    ifstream disp("Newattend.csv");
    while (disp.peek() != EOF)
    {
        getline(disp >> ws, Droll, ',');
        getline(disp >> ws, Ddate, ',');
        getline(disp >> ws, fse, ',');
        getline(disp >> ws, fco, ',');
        getline(disp >> ws, foop, ',');
        getline(disp >> ws, fat, ',');
        getline(disp >> ws, fos, ',');
        getline(disp >> ws, fcn, ',');
        //getline(disp>>ws,fdaata,'#');
        getline(disp >> ws, Dattend, '*');
        if (nnroll.compare(Droll) == 0)
        {
            if (k == 0)
            {
                cout << "Roll number : " << Droll << endl;
            }
            k = k + 1;
            cout << "Date : " << Ddate << endl;
            cout << "SUB: Present/Absent\n"
                 << endl;
            cout << fse << endl
                 << fco << endl
                 << foop << endl
                 << fos << endl
                 << fcn << endl;
            cout << "Attendance : " << Dattend << "%" << endl
                 << endl;
            stringstream convert(Dattend); //converting attendance string into float

            convert >> newwattend;
            totalattendence = totalattendence + newwattend;
            counttheaverage = counttheaverage + 1;
        }
    }
    disp.close();
}

////read by subject
void attendbysub()
{
    int atstate = 0;
    precounter = 0;
    abcounter = 0;
    cout << "Enter Roll Number : ";
    cin >> nnroll;
    ifstream absub("Newattend.csv");
    while (absub.peek() != EOF)
    {
        getline(absub >> ws, Droll, ',');
        getline(absub >> ws, Ddate, ',');

        getline(absub >> ws, fse, ',');
        getline(absub >> ws, fco, ',');
        getline(absub >> ws, foop, ',');
        getline(absub >> ws, fat, ',');
        getline(absub >> ws, fos, ',');
        getline(absub >> ws, fcn, ',');

        getline(absub >> ws, Dattend, '*');

        if (nnroll.compare(Droll) == 0)
        {
            atstate = 1;
            if (Psub.compare(fse) == 0)
            {
                precounter = precounter + 1;
            }
            if (Asub.compare(fse) == 0)
            {
                abcounter = abcounter + 1;
            }

            if (Psub.compare(fco) == 0)
            {
                precounter = precounter + 1;
            }
            if (Asub.compare(fco) == 0)
            {
                abcounter = abcounter + 1;
            }

            if (Psub.compare(foop) == 0)
            {
                precounter = precounter + 1;
            }
            if (Asub.compare(foop) == 0)
            {
                abcounter = abcounter + 1;
            }

            if (Psub.compare(fat) == 0)
            {
                precounter = precounter + 1;
            }
            if (Asub.compare(fat) == 0)
            {
                abcounter = abcounter + 1;
            }

            if (Psub.compare(fos) == 0)
            {
                precounter = precounter + 1;
            }
            if (Asub.compare(fos) == 0)
            {
                abcounter = abcounter + 1;
            }

            if (Psub.compare(fcn) == 0)
            {
                precounter = precounter + 1;
            }
            if (Asub.compare(fcn) == 0)
            {
                abcounter = abcounter + 1;
            }
        }
    }
    if (atstate == 0)
    {
        cout << "Sorry No data Found\n";
    }
    if (atstate == 1)
    {
        cout << "total present was " << precounter << endl;
        cout << "total absent was " << abcounter << endl;
        float presenter = precounter;
        float absenter = abcounter;
        int stotal = presenter + absenter;
        double tot = presenter / stotal;
        tot = tot * 100;

        cout << "The total percentage is " << setprecision(4) << tot << "%" << endl;
    }
}

int readattendence()
{
   

    int j;
    cout << "1.search by roll and date\n2.search by date only\n3.search all data by roll no.\n4.View attendance of Sub\n";
    cin >> j;

    if (j == 1)
    {
        cout << "Enter roll no: ";
        cin >> nnroll;
        cout << "Enter date in dd/mm/yyyy format\n";
        getline(cin >> ws, Ndate);
        readbyrolldate();
    }
    else if (j == 2)
    {
        cout << "Enter date in dd/mm/yyyy format\n";
        getline(cin >> ws, Ndate);
        readbydate();
    }
    else if (j == 3)
    {
        cout << "Enter roll no: ";
        cin >> nnroll;
        readalldata();
        totalattendence = totalattendence / counttheaverage;
        cout << "And Total Attendance Till today is : " << setprecision(4) << totalattendence << "%" << endl;
    }
    else if (j == 4)
    {
        cout << "1.SE\t2.CO\t3.OOP\t4.AT\n5.OS\t6.CN2\n";
        int schoice;
        cin >> schoice;
        switch (schoice)
        {
        case 1:
            Psub = "SE :P";
            Asub = "SE :A";
            attendbysub();
            break;
        case 2:
            Psub = "CO :P";
            Asub = "CO :A";
            attendbysub();
            break;
        case 3:
            Psub = "oop :P";
            Asub = "oop :A";
            attendbysub();
            break;
        case 4:
            Psub = "AT :P";
            Asub = "AT :A";
            attendbysub();
            break;
        case 5:
            Psub = "OS :P";
            Asub = "OS :A";
            attendbysub();
            break;
        case 6:
            Psub = "CN2:P";
            Asub = "CN2:A";
            attendbysub();
            break;
        }
    }

    return 0;
}

// void writeattendence(){
//     main();
// }