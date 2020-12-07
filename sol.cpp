#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

void solve() {
	ll a, b;
	cin >> a >> b;
	ll evenA=a/2, evenB=b/2;
	ll oddA=(a%2==0?evenA:evenA+1);
	ll oddB=(b%2==0?evenB:evenB+1);
	cout << (evenA*evenB)+(oddA*oddB) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
