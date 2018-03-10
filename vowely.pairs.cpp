#include <iostream>
#include <string>
#include <fstream>
#include <vector>
 
using namespace std;
static const string filename = "vowely.in";
ifstream file(filename);
string currentString;
string n;
vector<string> words;
vector<unsigned short int> count;
unsigned short int nCount, i;

int main () {
    // get the test case number and disregard it
    getline(cin, currentString);
    while(true) {
        getline(n, currentString);
        nCount = stoi(n);
        if (cin.eof()) break;
        for (i = 0; i < nCount; i++) {
            getline(file, currentString);
            words.push_back(currentString);
        }
        
        for (i = 0; i < words.length(); i++) {
            currentString = words.at(i);
        }
    }
    return 0;
}
 