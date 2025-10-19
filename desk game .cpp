//从1开始数到数字100，如果数字个位含有7，或者十位含有7，或者该数字是7的倍数，我们打印：敲桌子，其余数字直接打印输出。
#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 100; i++) {
		if (i%7==0||i%10==7||i/10==7) {
			cout<<i <<" " << "敲桌子" << endl;
		}
		else {
			cout << i << endl;
		}
	}		
	return 0;
}