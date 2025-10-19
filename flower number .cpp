//һ����λ����ÿ�����ֵ�������֮�ͼ�����������������Ϊˮ�ɻ�������do while������ˮ�ɻ�����
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
#include <vector>   // ���� vector
#include <cmath>    // ���� cmath (����� pow)

// ���ǰѺ����߼��ŵ�һ��������� main ����������
void findNarcissisticNumbers_Loop() {
    // 1. ���ѭ�������������λ��
    for (int num = 100; num < 1000; ++num) {

        // 2. ׼��������Ϊ�ֽ⵱ǰ������׼��
        std::vector<int> digits; // ����һ���յġ����ӡ���������Ű�����������
        int temp_num = num;      // ����һ�� num �ġ�����������Ϊ��������Ҫ���ƻ�����

        // 3. �����㷨��while ѭ��������������С�
        while (temp_num > 0) {
            // 3a. "����һ��"���� % 10 ȡ�ø�λ��
            int last_digit = temp_num % 10;
            // 3b. "�Ž�����"����������ִ��� vector
            digits.push_back(last_digit);
            // 3c. "�ӵ����"���� / 10 ȥ����λ��
            temp_num /= 10; // ��ȼ��� temp_num = temp_num / 10;
        }

        // 4. ����ͣ����������ӡ������������
        int sum_of_cubes = 0;
        for (int digit : digits) { // ���� vector �е�ÿһ��Ԫ��
            sum_of_cubes += digit * digit * digit;
        }

        // 5. �����ж�
        if (sum_of_cubes == num) {
            std::cout << num << " is a narcissistic number." << std::endl;
        }
    }
}

int main() {
    findNarcissisticNumbers_Loop();
    return 0;
}