#include<iostream>
#include<string>
using namespace std;
void push(int X);
void pop();
void size();
void empty();
void top();
int T = -1;
int stack[1000000];


void push(int X) {
	T++;
	stack[T] = X;

}
void pop() {
	if (T == -1) {
		cout << -1 << endl;
	}
	else
	{
		cout << stack[T] << endl;
		T--;
	}
}
void size() {
	cout << T+1<<endl;
}

void empty() {
	cout<<(T == -1 ? 1 : 0)<<endl;
}
void top() {
	cout << (T == -1 ? -1 : stack[T])<<endl;
}
int main() {
	int N;
	cin >> N;
	string a;
	string b;
	for (int i = 0;i < N;i++) {
		cin >> a;
		if (a == "push") {
			int X;
			cin >> X;
			push(X);


		}
		else if (a == "pop") {
			 pop();

		}
		else if (a == "size") {
			size();

		}

		else if (a == "empty") {
			 empty();

		}
		else if (a == "top") {
			 top();

		}






	} 
}