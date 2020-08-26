#include "定义.h"


//查找联系人函数
void findPerson(addressBook* abs) {
	//先判断通讯录有没有人
	if (abs->p_Size == 0) {
		cout << "通讯录为空！" << endl;
	}
	else {
		cout << "请输入要查找的联系人姓名；" << endl;
		string name;
		cin >> name;
		int temp = isExist(abs,name);
		if (temp == -1) {
			cout << "查无此人！" << endl;
		}
		else {
			cout << "已找到 " << abs->personArray[temp].p_Name << " 的个人信息：" << endl;
			cout << "姓名：" << abs->personArray[temp].p_Name << "\t";
			cout << "性别：" << (abs->personArray[temp].p_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[temp].p_Age << "\t";
			cout << "电话：" << abs->personArray[temp].p_Phone << "\t";
			cout << "住址：" << abs->personArray[temp].p_Addr << "\t";
			cout << endl;
		}
	}

	system("pause");//按任意键继续
	system("cls");//清屏操作
}