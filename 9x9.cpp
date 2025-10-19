//#include <iostream>
//using namespace std;
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <=i; j++) {
//			cout << j << "*" << i << "=" << j * i << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}
#include <iostream>
#include <iomanip> // 引入 iomanip 以便使用 setw 和制表符

using namespace std;

int main() {
    // 外层循环控制行 i, 从 1 到 9
    for (int i = 1; i <= 9; i++) {
        // 内层循环控制列 j, 每次都完整地从 1 到 9
        for (int j = 1; j <= 9; j++) {

            // --- 核心判断逻辑 ---
            if (j <= i) {
                // 如果是下三角或对角线, 使用 "列*行" (j*i) 格式
                cout << j << "*" << i << "=" << setw(2) << j * i << "\t";
            }
            else { // j > i
                // 如果是上三角, 使用 "行*列" (i*j) 格式
                cout << i << "*" << j << "=" << setw(2) << i * j << "\t";
            }
        }
        // 每打印完一整行后，换行
        cout << endl;
    }
    return 0;
}