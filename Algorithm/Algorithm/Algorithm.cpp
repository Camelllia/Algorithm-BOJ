﻿#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int a;
		cin >> a;

		int ret = upper_bound(v.begin(), v.end(), a) - lower_bound(v.begin(), v.end(), a);

		cout << ret << "\n";
	}
}