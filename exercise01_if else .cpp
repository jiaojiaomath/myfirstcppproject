#include <iostream>

using namespace std;

int main() {
    while (true)
    {
        int score = 0;
        cout << "请输入考试分数（输入-1退出）：" << endl;
        cin >> score;

        if (score == -1) {
            cout << "感谢使用，程序即将退出。" << endl;
            break;
        }

        // --- 从这里开始是修改的部分 ---
        if (score > 600) {
            cout << "恭喜！你考上了一本大学！" << endl;
            if (score > 700) {
                cout << "考入清北！" << endl;
            }
            else if (score > 650) {
                cout << "考入川带" << endl;
            }
        }
        else if (score > 500) {
            cout << "不错！你考上了二本大学！" << endl;    
        }
        else if (score > 400) {
            cout << "还好！你考上了三本大学！" << endl;
        }
        else {
            if (cin.fail()) {
                cout << "无效的输入，请输入一个数字。" << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }
            else {
                cout << "很遗憾，你没考上大学。" << endl;
            }
        }
        // --- 修改部分结束 ---

        cout << "--------------------" << endl;
    }

    return 0;
}