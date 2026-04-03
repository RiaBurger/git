#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt, int start) {

	if (cnt == M) {
		for (int i=0; i<M; i++) {
			cout << vec[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i=start; i<=N; i++) {
		vec.push_back(i);
		func(cnt+1, i+1);
		vec.pop_back();
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	if (!(cin >> N >> M)) return 0;
	func(0,1);

	return 0;
}
