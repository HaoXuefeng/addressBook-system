#include "����.h"


//������ϵ�˺���
void findPerson(addressBook* abs) {
	//���ж�ͨѶ¼��û����
	if (abs->p_Size == 0) {
		cout << "ͨѶ¼Ϊ�գ�" << endl;
	}
	else {
		cout << "������Ҫ���ҵ���ϵ��������" << endl;
		string name;
		cin >> name;
		int temp = isExist(abs,name);
		if (temp == -1) {
			cout << "���޴��ˣ�" << endl;
		}
		else {
			cout << "���ҵ� " << abs->personArray[temp].p_Name << " �ĸ�����Ϣ��" << endl;
			cout << "������" << abs->personArray[temp].p_Name << "\t";
			cout << "�Ա�" << (abs->personArray[temp].p_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[temp].p_Age << "\t";
			cout << "�绰��" << abs->personArray[temp].p_Phone << "\t";
			cout << "סַ��" << abs->personArray[temp].p_Addr << "\t";
			cout << endl;
		}
	}

	system("pause");//�����������
	system("cls");//��������
}