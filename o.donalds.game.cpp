#include <iostream>
#include <string>
#include <fstream>
 
using namespace std;
static const string filename = "donald.in";
ifstream file(filename);
string firstString, secondString;
string a, b, c, d;
unsigned short int aCost, bCost, cCost, dCost, total = 0;
 
int main () {
    ios_base::sync_with_stdio(false);
    getline(file, firstString);
    while (true) {
        getline(file, a, ' ');
        getline(file, b, ' ');
        getline(file, c, ' ');
        getline(file, d);
        getline(file, firstString);
        getline(file, secondString);
        aCost = stoi(a);
        bCost = stoi(b);
        cCost = stoi(c);
        dCost = stoi(d);
        for (i = 0; i < firstString.length(); i++) {
            a = firstString[i];
            b = secondString[i];
            if (a.islower() && b.islower()) total += aCost;
            else if (a.isupper() && b.isupper()) total += bCost;
            else if (toupper(a) == b) total += cCost;
            else if (tolower(a) == b) total += dCost;
            else if (a.isupper() && b.islower()) {
                if ()
            }
            if (a.islower() && b.islower()) total += aCost;
            if (!a.islower() && !b.islower()) total += aCost;
            if (a.islower() && !b.islower()) total += aCost;
        }
        cout << a + b + c + d << endl;
        if(file.eof()) break;
    }
    return 0;
}