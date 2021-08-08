#include<iostream>
using namespace std;

/*****************************************************************************************************************
                                        Color Codes
*****************************************************************************************************************/
 /*
    0 Black
    1 Blue
    2 Green
    3 Aqua
    4 Red
    5 Purple
    6 Yellow
    7 White
    8 Gray
    9 Light Blue
    A Light Green
    B Light Aqua
    C Light Red
    D Light Pruple
    E Light Yellow
    F Bright White
  */

int main(){
/*****************************************************************************************************************
                                        Single Borders Box
*****************************************************************************************************************/
cout << char(218);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(191) << endl;
cout << char(179) << "                     " << char(179) << endl;
cout << char(179) << "                     " << char(179) << endl;
cout << char(179) << "  Single Border Box  " << char(179) << endl;
cout << char(179) << "                     " << char(179) << endl;
cout << char(179) << "                     " << char(179) << endl;
cout << char(192);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(217) << endl;


/*****************************************************************************************************************
                                    Complex Single Borders Box
*****************************************************************************************************************/
cout << char(218);  for(int i=0; i<10; i++){cout << char(196);}  cout << char(194);  for(int i=0; i<10; i++){cout << char(196);}  cout << char(191) << endl;
cout << char(179) << "          " << char(179) << "          " << char(179) << endl;
cout << char(179) << "          " << char(179) << "          " << char(179) << endl;
cout << char(195);  for(int i=0; i<10; i++){cout << char(196);}  cout << char(197);  for(int i=0; i<10; i++){cout << char(196);}  cout << char(180) << endl;
cout << char(179) << "          " << char(179) << "          " << char(179) << endl;
cout << char(179) << "          " << char(179) << "          " << char(179) << endl;
cout << char(192);  for(int i=0; i<10; i++){cout << char(196);}  cout << char(193);  for(int i=0; i<10; i++){cout << char(196);}  cout << char(217) << endl;


/*****************************************************************************************************************
                                        Double Borders Square
*****************************************************************************************************************/
cout << char(201);      for(int i=0; i<21; i++){cout << char(205);}      cout << char(187) << endl;
cout << char(186) << "                     " << char(186) << endl;
cout << char(186) << "                     " << char(186) << endl;
cout << char(186) << "  Double Border Box  " << char(186) << endl;
cout << char(186) << "                     " << char(186) << endl;
cout << char(186) << "                     " << char(186) << endl;
cout << char(200);      for(int i=0; i<21; i++){cout << char(205);}      cout << char(188) << endl;


/*****************************************************************************************************************
                                    Complex Double Borders Box
*****************************************************************************************************************/
cout << char(201);  for(int i=0; i<10; i++){cout << char(205);}  cout << char(203);  for(int i=0; i<10; i++){cout << char(205);}  cout << char(187) << endl;
cout << char(186) << "          " << char(186) << "          " << char(186) << endl;
cout << char(186) << "          " << char(186) << "          " << char(186) << endl;
cout << char(204);  for(int i=0; i<10; i++){cout << char(205);}  cout << char(206);  for(int i=0; i<10; i++){cout << char(205);}  cout << char(185) << endl;
cout << char(186) << "          " << char(186) << "          " << char(186) << endl;
cout << char(186) << "          " << char(186) << "          " << char(186) << endl;
cout << char(200);  for(int i=0; i<10; i++){cout << char(205);}  cout << char(202);  for(int i=0; i<10; i++){cout << char(205);}  cout << char(188) << endl;


/*****************************************************************************************************************
                                    Mixed Borders Box
*****************************************************************************************************************/
cout << char(218);  for(int i=0; i<10; i++){cout << char(205);}  cout << char(194);  for(int i=0; i<10; i++){cout << char(205);}  cout << char(191) << endl;
cout << char(186) << "          " << char(186) << "          " << char(186) << endl;
cout << char(186) << "          " << char(186) << "          " << char(186) << endl;
cout << char(195);  for(int i=0; i<10; i++){cout << char(205);}  cout << char(197);  for(int i=0; i<10; i++){cout << char(205);}  cout << char(185) << endl;
cout << char(186) << "          " << char(186) << "          " << char(186) << endl;
cout << char(186) << "          " << char(186) << "          " << char(186) << endl;
cout << char(192);  for(int i=0; i<10; i++){cout << char(205);}  cout << char(193);  for(int i=0; i<10; i++){cout << char(205);}  cout << char(217) << endl;


return 0;
}