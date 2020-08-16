

#include <iostream>
#include<string>
#include<map>


using namespace std;
int main()
{
	int c;
	cin >> c;
	while (c--) {
		int n; 
		cin >> n;
		string s;
		cin >> s;
			
		long long int ans = 0, sum = 0;
			map<int, int> sums;
			sums[0]++;
			for (int l = 0; l < n; l++) {
				sum += s[l] - '0';
				ans += sums[sum];
				sums[sum]++;
			}
			
			cout  << ans << "\n";

	}
}
