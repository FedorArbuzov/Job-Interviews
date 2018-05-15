#include <iostream>
#include <string>

using namespace std;

int n, m;
int ans = 0;
bool b[15][15];

void f(int i, int j) {
	int l = i, v = j, r = j;
	while(v <= m && !b[l][v]) {
		b[l][v] = 1;
		v++; 
	}
	r = v - 1;
	bool t = 1;
	v = j;
		l++;
	while ((l <= n) && t) {
		
		while (v <= r && !b[l][v + 1]) {
			v++;			
		}
		if (v < r) {
			t = 0;
			break;
		}
		if (t) {
			for (int k = j; k <= r; k++)
				b[l][k] = 1;
		}
		v = j;
		l++;
	}				
}

int main () {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= m; j++) 
			cin >> b[i][j];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (!b[i][j]) {
				f(i, j);	
				ans++;
			}
		}
	}
	cout << ans;
	return 0;

}

/*
4 3	
0 0 0
0 0 0
0 1 1
0 1 1

4 3	
0 0 0
0 0 0
0 0 0
0 0 0

2 2
1 1
1 1

4 5
0 0 0 0 0
0 0 0 1 0
0 0 1 0 0
0 1 0 0 0 

*/