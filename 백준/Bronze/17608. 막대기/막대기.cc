#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int h;
	int data[100000];
	for (int i = 0;i < N;i++) {

		cin >> h;
		data[i] = h;
	}
	int count = 1;
	int max = data[N-1];
	for (int i = N - 2;i >=0;i--) {
		if (data[i] > max) {
			max = data[i];
			count++;

		}
	}
	cout << count;
}

