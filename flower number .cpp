//一个三位数，每个数字的三次幂之和加起来等于他本身，称为水仙花数，用do while求所有水仙花数。
//#include <iostream>
//using namespace std;
//int main() {
//	int num = 100;
//	do {
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		a = num % 10;
//		b = num / 10 % 10;
//		c = num / 100;
//		if (a*a*a+b*b*b+c*c*c==num) {
//			cout << num << endl;
//		}
//		num++;
//	} while (num < 1000);
//	
//	return 0;
//}
#include <iostream>
#include <vector>   // 引入 vector
#include <cmath>    // 引入 cmath (如果用 pow)

// 我们把核心逻辑放到一个函数里，让 main 函数更整洁
void findNarcissisticNumbers_Loop() {
    // 1. 外层循环：检查所有三位数
    for (int num = 100; num < 1000; ++num) {

        // 2. 准备工作：为分解当前数字做准备
        std::vector<int> digits; // 创建一个空的“篮子”，用来存放剥下来的数字
        int temp_num = num;      // 创建一个 num 的“副本”，因为我们马上要“破坏”它

        // 3. 核心算法：while 循环，反复“剥洋葱”
        while (temp_num > 0) {
            // 3a. "剥下一层"：用 % 10 取得个位数
            int last_digit = temp_num % 10;
            // 3b. "放进篮子"：把这个数字存入 vector
            digits.push_back(last_digit);
            // 3c. "扔掉外层"：用 / 10 去掉个位数
            temp_num /= 10; // 这等价于 temp_num = temp_num / 10;
        }

        // 4. 计算和：遍历“篮子”里的所有数字
        int sum_of_cubes = 0;
        for (int digit : digits) { // 遍历 vector 中的每一个元素
            sum_of_cubes += digit * digit * digit;
        }

        // 5. 最终判断
        if (sum_of_cubes == num) {
            std::cout << num << " is a narcissistic number." << std::endl;
        }
    }
}

int main() {
    findNarcissisticNumbers_Loop();
    return 0;
}