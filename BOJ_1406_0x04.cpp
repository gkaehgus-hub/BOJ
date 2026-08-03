#include <iostream>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	list<char> l;
	for (auto c : s) l.push_back(c);
	auto cursor = l.end();

	int m;
	cin >> m;
	while (m--) {
		char order;
		cin >> order;
		if (order == 'L') {
			if (cursor != l.begin()) cursor--;
		}
		else if (order == 'D') {
			if (cursor != l.end()) cursor++;
		}
		else if (order == 'B') {
			if (cursor != l.begin()) {
				cursor--;
				cursor = l.erase(cursor);
			}
		}
		else {
			char add;
			cin >> add;
			l.insert(cursor, add);
		}
	}
	for (auto c : l) cout << c;
}