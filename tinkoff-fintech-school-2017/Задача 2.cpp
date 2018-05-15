#include <iostream>
#include <string>

using namespace std;

int main () {
	string s, f;
	getline(cin, s);
	int i = 0, l = -1, r = -1, dl = 0;
	while (i < s.size() && !((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))) 
		i++;
	if (i == s.size()) {
		cout << s;
		return 0;
	}
	l = i, r = i;
	for (; i < s.size(); i++) {
		if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))) {
			dl = max(dl, i - l + 1);
			l = i + 1;
			r = i;
		}
	}
	dl = max(dl, r - l + 1);
	for (i = 0; i < s.size(); i++) {
		if (((s[i] >= 'a' && s[i] <= 'z'))) {
			int x = s[i] - 'a';
			x += dl;
			x = ((x % 26) + 26) % 26;
			if (x == 0) x = 26;
			s[i] = 'a' + x - 1;
		}
		if (((s[i] >= 'A' && s[i] <= 'Z'))) {
			int x = s[i] - 'A';
			x += dl;
			x = ((x % 26) + 26) % 26;
			if (x == 0) x = 26;
			s[i] = 'A' + x - 1;
		}
	}
	cout << s;
	return 0;
}