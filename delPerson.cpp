#include "定义.h"


//删除联系人函数
void delPerson(addressBook* abs)
{
	//先判断通讯录有没有人
	if (abs->p_Size == 0) {
		cout << "通讯录为空！" << endl;
	}
	else {
		cout << "请输入要删除的联系人姓名；" << endl;
		string name;
		cin >> name;
		int temp = isExist(abs,name);		//因为传进来的参数 abs 本身就是地址，所以不用加 & 取址操作符
		if (temp == -1) {
			cout << "查无此人！" << endl;
		}
		else {
			for (int i = temp; i < abs->p_Size; i++) {
				abs->personArray[i] = abs->personArray[i + 1];
			}
		}
	}
	system("pause");//按任意键继续
	system("cls");//清屏操作
}