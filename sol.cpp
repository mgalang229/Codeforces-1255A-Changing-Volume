#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		int x=abs(a-b);
		int ans=0;
		if(x>=5) {
			ans+=(x/5);
			x%=5;
		} 
		if(x>=2) {
			ans+=(x/2);
			x%=2;
		}
		if(x>=1) {
			ans+=x;
		}
		cout << ans << "\n";
	}
}
