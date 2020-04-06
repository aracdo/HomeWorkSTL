#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct man {
	float mark;
	std::string name;
	std::string name2;
};
bool cmp(man a, man b) {
	return a.mark > b.mark;
}

int main()
{
	int n, m1, m2, m3;
	cin >> n;
	vector <man> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].name2 >> a[i].name >> m1 >> m2 >> m3;
		a[i].mark = (m1 + m2 + m3) / 3;
	}
	sort(a.begin(), a.end(), cmp);
	for (auto now : a) cout << now.name2 << now.name << endl;
	return 0;
}
