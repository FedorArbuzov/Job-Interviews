#include <iostream>

using namespace std;

int main () {
	long long n, m;
	cin >> n >> m;	
	if (m * 3 >= n) {
		cout << 0;
		return 0;
	} 
	long long ans = (n - 3 * m);
	ans = (ans / 2) + (ans % 2 == 1);
	cout << ans;
}