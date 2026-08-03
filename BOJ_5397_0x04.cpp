#include <iostream>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string str;
		list<char> l;
		auto p = l.begin();
		cin >> str;
		
		for (auto c : str) {
			if (c == '-') {
				if (p != l.begin()) {
					p--;
					p = l.erase(p);
				}
			}
			else if (c == '<') {
				if (p != l.begin()) {
					p--;
				}
			}
			else if (c == '>') {
				if (p != l.end()) {
					p++;
				}
			}
			else {
				l.insert(p, c);
			}
		}
		for (auto c : l) cout << c;
		cout << '\n';
	}
}