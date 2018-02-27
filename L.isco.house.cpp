#include <iostream>
#include <string>
#include <fstream>
 #include <cstring>
using namespace std;
static const string filename = "self.in";
ifstream file(filename);
string currentString;

int main () {
     int  x,y,z,p;
    
    // get the test case number and disregard it
    getline(cin, currentString);
    while (true) {
    getline(cin, currentString, ' ');
    x=atoi(currentString.c_str());
    getline(cin, currentString, ' ');
    y=atoi(currentString.c_str());
    getline(cin, currentString, ' ');
    p=atoi(currentString.c_str());
    getline(cin, currentString);
    z=atoi(currentString.c_str());
        
    cout<<((x*y)-z)*p<<endl;
if(cin.eof()) break;
    	
    }
    
    return 0;}
    
 
