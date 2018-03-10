#include <iostream>
#include <string>
#include <fstream>
 
using namespace std;
static const string filename = "tabs.in";
ifstream file(filename);
string currentString;
int n, k;
 
int main () {
    getline(file, currentString);
    while (true) {
        getline(file, currentString, ' ');
        if(file.eof()) break;
        n = stoi(currentString);
        getline(file, currentString);
        k = stoi(currentString);
        if (n==1) cout << 0 << endl;
        else if ((k==1)||(k==n)) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}