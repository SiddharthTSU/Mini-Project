/*#include<iostream>
#include<fstream>
#include <string>
#include<windows.h>*/
using namespace std;
string Nname, Nfather, Nlast, Nroll, Nprn, Nemail, Nareapin, Ndegree, Nbranch, Ncontact;
string mroll, mname, mprn, mfather, mlast;
//;
void delete_line(const char *file_name, int n)
{
    // open file in read mode or in mode
    ifstream is(file_name);

    // open file in write mode or out mode
    ofstream ofs;
    ofs.open("temp.txt", ofstream::out);

    // loop getting single characters
    char c;
    int line_no = 1;
    while (is.get(c))
    {
        // if a newline character
        if (c == '\n')
            line_no++;

        // file content not to be deleted
        if (line_no != n)
            ofs << c;
    }
    ofs << Nname << "," << Nfather << "," << Nlast << "," << Nroll << "," << Nprn << "," << Ndegree << "," << Nbranch << "," << Nemail << "," << Nareapin << "," << Ncontact << "\n";
    // closing output file
    ofs.close();

    // closing input file
    is.close();

    // remove the original file
    remove(file_name);

    // rename the file
    rename("temp.txt", file_name);
}

void replacecall()
{

    int n;
    int i = 0;
    string rollnoo;
    ifstream file("StudenData.csv");
    cout << "\nEnter the rollno. you want to Modify: ";
    cin >> rollnoo;
    while (file.peek() != EOF)
    {

        getline(file >> ws, mname, ',');
        getline(file >> ws, mfather, ',');
        getline(file >> ws, mlast, ',');
        getline(file >> ws, mroll, ',');
        getline(file >> ws, mprn, ',');
        getline(file >> ws, Ndegree, ',');
        getline(file >> ws, Nbranch, ',');
        getline(file >> ws, Nemail, ',');
        getline(file >> ws, Nareapin, ',');
        getline(file >> ws, Ncontact, '\n');
        i = i + 1;
        if (rollnoo.compare(mroll) == 0)
        {
            n = i;
            cout << "Enter Student Details:\n"
                 << endl;
            cout << "Enter first name: " << endl;
            cin >> Nname;
            cout << "Enter father's name: ";
            cin >> Nfather;
            cout << "Enter last Name: ";
            cin >> Nlast;
            cout << "Enter student Roll.no: ";
            cin >> Nroll;
            cout << "Enter Student PRN: ";
            cin >> Nprn;
            cout << "Enter Course Degree ";
            cin >> Ndegree;
            cout << "Enter Student Branch: ";
            cin >> Nbranch;
            cout << "Enter Student email:: ";
            cin >> Nemail;
            cout << "Enter Home pin code: ";
            cin >> Nareapin;
            cout << "Enter Contact Number:";
            cin >> Ncontact;
        }
    }
    file.close();
    delete_line("StudenData.csv", n);
}

//delete.......................................................

void delete_linee(const char *file_name, int n)
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
    cout << "Task Successfull!!\n";
}

void deletecall()
{

    int n;
    int i = 0;
    string rollnoo;
    ifstream file("StudenData.csv");
    cout << "\nEnter the rollno. you want to Delete: ";
    cin >> rollnoo;
    while (file.peek() != EOF)
    {

        getline(file >> ws, mname, ',');
        getline(file >> ws, mfather, ',');
        getline(file >> ws, mlast, ',');
        getline(file >> ws, mroll, ',');
        getline(file >> ws, mprn, ',');
        getline(file >> ws, Ndegree, ',');
        getline(file >> ws, Nbranch, ',');
        getline(file >> ws, Nemail, ',');
        getline(file >> ws, Nareapin, ',');
        getline(file >> ws, Ncontact, '\n');
        i = i + 1;
        if (rollnoo.compare(mroll) == 0)
        {
            n = i;
        }
    }
    file.close();
    delete_linee("StudenData.csv", n);
}
