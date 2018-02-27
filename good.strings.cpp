#include <iostream>
#include <string>
#include <fstream>
 
using namespace std;
static const string filename = "good.in";
ifstream file(filename);
string currentString;
 
int main () {
    // get the test case number and disregard it
    getline(file, currentString);
    bool good;
    while (true) {
        getline(file, currentString);
        if(file.eof())
            break;
        good = true;
        for (int i = 0; i < currentString.length(); i++) {
            for (int j = 0; j < i; j++) {
                if (currentString[i] == currentString[j]) {
                    good = false;
                    break;
                }
            }
        }
        if (good) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
 