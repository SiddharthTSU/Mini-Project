#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
#include <string>
#include <istream>
using namespace std;

void login();
void registr();
void menu();
int main();

void login()
{

    string username;
    string password;
    string usr;
    string pwd;
    int state = 0;
    char choice;

    cout << "Enter your username\n";
    cin >> username;
    cout << "Enter your password\n";
    cin >> password;

    ifstream input("data.txt", ios::app);
    while (input.peek() != EOF)
    {

        getline(input >> ws, usr, ',');
        getline(input >> ws, pwd, '\n');

        if (username.compare(usr) == 0)
        {
            if (password.compare(pwd) == 0)
            {
                state = 1;
                cout << "login successfull!! \n"
                     << "welcome back " << username;
            }
        }
    }
    if (state == 0)

    {
        cout << "Invalid Credentials" << endl;
    }
    cout << "press any key to retry or esc to exit" << endl;
    char inp;
    inp = _getch();
    switch (inp)
    {
    case 27:
        exit(0);

        break;

    default:

        login();
        break;
    }

    // if(choice== 1){
    //     login();

    // }
    // else{
    //     main();
    // }

    input.close();
}

void registr()
{

    string user, pass;
    cout << "Enter username:";
    cin >> user;
    cout << "Enter Password";
    cin >> pass;

    ofstream regis("data.txt", ios::app);
    regis << user << "," << pass << "\n";

    cout << "Registration is successfull!" << endl;
}

void menu()
{
    cout << "\t\t\t*****LOGIN MENU*****" << endl;
    cout << "\t\t\t\t1. LOGIN \n\t\t\t\t2.REGISTER\n"
         << endl;
}

int main()
{

    int choice;
    menu();
    cin >> choice;

    switch (choice)
    {

    case 1:
    {
        login();
        break;
    }
    case 2:
    {
        registr();
        break;
    }
    default:
    {
        main();
        break;
    }
    }
}
