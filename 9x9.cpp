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
#include <iomanip> // ���� iomanip �Ա�ʹ�� setw ���Ʊ��

using namespace std;

int main() {
    // ���ѭ�������� i, �� 1 �� 9
    for (int i = 1; i <= 9; i++) {
        // �ڲ�ѭ�������� j, ÿ�ζ������ش� 1 �� 9
        for (int j = 1; j <= 9; j++) {

            // --- �����ж��߼� ---
            if (j <= i) {
                // ����������ǻ�Խ���, ʹ�� "��*��" (j*i) ��ʽ
                cout << j << "*" << i << "=" << setw(2) << j * i << "\t";
            }
            else { // j > i
                // �����������, ʹ�� "��*��" (i*j) ��ʽ
                cout << i << "*" << j << "=" << setw(2) << i * j << "\t";
            }
        }
        // ÿ��ӡ��һ���к󣬻���
        cout << endl;
    }
    return 0;
}