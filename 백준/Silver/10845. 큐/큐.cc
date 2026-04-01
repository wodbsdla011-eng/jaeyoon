#include<iostream>
#include<string>
using namespace std;
void push(int X);
void pop();
void size();
void empty();
void front();
void back();
int T= -1;
int arr[10000];
int N;


void push(int X) {
	
	
	T++;
	arr[T] = X;


}




void pop() {
	if (T == -1) {
		cout << -1 << endl;

	}
	else {
		cout << arr[0] << endl;
		for (int i = 1;i <= T;i++) {
			arr[i-1] = arr[i];
		}
		T--;

	}
}






void size(){
	cout <<T + 1 << endl;



}

void empty() {
	if (T == -1) {
		cout << 1 << endl;

	}
	else
	{
		cout << 0 << endl;
	}

}
void front() {
	if (T == -1) {
		cout << -1 << endl;

	}
	else
	{
		cout << arr[0] << endl;
	}
}



void back() {
	if (T == -1) {
		cout << -1 << endl;

	}
	else
	{
		cout << arr[T] << endl;
	}


}
int main() {
	string a;
	cin >> N;
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
		else if (a == "front") {
			front();
		}
		else if 
			(a == "back") {
			back();
		}

	} 

}
