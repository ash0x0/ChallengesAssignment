#include <iostream>
#include <string>
#include <fstream>
 
using namespace std;
static const string filename = "self.in";
ifstream file(filename);
string currentString;
int currentNumber;
int numberLength;
int i, j;
 
int main () {
    // get the test case number and disregard it
    getline(file, currentString);
    while (true) {
        getline(file, currentString);
        if(file.eof()) break;
        numberLength = currentString.length();
        int digitCountArray[numberLength];
        currentNumber = atoi(currentString.c_str());
        for (i = 0; i < numberLength; i++) {
            digitCountArray[i] = 0;
            for (j = 0; j < numberLength; j++) {
                if (((int) currentString[j] - 48) == i) {
                    digitCountArray[i] += 1;
                }
            }
            if (((int) currentString[i] - 48) != digitCountArray[i]) {
                goto out;
            }
        }
        cout << "self-describing" << endl;
        continue;
        out:
        cout << "not self-describing" << endl;
    }
    return 0;
}
 