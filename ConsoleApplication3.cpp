
#include <iostream>

#include<vector>
using namespace std;

int main()
{
    int c;
    cin >> c;
    while (c--) {
        int n;
        cin >> n;
        vector<int>arr;
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            arr.emplace_back(y);
        }
        int min, max, mid;
        min = arr[0];
        max = arr[n-1];
        bool flag = false;
       for(int u=1;u<=n-1; u++) {
           if (max >= arr[u] + min) {
               cout << "1 " << u+1 <<" "<< n << "\n";
               flag = true;
               break;
           }
        }
       if (flag == false)
           cout << "-1\n";
    }
}

