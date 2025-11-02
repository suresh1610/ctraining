#include <iostream>
#include <vector>

using namespace std;


int main() {
	vector<int> arr = {1, 2, 3, 4, 5};

	arr.push_back(6);
	arr.push_back(10);

	arr.insert(arr.begin() + 1, 20);

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}
