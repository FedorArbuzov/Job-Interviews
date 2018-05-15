#include<iostream>
#include <math.h>

using namespace std;

struct point {
	double x, y;
	point () {
		x = 0.0;
		y = 0.0;
	}
	point (double a, double b) {
		x = a;
		y = b;
	}
	bool friend operator == (point a, point b) {
		return (a.x == b.x && a.y == b.y);
	}
};

int main() {
	double x, y;
	cin >> x >> y;
	point A, B = point(x, 0), C = point(x, y), D = point(0, y), a, b, c, d;
	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
	if (a == A) {
		cout << 0.000 << ' ' << 0.000;
		return 0;
	}

	double l = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
	double t = x / l;
	double xx = (t * a.x) / (t - 1.0), 
		yy = (t * a.y) / (t - 1.0);
	cout.setf(ios::fixed);
	cout.precision(3);
	cout << xx << ' ' << yy;
}

