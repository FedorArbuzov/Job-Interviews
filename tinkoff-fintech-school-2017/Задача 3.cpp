#include <iostream>
#include <string>

using namespace std;

int main () {
	long long n, k, p = 1;
	cin >> n >> k;
	if (k > n) {
		cout << 0;
		return 0;
	}
	for (long long i = 0; i < k; i++) {
		p *= (n - i) * (n - i);
	}
	for (long long i = k; i >= 1; i--)
		p /= i;
	cout << p;
	return 0;
}