#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printVector(vector <int> a) {
	for (auto now : a) cout << now << " ";
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	printVector(a);
	return 0;
}
