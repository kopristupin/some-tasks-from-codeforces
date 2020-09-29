#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    int u;
    cin >> u;
    while (u--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << "0\n";
            continue;
        }
        int best = 1000000000;
       double i = 1;
        while (i <= ceil(sqrt(n))) {       
                int ans =i + ceil(n / i)-2;
                if (ans < best) {
                     best = ans;
            }
               
            i++;
            }
        cout<< best << "\n";
    }
}