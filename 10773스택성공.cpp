//#include <iostream>
//using namespace std;
//
//int top = 0;
//int idx;
//int arr[100001];
//
//void push(int e) {
//	arr[top] = e;
//	top++;
//}
//
//void pop() {
//	arr[top] = 0;
//	top--;
//  //arr[top] = 0;
//}
//
//int main() {
//	int a;
//	int N;
//	int add = 0;
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//
//
//		cin >> a;
//		if (a == 0) {
//			pop();
//		}
//		else {
//			push(a);
//		}
//	}
//	
//	for (int k = 0; k < top; k++) {
//		add = arr[k] + add;
//	}
//		cout << add;
//
//	return 0;
//}