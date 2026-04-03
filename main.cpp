#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;
bool isused[10];

void func(int cnt) {

	if (cnt == M) {
		for (int i=0; i<M; i++) {
			cout << vec[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i=1; i<=N; i++) {
		if (!isused[i]) {
			isused[i] = true;
			vec.push_back(i);

			func(cnt+1);

			vec.pop_back();
			isused[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	if (!(cin >> N >> M)) return 0;
	func(0);

	return 0;
}
