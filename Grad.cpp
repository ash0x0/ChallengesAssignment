#include <bits/stdc++.h>
using namespace std ;

int main() {

    freopen("graduation.in" , "r" , stdin);
    int t, num;
    int x, y;
    int x1, y1;
    cin >> t;
    while(t--){
        x = 0; 
        y = 0;
        x1 = 0; 
        y1 = 0;
        num = 0;
        cin >> x >> y;
        while (true) {
            num ++;
            x1 += 6;
            if (x1 > x && y1 > y) break;
            else {
                y1 += 6;
                num++;
            }
            if (x1 > x && y1 > y) break;
        }
        cout << num << endl;
    }
    return 0;
}
