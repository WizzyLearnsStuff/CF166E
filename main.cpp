#include<iostream>

using namespace std;

#define M 1000000007
#define lli unsigned int

int main() {
	int n;
	cin >> n;

	lli f = 1;
	lli t = 0;
	for (int i = 0; i < n; i++) {
		int tmp = (3 * t) % M;
		t = (((2 * t) % M) + f) % M;
		f = tmp;
		// cerr << f << ' ' << t << '\n';
	}
	cout << f;
}
