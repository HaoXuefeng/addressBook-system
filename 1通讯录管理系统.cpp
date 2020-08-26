
#include "定义.h"



int main() {
	addressBook abs;
	abs.p_Size = 0;
	int select = 0;
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select) 
		{
		case 1:addPerson(&abs);//添加联系人
			break;
		case 2:showPerson(&abs);//显示联系人
			break;
		case 3:delPerson(&abs);//删除联系人
			break;
		case 4:findPerson(&abs);//查找联系人
			break;
		case 5:changePerson(&abs);//修改联系人
			break;
		case 6:clearPerson(&abs);//清空联系人
			break;
		case 0://退出通讯录
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return 0;			//	这样写可以少写一个flag判断，用户输入0选项直接返回0，让循环结束
			break;
		default:
			break;
		}
	}


	system("pause");
	return 0;
}