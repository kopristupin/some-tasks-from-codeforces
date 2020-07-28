#include <iostream>
#include<vector>
#include<set>
#include<tuple>

std::set<std::tuple<int, int, bool>> visited;

bool checkNextStep(int d[101], int p, int t, int l, std::vector<int> m, int n, int k, bool down) {
 //   std::cout << p << " " << m[t % (2 * k)] << "\n";
    if (d[p] + m[t % (2 * k)] > l)
        return false;

    if (p == n) {
        std::cout << "yes \n";
        return true;
    }

    if (visited.find({ p, m[t % (2 * k)], down }) != visited.end())
        return false;

        visited.insert({ p, m[t % (2 * k)], down });
        int cor = d[p] + m[t % (2 * k)];


        if (m[t % (2 * k)] == k)
            down = true;
        if (m[t % (2 * k)] == 0)
            down = false;

        if (checkNextStep(d, p, t + 1, l, m, n, k, down))
            return true;     

         if (checkNextStep(d, p + 1, t + 1, l, m, n, k, down))
            return true;
    
          return false;   
  
}

int main()
{
    int w;
    std::cin >> w;
    for (int i = 0; i < w; i++) {
        int n, k, l;
        std::cin >> n >> k >> l;
        int d[101]{ 101,0 };
        bool br = false;
        d[0] = -k;
        for (int g = 1; g <= n; g++) {
            int y;
            std::cin >> y;
            d[g] = y;
            if (d[g] > l)
                br = true;
        }
        if (br == true) {
            std::cout << " no \n";
            continue;
        }

        std::vector<int>m2;
        for (int i = 0; i <= k; i++)
            m2.emplace_back(i);
        for (int i = 1; i < k; i++)
            m2.emplace_back(k - i);

        if (checkNextStep(d, 0, 0, l, m2, n, k, false) == false)
            std::cout << "no \n";

        visited.clear();
    }

}

