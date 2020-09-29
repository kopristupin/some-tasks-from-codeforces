

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
        vector<long long>nums;
        while (n--) {
            long long num;
            cin >> num;
            nums.emplace_back(num);
            }
        int  half = t / 2;
        bool k=false;
        if (t % 2 == 0)
            k = true;
        int check = nums[0];
        bool flag = false;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != check) {
                flag = true;
                break;
            }
                
        }
        if (flag == false) {
      
            for (int i = 0; i <= nums.size()/2; i++) {
                nums[i] = 0;
            }
            for (int i = nums.size() / 2; i < nums.size(); i++) {
                nums[i] = 1;
            }

        }
        else {
            bool f = true;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < half)
                    nums[i] = 0;
                if(nums[i]>half)
                    nums[i] = 1;

                if(nums[i]==half) {
                    if (k) {
                        if (f)
                            nums[i] = 1;
                        else
                            nums[i] = 0;
                        f = !f;
                    }
                    else
                        nums[i] = 0;
                }

            }
        }
        for (auto it : nums)
            cout << it << " ";
        cout << "\n";

    }
}

