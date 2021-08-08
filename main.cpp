#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <bits/stdc++.h>
#include <iomanip>
#include <windows.h>

#include "modifycode.cpp"
#include "Readattendence.cpp"
#include "Markattendence.cpp"
#include "academicrecord.cpp"
#include "login2.0.cpp"
#include "passwordreset.cpp"
#include "intro.cpp"
using namespace std;

void create();
void search();
void modify();
int main();
void classview();
void attendence();
void deletes();
void academics();

string name, fathername, lastname, email, areapin, degree, branch, contact;
string froll, fname, fprn, ffather, flast;
void create()
{
    string rollno, prn;
    char choice;
    cout << "Enter Student Details:\n"
         << endl;
    cout << "Enter first name: " << endl;
    cin >> name;
    cout << "Enter father's name: ";
    cin >> fathername;
    cout << "Enter last Name: ";
    cin >> lastname;
    cout << "Enter student Roll.no: ";
    cin >> rollno;
    cout << "Enter Student PRN: ";
    cin >> prn;
    cout << "Enter Course Degree ";
    cin >> degree;
    cout << "Enter Student Branch: ";
    cin >> branch;
    cout << "Enter Student email:: ";
    cin >> email;
    cout << "Enter Home pin code: ";
    cin >> areapin;
    cout << "Enter Contact Number:";
    cin >> contact;

    ofstream write("StudenData.csv", ios::app);
    write << "\n"
          << name << "," << fathername << "," << lastname << ","
          << rollno << ","
          << prn << "," << degree << "," << branch << "," << email << "," << areapin << "," << contact << "\n";
    write.close();

    cout << "Do you want to create another record? Enter choice Y/N";
    cin >> choice;

    if (choice == 'y' && choice == 'Y')
    {
        create();
    }
    else
    {
        system("cls");
    }
}
void search()
{
    int state = 22;
    char response;

    cout << "\t\t\t***Search Data**" << endl;
    cout << "\t\t\t\t1] Search by roll no.\n";
    cout << "\t\t\t\t2]Search by name\n";
    response = _getch();
    if (response == 49)
    {

        string roll1;

        cout << "Enter the roll.no. to search:";
        cin >> roll1;
        ifstream find("StudenData.csv");
        while (find.peek() != EOF)
        {

            getline(find >> ws, fname, ',');
            getline(find >> ws, ffather, ',');
            getline(find >> ws, flast, ',');
            getline(find >> ws, froll, ',');
            getline(find >> ws, fprn, ',');
            getline(find >> ws, degree, ',');
            getline(find >> ws, branch, ',');
            getline(find >> ws, email, ',');
            getline(find >> ws, areapin, ',');
            getline(find >> ws, contact, '\n');
            if (roll1.compare(froll) == 0)
            {

                cout << "Name: " << fname << " " << ffather << " " << flast << "\n";
                cout << "Roll.No: " << froll << endl;
                cout << "PRN Number: " << fprn << endl;
                cout << "Course Degree " << degree << endl;
                cout << "Course Branch/Subject: " << branch << endl;
                cout << "Student Email: " << email << endl;
                cout << "Student Home Pin: " << areapin << endl;
                cout << "CONTACT INFO: " << contact << endl;
                state = 2;
            }
        }

        if (state == 22)
        {
            cout << "Data Not found!\n";
        }
        // find.close();
    }

    if (response == 50)
    {

        string froll1, fname1, fprn1, ffather1, flast1;
        string sname, slastname;
        int x = 0;
        cout << "Enter First name:";
        cin >> sname;
        cout << "Enter Last name: ";
        cin >> slastname;

        ifstream find1("StudenData.csv");
        while (find1.peek() != EOF)
        {

            getline(find1 >> ws, fname1, ',');
            getline(find1 >> ws, ffather1, ',');
            getline(find1 >> ws, flast1, ',');
            getline(find1 >> ws, froll1, ',');
            getline(find1 >> ws, fprn1, ',');
            getline(find1 >> ws, degree, ',');
            getline(find1 >> ws, branch, ',');
            getline(find1 >> ws, email, ',');
            getline(find1 >> ws, areapin, ',');
            getline(find1 >> ws, contact, '\n');
            if (sname.compare(fname1) == 0 && slastname.compare(flast1) == 0)
            {
                cout << "Name: " << fname1 << " " << ffather1 << " " << flast1 << "\n";
                cout << "Roll.No: " << froll1 << endl;
                cout << "PRN Number: " << fprn1 << endl;
                cout << "Course Degree " << degree << endl;
                cout << "Course Branch/Subject " << branch << endl;
                cout << "Student Email: " << email << endl;
                cout << "Student Home Pin " << areapin << endl;
                cout << "CONTACT INFO: " << contact << endl;
                x = 2;
            }
        }
        if (x == 0)
        {
            cout << "Data Not found!\n";
        }

        find1.close();
    }
    if (response != 49 && response != 50)
    {
        cout << "Enter valid response" << endl;
        search();
    }
}

void modify()
{
    replacecall();
}

void deletes()
{
    deletecall();
}

void academics()
{
    academicrec();
}
void attendence()
{
    int res;
    cout << "\t\t\t\t*************************************\n";
    cout << "\t\t\t\t*************ATTENDENCE**************\n";
    cout << "\t\t\t\t*************************************\n";
    cout << "\t\t\t1]Mark Attendence\n\t\t\t2]View Attendence\n";
    cout << "Enter your choice: ";
    cin >> res;
    system("cls");
    switch (res)
    {
    case 1:
        writeattendence();
        break;
    case 2:
        readattendence();
        break;

    default:
        cout << "Invalid choice";
        attendence();
        break;
    }
}
void adminview()
{
adminlog:
    int input;
    cout << setw(50) << char(201);
    for (int i = 0; i < 33; i++)
    {
        cout << char(205);
    }
    cout << char(187) << endl;
    cout << setw(50) << char(186) << "   **STUDENT MANAGEMENT SYSTEM** " << char(186) << endl;
    cout << setw(50) << char(186) << "---------------------------------" << char(186) << endl;
    cout << setw(50) << char(186) << "     *****ADMIN CONSOLE*****     " << char(186) << endl;
    cout << setw(50) << char(186) << "---------------------------------" << char(186) << endl;
    cout << setw(50) << char(186) << "      1]Create student record.   " << char(186) << endl;
    cout << setw(50) << char(186) << "      2]Search student record.   " << char(186) << endl;
    cout << setw(50) << char(186) << "      3]Modify student record    " << char(186) << endl;
    cout << setw(50) << char(186) << "      4]Delete student record    " << char(186) << endl;
    // cout << char(186) << "      5]Class view.              " << char(186) << endl;
    cout << setw(50) << char(186) << "      5]Academic Performance     " << char(186) << endl;
    cout << setw(50) << char(186) << "      6]Attendence.              " << char(186) << endl;
    cout << setw(50) << char(186) << "      7]Logout                   " << char(186) << endl;
    cout << setw(50) << char(200);
    for (int i = 0; i < 33; i++)
    {
        cout << char(205);
    }
    cout << char(188) << endl;

    // cout << "\t\t\t****STUDENT MANAGEMENT SYSTEM**\n";
    // cout << "\t\t\t\t\t1]Create student record." << endl;
    // cout << "\t\t\t\t\t2]Search student record." << endl;
    // cout << "\t\t\t\t\t3]Modify student record." << endl;
    // cout << "\t\t\t\t\t4]Delete student record." << endl;
    // cout << "\t\t\t\t\t5]Class view." << endl;
    // cout << "\t\t\t\t\t6]Academic Performance" << endl;
    // cout << "\t\t\t\t\t7]Attendence." << endl;
    // cout << "\t\t\t\t\t8]Logout." << endl;
    cin >> input;
    system("cls");

    switch (input)
    {
    case 1:
        create();
        adminview();
        break;

    case 2:
        search();
        adminview();
        break;

    case 3:
        modify();
        adminview();
        break;

    case 4:
        deletes();
        adminview();
        break;

        // case 5:
        //     classview();
        //     break;

    case 5:
        academics();
        adminview();
        break;

    case 6:
        attendence();
        adminview();
        break;
    case 7:
        main();
        break;

    default:
        adminview();
        break;
    }
}

int main()
{
    intro();
chalu:
    char log;

    cout << setw(75) << "********LOGIN MENU**********\n";

    cout << setw(75) << "\t1]Login \t2]Signup\t 3]Reset Password\n\n";
    log = _getch();
    system("cls");
    switch (log)
    {
    case 49:
        login(); 
        goto studenlog;
        break;

    case 50:
        signn();
        goto studenlog;
        break;

    case 51:
        passres();
        goto studenlog;
        break;

    case 38://&
        adminlogin();
        adminview();
        break;

    default:
        exit(0);
        break;
    }

    int input;
    /*****************************************************************************************************************
                                        Single Borders Box
*****************************************************************************************************************/
studenlog:
    cout << setw(50) << char(201);
    for (int i = 0; i < 33; i++)
    {
        cout << char(205);
    }
    cout << char(187) << endl;
    cout << setw(50) << char(186) << "   **STUDENT MANAGEMENT SYSTEM** " << char(186) << endl;
    cout << setw(50) << char(186) << "---------------------------------" << char(186) << endl;
    cout << setw(50) << char(186) << "---------------------------------" << char(186) << endl;
    cout << setw(50) << char(186) << "      1]Create student record.   " << char(186) << endl;
    cout << setw(50) << char(186) << "      2]Search student record.   " << char(186) << endl;
    // cout << char(186) << "      3]Class view.              " << char(186) << endl;
    cout << setw(50) << char(186) << "      3]Academic Performance     " << char(186) << endl;
    cout << setw(50) << char(186) << "      4]Attendence.              " << char(186) << endl;
    cout << setw(50) << char(186) << "      5]Logout                   " << char(186) << endl;
    cout << setw(50) << char(200);
    for (int i = 0; i < 33; i++)
    {
        cout << char(205);
    }
    cout << char(188) << endl;

    // cout << "\t\t\t****STUDENT MANAGEMENT SYSTEM**\n";
    // cout << "\t\t\t\t\t1]Create student record." << endl;
    // cout << "\t\t\t\t\t2]Search student record." << endl;
    // cout << "\t\t\t\t\t3]Modify student record." << endl;
    // cout << "\t\t\t\t\t4]Delete student record." << endl;
    // cout << "\t\t\t\t\t5]Class view." << endl;
    // cout << "\t\t\t\t\t6]Academic Performance" << endl;
    // cout << "\t\t\t\t\t7]Attendence." << endl;
    // cout << "\t\t\t\t\t8]Logout." << endl;
    cin >> input;
    system("cls");

    switch (input)
    {
    case 1:
        create();

        break;

    case 2:
        search();
        break;

        // case 3:
        //     classview();
        //     break;

    case 3:
        cout << "******VIEW ACADEMIC RECORD*********\n";
        viewrec();

        break;

    case 4:
        attendence();
        break;
    case 5:
        goto chalu;
        break;

    default:

        break;
    }
    system("pause");
    goto studenlog;
}
