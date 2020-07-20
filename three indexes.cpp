#define _CRT_SECURE_NO_WARNINGS
#include<vector>
#include<iostream>
#include<algorithm>
#include<iterator>
#include<stdio.h>

int main() {
	int count;
	std::cin >> count;


	for (int i2 = 0; i2 < count; i2++)
	{
		int localcount;
		std::cin >> localcount;
		int stv[1001];
		for (int c = 0; c < localcount; c++) {

			std::scanf("%d", &stv[c]);

		}

		bool flag = false;

		int i, j, k;
		i = 0;
		while (i < localcount - 2) {
			j = i + 1;
			while (j < localcount - 1) {
				if (stv[j] > stv[i]) {
					k = j + 1;
					while (k < localcount) {
						if (stv[k] < stv[j]) {
							std::cout << "YES \n";
							std::cout << i + 1 << " " << j + 1 << " " << k + 1 << "\n";
							flag = true;
							break;
						}
						k++;
					}
				}
				if (flag)
					break;
				j++;
			}
			if (flag)
				break;
			int n = 1;
			while (stv[i] < stv[i + n]) {
				n++;
				if (n + i == localcount)
					break;
			}
			i += n;
		}
		if (flag == false)
			std::cout << "NO \n";
	}

}