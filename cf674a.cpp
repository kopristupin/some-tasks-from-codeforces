#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

    int u;
    cin >> u;


    while (u--) {  
        int n, m;
        cin >> n >> m;
   
        vector<vector<int>>v;
        for (int q = 0; q < n; q++) {
            vector<int>v2;
            v.push_back(v2);
            for (int i = 0; i < 4; i++) {
                int num;
                cin >> num;
            
                v[q].emplace_back(num);
            }
            
        }
       
        if (m % 2 != 0) {
            cout << "NO\n";
            continue;
        }
        bool f = false;
    for (auto it : v) {
        
      
        if (it[1] == it[2])
        {
            cout << "YES\n";
            f = true;
            break;
        }
      
    }
   if(f==false)
        cout << "NO\n";
    }
    


}