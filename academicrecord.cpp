#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <conio.h>

using namespace std;

// string name, fathername, lastname;
string rollno, prn, addname, addmname, addlname;
string se, co, oop, at, os, cn;
string fulname, perc;
string fullname;

void academicrec();

void addrec()
{
    int res, addtotal = 0;
    int se, co, oop, at, os, cn;

    cout << "Enter your first Name\n";
    cin >> addname;
    cout << "Enter your father's Name\n";
    cin >> addmname;
    cout << "Enter your Last Name\n";
    cin >> addlname;
    cout << "Enter your Roll No.\n";
    cin >> rollno;
    cout << "Enter your PRN:\n";
    cin >> prn;
SE:
    cout << "Enter marks obtained in SE(out of 100)\n";
    cin >> se;
    if (se > 100 || se < 1)
    {
        cout << "Number not in required parameters,Try again\n";
        goto SE;
    }
    addtotal = addtotal + se;
COA:
    cout << "Enter marks obtained in COA(out of 100)\n";
    cin >> co;
    if (co > 100 || co < 1)
    {
        cout << "Number not in required parameters,Try again\n";
        goto COA;
    }
    addtotal = addtotal + co;

OOP:
    cout << "Enter marks obtained in OOP(out of 100)\n";
    cin >> oop;
    if (oop > 100 || oop < 1)
    {
        cout << "Number not in required parameters,Try again\n";
        goto OOP;
    }
    addtotal = addtotal + oop;
AT:
    cout << "Enter marks obtained in AT(out of 100)\n";
    cin >> at;
    if (at > 100 || at < 1)
    {
        cout << "Number not in required parameters,Try again\n";
        goto AT;
    }
    addtotal = addtotal + at;
OS:
    cout << "Enter marks obtained in OS-I(out of 100)\n";
    cin >> os;
    if (os > 100 || os < 1)
    {
        cout << "Number not in required parameters,Try again\n";
        goto OS;
    }
    addtotal = addtotal + os;
CN:
    cout << "Enter marks obtained in CN-2(out of 100)\n";
    cin >> cn;
    if (cn > 100 || cn < 1)
    {
        cout << "Number not in required parameters,Try again\n";
        goto CN;
    }
    addtotal = addtotal + cn;
    // int total= se+co+oop+at+os+cn;
    cout << "Your Total marks are :" << addtotal << "/600" << endl;
    float perc = addtotal * 100 / 600;
    cout << "Your percentage is:" << perc << "%" << endl;
    ofstream addrec("Academics.csv", ios::app);
    fullname = addname + " " + addmname + " " + addlname;
    addrec << "\n"
           << fullname << "," << rollno << "," << prn << "," << se << "," << co << "," << oop << "," << at << "," << os << "," << cn << "," << perc;
    addrec.close();
}

void viewrec()
{

    int state = 0;
    string inprn;
    cout << "Enter PRN Number" << endl;
    cin >> inprn;
    ifstream find1("Academics.csv");
    while (find1.peek() != EOF)
    {

        getline(find1 >> ws, fulname, ',');
        getline(find1 >> ws, rollno, ',');
        getline(find1 >> ws, prn, ',');
        getline(find1 >> ws, se, ',');
        getline(find1 >> ws, co, ',');
        getline(find1 >> ws, oop, ',');
        getline(find1 >> ws, at, ',');
        getline(find1 >> ws, os, ',');
        getline(find1 >> ws, cn, ',');
        getline(find1 >> ws, perc, '\n');

        if (inprn.compare(prn) == 0)
        {
            cout << "Name: " << fulname << endl;
            cout << "Roll.No: " << rollno << endl;
            cout << "PRN Number: " << prn << endl;
            cout << "SE: " << se << "/100" << endl;
            cout << "COA: " << co << "/100" << endl;
            cout << "OOP: " << oop << "/100" << endl;
            cout << "AT: " << at << "/100" << endl;
            cout << "OS: " << os << "/100" << endl;
            cout << "CN:: " << cn << "/100" << endl;
            // cout<<"TOTAL MARKS:"<<(se+co)+(oop+at)+(os+cn)<<endl;
            cout << "total percentage: " << perc << "%" << endl;
            state = 2;
        }
    }
    if (state == 0)
    {
        char log;

        cout << "Data Not found!\n";
        // system("pause");
        cout << "1.Retry \t2.Exit." << endl;
        log = _getch();
        system("cls");
        switch (log)
        {
        case 49:
            viewrec();
            break;

        default:
            exit(0);
            break;
        }
    }

    find1.close();
}

void deleteline1(const char *file_name, int n)
{
    // open file in read mode or in mode
    ifstream iss(file_name);

    // open file in write mode or out mode
    ofstream ofss;
    ofss.open("temp.txt", ofstream::out);

    // loop getting single characters
    char c;
    int line_no = 1;
    while (iss.get(c))
    {
        // if a newline character
        if (c == '\n')
            line_no++;

        // file content not to be deleted
        if (line_no != n)
            ofss << c;
    }

    // closing output file
    ofss.close();

    // closing input file
    iss.close();

    // remove the original file
    remove(file_name);

    // rename the file
    rename("temp.txt", file_name);
}
void modifyrec()
{

    int n, state = 0;
    int i = 0;
    string rollnoo;
    ifstream file("Academics.csv");
    cout << "\nEnter the rollno. you want to Modify: ";
    cin >> rollnoo;
    while (file.peek() != EOF)
    {

        getline(file >> ws, fulname, ',');
        getline(file >> ws, rollno, ',');
        getline(file >> ws, prn, ',');
        getline(file >> ws, se, ',');
        getline(file >> ws, co, ',');
        getline(file >> ws, oop, ',');
        getline(file >> ws, at, ',');
        getline(file >> ws, os, ',');
        getline(file >> ws, cn, ',');
        getline(file >> ws, perc, '\n');
        i = i + 1;
        if (rollnoo.compare(rollno) == 0)
        {
            n = i;
            // file.close();

            state = 2;
        }
    }

    file.close();
    deleteline1("Academics.csv", n);
    addrec();
}

void academicrec()
{
    string username;
    string adminpass;
    int res;
    cout << "\t\t\t\t*************************************\n";
    cout << "\t\t\t\t*************ACADEMICS**************\n";
    cout << "\t\t\t\t*************************************\n";
    cout << "\t\t\t1]Add academic record\n\t\t\t2]View Record\n\t\t\t3]Modify record\n";
    cout << "Enter your choice: ";
    cin >> res;
    switch (res)
    {
    case 1:
        addrec();

        break;

    case 2:
        viewrec();
        break;

    case 3:
        // cout << "Admin access only!!";
        // char a;
        // a = _getch();
        // switch (a)
        // {
        // case 38:
        // admin:
        //     cout << "\n\t\t\t******ADMIN LOGIN********\n";
        //     cout << "Enter Username" << endl;
        //     getline(cin >> ws, username);
        //     cout << "Enter Password" << endl;
        //     getline(cin >> ws, adminpass);
        //     if (username == "admin" && adminpass == "admin")
        //     {
        //         cout << "Admin login successfull\n";
        //     }
        //     else
        //     {
        //         cout << endl
        //              << "Data not found!!!\n"
        //              << endl;
        //         cout << "1.try again 2.exit\n";
        //         char u3;
        //     tryagain1:
        //         u3 = _getch();
        //         switch (u3)
        //         {
        //         case 49:;
        //             goto admin;
        //             break;
        //         case 50:
        //             cout << "Thank you for comming \n";
        //             exit(0);
        //             break; //code exits.
        //         default:
        //             goto admin;
        //             break;
        //         }
        //     }
        modifyrec();

        break;

    default:
        academicrec();
        break;
    }

    // default:
    // academicrec();
    //     break;
}