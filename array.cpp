//数组中找到最值
#include <iostream>
using namespace std;
int main() {
	int arr[] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "最值为" << max << endl;
	return 0;
}