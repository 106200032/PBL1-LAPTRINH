#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap n:";
	cin >> n;
	float s = 0;
	for (float i = 2; i <=2*n; i++) {
		s = s + 1 / i;
	}
	cout << "Ket qua s =" << s << endl;
	return 0;
}
