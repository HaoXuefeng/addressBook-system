#include "����.h"


//��ʾ��ϵ�˺���
void showPerson(addressBook* abs) {
	//���ж�ͨѶ¼����û����ϵ��
	if (abs->p_Size == 0) {
		cout << "ͨѶ¼Ϊ�գ�" << endl;
	}
	else {
		for (int i = 0; i < abs->p_Size; i++) {
			cout << "��ϵ�� " << i + 1 << " ����Ϣ���£�" << endl;
			cout << "������" << abs->personArray[i].p_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].p_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].p_Age << " ";
			cout << "�绰��" << abs->personArray[i].p_Phone << " ";
			cout << "סַ��" << abs->personArray[i].p_Addr << " ";
			cout << endl;
		}
	}
	system("pause");//�����������
	system("cls");//��������
}

//�����ϵ���Ƿ���ڣ�Ѱ����ϵ��λ��
int isExist(addressBook* abs) {
	string name;
	cout << "��������ϵ��������" << " ";
	cin >> name;
	for (int i = 0; i < abs->p_Size; i++) {
		if (abs->personArray[i].p_Name == name) {
			return i;
		}
	}
	return -1;
}