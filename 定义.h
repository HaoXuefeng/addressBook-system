#include <iostream>
using namespace std;
#include <string>
#define MAX 1000


//������ϵ�˽ṹ��
struct Person {
	string p_Name;
	int p_Sex;//1-�У�2-Ů
	int p_Age;
	string p_Phone;//�绰������ܳ��Ȳ���
	string p_Addr;
};
//����ͨѶ¼�ṹ��
struct addressBook {
	int p_Size;//ͨѶ¼����
	struct Person personArray[MAX];		//ע��Ҫ����ϵ�˽ṹ����һ��������������
};

void showMenu();
void addPerson(struct addressBook* abs);
void showPerson(struct addressBook* abs);
void delPerson(struct addressBook* abs);
void findPerson(struct addressBook* abs);
void changePerson(struct addressBook* abs);
void clearPerson(struct addressBook* abs);
int isExist(struct addressBook* abs, string name);