#include "定义.h"


//修改联系人函数
void changePerson(addressBook* abs) {
	//先判断通讯录有没有人
	if (abs->p_Size == 0) {
		cout << "通讯录为空！" << endl;
	}
	else {
		cout << "请输入您要修改的联系人名称：" << " ";
		string cName;
		cin >> cName;
		int temp = isExist(abs, cName);
		if (temp == -1) {
			cout << "查无此人！" << endl;
		}
		else {
			cout << "已找到，即将修改 " << abs->personArray[temp].p_Name << "的个人信息：" << endl;
			cout << "请输入联系人姓名：" << " ";
			string name;
			cin >> name;
			abs->personArray[abs->p_Size].p_Name = name;
			cout << "请输入联系人性别：" << endl;
			cout << "1--男，2--女：" << endl;
			int sex = 0;
			while (true) {
				cin >> sex;
				if (sex == 1 || sex == 2) {
					abs->personArray[abs->p_Size].p_Sex = sex;
					break;
				}
				else {
					cout << "输入有误，请重新输入！" << endl;
				}
			}
			cout << "请输入联系人年龄：" << " ";
			int age = 0;
			while (true) {
				cin >> age;
				if (age > 1 && age < 150) {
					abs->personArray[abs->p_Size].p_Age = age;
					break;
				}
				else {
					cout << "输入有误，请重新输入！" << endl;
				}
			}
			cout << "请输入联系人电话：" << " ";
			string phone;
			cin >> phone;
			abs->personArray[abs->p_Size].p_Phone = phone;
			cout << "请输入联系人住址：" << " ";
			string addr;
			cin >> addr;
			abs->personArray[abs->p_Size].p_Addr = addr;
			cout << "修改成功！" << endl;

		}
	}
	system("pause");//按任意键继续
	system("cls");//清屏操作
}