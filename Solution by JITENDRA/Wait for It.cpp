#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int t;
	cin >> t;
	while(t-- > 0) {
		long long int a , b , c , d;
		cin >> a >> b >> c >> d;
		cout << min(a , b) + min({b - min(a , b) , c , d}) << '\n';
	}
}