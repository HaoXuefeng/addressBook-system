#include "定义.h"

//清空联系人函数
void clearPerson(addressBook* abs) {
	cout << "是否确定要清空联系人？" << endl;
	cout << "1--确认清空" << endl;
	cout << "2--返回" << endl;
	int temp;
	cin >> temp;
	if (temp == 1) {
		abs->p_Size = 0;
		cout << "通讯录已清空！" << endl;
	}
	system("pause");//按任意键继续
	system("cls");//清屏操作
}