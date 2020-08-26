#include "定义.h"


//显示联系人函数
void showPerson(addressBook* abs) {
	//先判断通讯录里有没有联系人
	if (abs->p_Size == 0) {
		cout << "通讯录为空！" << endl;
	}
	else {
		for (int i = 0; i < abs->p_Size; i++) {
			cout << "联系人 " << i + 1 << " 的信息如下：" << endl;
			cout << "姓名：" << abs->personArray[i].p_Name << "\t";
			cout << "性别：" << (abs->personArray[i].p_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].p_Age << " ";
			cout << "电话：" << abs->personArray[i].p_Phone << " ";
			cout << "住址：" << abs->personArray[i].p_Addr << " ";
			cout << endl;
		}
	}
	system("pause");//按任意键继续
	system("cls");//清屏操作
}

//检查联系人是否存在，寻找联系人位置
int isExist(addressBook* abs) {
	string name;
	cout << "请输入联系人姓名：" << " ";
	cin >> name;
	for (int i = 0; i < abs->p_Size; i++) {
		if (abs->personArray[i].p_Name == name) {
			return i;
		}
	}
	return -1;
}