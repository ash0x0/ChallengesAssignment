#include <iostream>
#include <string>
#include <fstream>
 
using namespace std;
static const string filename = "tabs.in";
ifstream file(filename);
string currentLine;
 
int main () {
    getline(file, currentLine);
    while (true) {
        getline(file, currentLine, '\s');
        if(file.eof()) break;
        if (atoi(currentLine) == 0) {
            
        }
        for (int i = 0; i < currentString.length(); i++) {
            if (currentString == '\s') continue;
            else if (currentString)
        }
        if (good) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
     