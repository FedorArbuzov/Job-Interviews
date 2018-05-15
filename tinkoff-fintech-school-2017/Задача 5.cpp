#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int w[111], d[111];
vector <pair <int, int> > gr[111];

int main() {
	int n, m;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> w[i];
		d[i] = 111111111;
	}
	cin >> m;
	for (int i = 1; i<= m; i++) {
		int a, b;
		cin >> a >> b;
		gr[a].push_back(make_pair(b, w[a]));
		gr[b].push_back(make_pair(a, w[b]));
	}
	d[1] = 0;
	set <pair <int, int> > st;
	st.insert(make_pair(1, 0));
	int v, r;
	while (!st.empty()) {
		v = st.begin()->first;
		r = st.begin()->second;
		st.erase(st.begin());
		for (int i = 0; i < gr[v].size(); i++) {
			int to = gr[v][i].first, wt = gr[v][i].second;
			if (d[to] > d[v] + wt) {
				st.erase(make_pair(to, d[to]));
				d[to] = d[v] + wt;
				st.insert(make_pair(to, d[to]));
			}
		}
	}
	if (d[n] == 111111111)
		cout << -1;
	else
		cout << d[n];
	return 0;
}

