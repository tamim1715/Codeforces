#include <bits/stdc++.h>

using namespace std;

const int M = 2e5 + 5;
int t, n, a[M];

int main () {
	cin >> t;
	while (t--) {
		cin >> n;
		set <pair <int, pair <int, int> > > s;
		s.insert ({-n,{1, n}});
		for (int i = 1; i <= n; i++) {
			auto x = *s.begin();
			s.erase (s.begin());
			int b = -x.first, l = x.second.first, r = x.second.second;
			int mid = (l+r)/2;
			if ((r-l+1) % 2 == 0) mid = (l+r-1)/2;
			a[mid] = i;
			s.insert({-(mid-l),{l, mid-1}});
			s.insert({mid-r,{mid+1, r}});
		}
		for (int i = 1; i <= n; i++) cout << a[i] << " ";
		puts("");
	}
}
