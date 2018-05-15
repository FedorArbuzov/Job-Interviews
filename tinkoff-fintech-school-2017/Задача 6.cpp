#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main() {
	string s;
	cin >> s;
	long long ans = 0;
	for (int i = 0; i < s.size(); i++) {
		ans++;
		for (int j = 1; (i - j >= 0) && (i + j < s.size()); j++) {
			if (s[i - j] == s[i + j]) ans++;
			else break;
		}
	}
	for (double i = 0.5; i < s.size(); i += 1.0) {
		for (double j = 0.5; ((int)(i - j) >= 0) && ((int)(i + j) < s.size()); j+=1.0) {
			if (s[(int)(i - j)] == s[(int)(i + j)]) ans++;
			else break;
		}
	}
	cout << ans;
}

