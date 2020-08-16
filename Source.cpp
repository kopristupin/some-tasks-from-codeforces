#include <iostream>

using namespace std;

int main() {
	int c;
	cin >> c;
	while (c--) {
		int r, g, b, w;
		cin >> r >> g >> b >> w;
		bool flag = false;
		for(int i=0; i<2; i++){
			if (r == 0 && g == 0 && b == 0 && w == 0) {
				cout << "yes\n";
				flag = true;
				break;
			}
			
		
			if (r % 2 + g % 2 + b % 2 + w % 2 == 1 || r % 2 + g % 2 + b % 2 + w % 2 == 0) {
				cout << "yes\n";
				flag = true;
				break;
			}
			r--; g--; b--; w += 3;
				if (r < 0 || g < 0 || b < 0)
				break;
		}
		if (flag == false)
			cout << "no\n";


		}
}