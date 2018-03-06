#include <iostream>
#include <string>
#include <fstream>

using namespace std;
static const string filename = "isco.in";
ifstream file(filename);
string currentString;

int main () {
    int  x,y,z,p;
    getline(file, currentString);
    while (true) {
        getline(file, currentString);
        std::istringstream iss(text);
        std::vector<std::string> results((std::istream_iterator<WordDelimitedBy<' '>>(iss)), std::istream_iterator<WordDelimitedBy<' '>>());
        cout << results << endl;
        // n = stoi(currentString.substr(0, currentString.find(" ")));
        // k = stoi(currentString.substr(currentString.find(" "), currentString.length() -1));
        // for (char c : currentString) {
        //     if (c == " ") {
                
        //     }
        // }
        // x=atoi(currentString.c_str());
        // getline(file, currentString, ' ');
        // y=atoi(currentString.c_str());
        // getline(file, currentString, ' ');
        // p=atoi(currentString.c_str());
        // getline(file, currentString);
        // z=atoi(currentString.c_str());
        // cout<<((x*y)-z)*p<<endl;
        // if(cin.eof()) break;
    }
    return 0;
}