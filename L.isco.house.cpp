#include <iostream>
#include <string>
#include <fstream>

using namespace std;
static const string filename = "isco.in";
ifstream file(filename);
string currentString;

int main () {
    int  x,y,z,p;
    // get the test case number and disregard it
    getline(file, currentString);
    while (true) {
        getline(file, currentString, ' ');
        x=atoi(currentString.c_str());
        getline(file, currentString, ' ');
        y=atoi(currentString.c_str());
        getline(file, currentString, ' ');
        p=atoi(currentString.c_str());
        getline(file, currentString);
        z=atoi(currentString.c_str());
        cout<<((x*y)-z)*p<<endl;
        if(cin.eof()) break;
    }
    return 0;
}qqqqq
