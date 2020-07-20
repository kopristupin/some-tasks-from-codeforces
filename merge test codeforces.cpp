
#include <iostream>
#include<vector>
#include<algorithm>

int main()
{
    int c, n;
    std::cin >> c;
    for (int i = 0; i < c; i++) {
        std::cin >> n;
        std::vector<int> elements;
        for (int v = 0; v < 2 * n ; v++) {
            int y;
            std::cin >> y;
            elements.emplace_back(y);
        }
        std::vector<int> alreadyExists;
        std::vector<int>::iterator it = elements.begin();

        

        for (int h = 0; h < elements.size(); h++)
        {
       
            if (std::find(alreadyExists.begin(), alreadyExists.end(), *it) ==alreadyExists.end()) {
                alreadyExists.emplace_back(*it);
                std::cout << *it << " ";
            }
            it++;
        }

        std::cout << "\n";
    }
}
