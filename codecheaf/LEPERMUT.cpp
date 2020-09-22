#include<iostream>
#include<vector>

using namespace std;

int inversion(vector<int> arr) {
	int count = 0;
	for (int i = 0; i < arr.size(); i++) {
		for (int j = i + 1; j < arr.size(); j++) {
			if (arr[i] > arr[j]) count += 1;
		}
	}
	return count;
}
int helper1(vector<int> arr) {
	int count = 0;
	for (int i = 0; i < arr.size() - 1; i++) {
		if (arr[i] > arr[i + 1]) count += 1;
	}
	return count;
}
int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin>>arr[i];	
		}
		if (helper1(arr) == inversion(arr)) cout << "YES" << endl;
		else  cout << "NO" << endl;
		
	}
}