
using namespace std;
// Delete n-th line from given file
void deleteline(const char *file_name, int n)
{
    // open file in read mode or in mode
    ifstream is(file_name);

    // open file in write mode or out mode
    ofstream ofs;
    ofs.open("temp.txt", ofstream::out);

    // loop getting single characters
    char c;
    int line_no =1;
    while (is.get(c))
    {
        // if a newline character
        if (c == '\n')
        line_no++;

        // file content not to be deleted
        if (line_no != n)
            ofs << c;
    }

    // closing output file
    ofs.close();

    // closing input file
    is.close();

    // remove the original file
    remove(file_name);

    // rename the file
    rename("temp.txt", file_name);
}
int jj=1;
int j;
// Driver code
void passres()
{
string input;

ifstream fin;
string s1,s2;
int i=0;
int n;
string password;
string name;
string neww;
string key;
string freset;
cout<<"Welcome to password reset\n";
cout<<"Enter Username :";
getline(cin>>ws,input);
transform(input.begin(), input.end(), input.begin(), ::tolower); //converting into lowercase
cout<<"Enter New Password :";
getline(cin>>ws,neww);
cout<<"Enter Pass reset key :";
getline(cin>>ws,key);
transform(uname.begin(), uname.end(), uname.begin(), ::tolower); //converting into lowercase
fin.open("pass.txt");
while(fin.peek()!=EOF){
getline(fin,name,',');
getline(fin,password,',');
getline(fin,freset,'\n');
i=i+1;
if(name.compare(input)==0){n=i;
s1=name;
s2=password;}
if(key.compare(freset)==0){jj=00;}
}
fin.close();

if(jj==00){
    
        cout<<"\tPassword reset succesfull\n";
        deleteline("pass.txt", n);
     ofstream fout;
    fout.open("pass.txt",ios::app);
    fout<<s1<<","<<neww<<","<<key<<"\n";
    fout.close();}
    if(j==1){
        cout<<"Wrong passkey\nunable to reset\n";
        system("CLS");
    }

}
