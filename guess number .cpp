#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    int val = 0;

    int guessCount = 0; // 1. ���������
    bool hasGuessedCorrectly = false;

    cout << "������Ϸ��ʼ���㹲�� 5 �λ��ᡣ" << endl;

    // 2. �޸�ѭ������
    while (guessCount < 5) {
        cout << "--- ������ĵ� " << guessCount + 1 << " �λ��� ---" << endl;
        cout << "��������µ�����: ";
        cin >> val;

        guessCount++; // 3. ÿ�β²�󣬼�������һ

        if (cin.fail()) {
            cout << "������Ч��������һ���������˷���һ�λ���Ŷ��" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue; // �������κ����жϣ�ֱ�ӽ�����һ��ѭ��
        }

        if (val > num) {
            cout << "�²����" << endl;
        }
        else if (val < num) {
            cout << "�²��С" << endl;
        }
        else {
            cout << "��ϲ�㣬�¶��ˣ�" << endl;
            hasGuessedCorrectly = true;
            break; // �¶��ˣ���ǰ���� while ѭ��
        }
    }

    if (!hasGuessedCorrectly) {
        cout << "��Ϸ������5�λ��������ꡣ" << endl;
        cout << "��ȷ�������ǣ�" << num << endl;
    }

    return 0;
}