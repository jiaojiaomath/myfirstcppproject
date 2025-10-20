//设计一个英雄的结构体，包括成员姓名，年龄，性别；创建结构体数组，数组中存放5名英雄，通过冒泡排序算法升序。
#include <iostream>
using namespace std;
#include <string>

struct Hero {
	string name;
	int age;
	string sex;
};

void bubbleSort(struct Hero heroarray[],int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (heroarray[j].age > heroarray[j + 1].age) {
				struct Hero temp = heroarray[j];
				heroarray[j]= heroarray[j + 1];
				heroarray[j + 1]= temp;
			}
		}
	}
}
void printHero(struct Hero heroarray[], int len) {
	for(int i = 0; i < len; i++) {
		cout << "xingming:  " << heroarray[i].name << "\tnianning:  " << heroarray[i].age
			<< "\txingbie:  " << heroarray[i].sex << endl;

	}
}

int main() {
	struct Hero heroarray[5] = {
		{"liubei",23,"man"},
		{"guanyu",22,"man"},
		{"zhangfei",21,"man"},
		{"zhaoyun",21,"man"},
		{"diaochan",19,"woman"},
	};

	int len = sizeof(heroarray) / sizeof(heroarray[0]);

	bubbleSort(heroarray, len);
	printHero(heroarray, len);


	return 0;
}
