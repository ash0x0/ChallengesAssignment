#include <iostream>
#include <string>
#include <fstream>
 
using namespace std;
static const string filename = "self.in";
ifstream file(filename);
string currentString;
int currentNumber;
int numberLength;
int digitCount;
int i, j;    
bool self = true;
int selfDescribing = {1210,2020,21200,3211000,42101000,521001000,6210001000};
 
int main () {
    // get the test case number and disregard it
    getline(cin, currentString);
    if (cin.eof()) break;
    int *foo = std::find(std::begin(selfDescribing), std::end(selfDescribing), atoi(currentString.c_str()));
    // When the element is not found, std::find returns the end of the range
    if (foo != std::end(selfDescribing)) {
        cout << "not " << endl;
    } 
    cout << "self-describing" << endl;
    return 0;
}
 