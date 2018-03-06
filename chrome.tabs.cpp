#include <iostream>
#include <string>
#include <fstream>
 
using namespace std;
static const string filename = "tabs.in";
ifstream file(filename);
string currentString;
 
int main () {
    int n, k;
    getline(file, currentString);
    while (true) {
        getline(file, currentString);
        if(file.eof()) break;
        n = stoi(currentString.substr(0, currentString.find(" ")));
        k = stoi(currentString.substr(currentString.find(" "), currentString.length() -1));
        if (n==1) cout << 0 << endl;
        else if ((k==1)||(k==n)) cout << 1 <, endl;
        else cout << 2 << endl;
    }
    return 0;
}
