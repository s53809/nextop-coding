#include <iostream>
#include <string>
#define N 16
using namespace std;

string num;
int sum;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cin >> num;

	for (int i = 0; i < num.size(); i++) {
		int item;
		if (num[i] >= 'A' && num[i] <= 'F') {
			item = num[i] - 'A' + 10;
		}
		else {
			item = num[i] - '0';
		}
		sum = sum * N + item;
	}

	cout << sum;
}