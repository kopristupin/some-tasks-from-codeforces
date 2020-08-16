

#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int c;
    cin >> c;
    while (c--) {
        string s;
        cin >> s;
        int a=0;
       for(int y=1;;y++) {
            int max=0;
            int  pos;
            int t = 0;
            for (int i = 0; i < s.size(); i++) {
   
                if (s[i] == '1') {
                    t++;  if (t >= max) { max = t; pos = i+1; }
                }
                    else
                    t = 0;
            }

            if (s.find('1') == s.size())
                break;


            if (max == 0)
                break;
            if (max == 1)
                s.erase(s.begin() + pos - 1);
            else
            s.erase(s.begin() + pos - max, s.begin() + pos);

            if (y % 2 == 1)
                a += max;



        }
       cout << a << "\n";
    }
}

