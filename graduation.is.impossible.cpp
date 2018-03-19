#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    freopen("graduation.in" , "r" , stdin);
    int t, num;
    int x, y;
    cin >> t;
    while(t--){
        x = 0; 
        y = 0;
        num = 0;
        cin >> x >> y;
        (y > x) ? num = ceil(y / 6.0) : num = ceil(x / 6.0);
        num *= 2;
        if (x > y || y < x) num--;
        // num = ceil(x/6.0) + ceil(y/6.0);
        // if (x / 6 > y) {
            
        // }
        // if (y / 6 > x) {
            
        // }
        // if (y > x) num += y / 6;
        // if (x > y) num += x / 6;
        
        
        cout << num << endl;
    }
    
    return 0;
}
