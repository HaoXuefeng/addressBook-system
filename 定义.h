#include <iostream>
using namespace std;
#include <string>
#define MAX 1000


//定义联系人结构体
struct Person {
	string p_Name;
	int p_Sex;//1-男，2-女
	int p_Age;
	string p_Phone;//电话号码可能长度不等
	string p_Addr;
};
//定义通讯录结构体
struct addressBook {
	int p_Size;//通讯录人数
	struct Person personArray[MAX];		//注意要给联系人结构体起一个变量名！！！
};

void showMenu();
void addPerson(struct addressBook* abs);
void showPerson(struct addressBook* abs);
void delPerson(struct addressBook* abs);
void findPerson(struct addressBook* abs);
void changePerson(struct addressBook* abs);
void clearPerson(struct addressBook* abs);
int isExist(struct addressBook* abs, string name);