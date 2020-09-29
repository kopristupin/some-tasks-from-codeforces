

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

    int u;
    cin >> u;
    while (u--) {
        int n, t;
        cin >> n >> t;
        int half = t / 2;
        bool fl = false;
        if (t % 2 != 0)
            fl = true;
        vector<long long>nums;
        bool ch = true;
        while (n--) {
            long long num;
            cin >> num;
            if (num > half) 
                num = 1;              
            else if (num < half) 
                num = 0;
   
            else {
                if (fl == true)
                    num = 0;
                else 
                    num = ch; 
                
                ch = !ch;
            }
            nums.emplace_back(num);
        }
        for (auto it : nums)
            cout << it << " ";
        cout << "\n";

    }
}

