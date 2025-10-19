#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    int val = 0;

    int guessCount = 0; // 1. 定义计数器
    bool hasGuessedCorrectly = false;

    cout << "猜数游戏开始！你共有 5 次机会。" << endl;

    // 2. 修改循环条件
    while (guessCount < 5) {
        cout << "--- 这是你的第 " << guessCount + 1 << " 次机会 ---" << endl;
        cout << "请输入你猜的数字: ";
        cin >> val;

        guessCount++; // 3. 每次猜测后，计数器加一

        if (cin.fail()) {
            cout << "输入无效，请输入一个整数！浪费了一次机会哦。" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue; // 跳过本次后续判断，直接进入下一次循环
        }

        if (val > num) {
            cout << "猜测过大" << endl;
        }
        else if (val < num) {
            cout << "猜测过小" << endl;
        }
        else {
            cout << "恭喜你，猜对了！" << endl;
            hasGuessedCorrectly = true;
            break; // 猜对了，提前跳出 while 循环
        }
    }

    if (!hasGuessedCorrectly) {
        cout << "游戏结束，5次机会已用完。" << endl;
        cout << "正确的数字是：" << num << endl;
    }

    return 0;
}