#include <iostream>
#include <vector>
#include <algorithm>
#include<functional>

using namespace std;

void main() {	
	
		vector<int> v;
		int num;
		while (std::cin >> num) {
			v.push_back(num);
		}
		
		
		sort(v.begin(), v.end(), greater<int>());
		cout << " ordered array" << endl;

		for (auto i : v) {
			cout << i  <<" ";
		}
}