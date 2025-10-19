
#include <iostream>

int main() {
    // 1. 声明并初始化一个 3行 x 4列 的二维数组
    int student_scores[3][4] = {
        {95, 88, 92, 78},
        {85, 91, 89, 94},
        {76, 82, 80, 88}
    };

    // 2. 使用嵌套循环遍历并打印整个二维数组
    std::cout << "所有学生的成绩表格：" << std::endl;

    // 外层循环，遍历“行”（代表每个学生）
    // i 是行索引
    for (int i = 0; i < 3; ++i) {
        std::cout << "学生 " << i + 1 << " 的成绩: ";

        // 内层循环，遍历“列”（代表该学生的每门科目）
        // j 是列索引
        for (int j = 0; j < 4; ++j) {
            // 使用 [i][j] 来访问每个元素
            std::cout << student_scores[i][j] << " ";
        }

        // 每打印完一个学生的成绩后换行
        std::cout << std::endl;
    }

    // 3. 访问并修改特定元素
    // 比如，我们要修改第2个学生(行索引1)的第3门课(列索引2)的成绩
    std::cout << "\n修改前，学生2的第3门课成绩是: " << student_scores[1][2] << std::endl;
    student_scores[1][2] = 95;
    std::cout << "修改后，学生2的第3门课成绩是: " << student_scores[1][2] << std::endl;

    return 0;
}