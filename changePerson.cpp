#include "����.h"


//�޸���ϵ�˺���
void changePerson(addressBook* abs) {
	//���ж�ͨѶ¼��û����
	if (abs->p_Size == 0) {
		cout << "ͨѶ¼Ϊ�գ�" << endl;
	}
	else {
		cout << "��������Ҫ�޸ĵ���ϵ�����ƣ�" << " ";
		string cName;
		cin >> cName;
		int temp = isExist(abs, cName);
		if (temp == -1) {
			cout << "���޴��ˣ�" << endl;
		}
		else {
			cout << "���ҵ��������޸� " << abs->personArray[temp].p_Name << "�ĸ�����Ϣ��" << endl;
			cout << "��������ϵ��������" << " ";
			string name;
			cin >> name;
			abs->personArray[abs->p_Size].p_Name = name;
			cout << "��������ϵ���Ա�" << endl;
			cout << "1--�У�2--Ů��" << endl;
			int sex = 0;
			while (true) {
				cin >> sex;
				if (sex == 1 || sex == 2) {
					abs->personArray[abs->p_Size].p_Sex = sex;
					break;
				}
				else {
					cout << "�����������������룡" << endl;
				}
			}
			cout << "��������ϵ�����䣺" << " ";
			int age = 0;
			while (true) {
				cin >> age;
				if (age > 1 && age < 150) {
					abs->personArray[abs->p_Size].p_Age = age;
					break;
				}
				else {
					cout << "�����������������룡" << endl;
				}
			}
			cout << "��������ϵ�˵绰��" << " ";
			string phone;
			cin >> phone;
			abs->personArray[abs->p_Size].p_Phone = phone;
			cout << "��������ϵ��סַ��" << " ";
			string addr;
			cin >> addr;
			abs->personArray[abs->p_Size].p_Addr = addr;
			cout << "�޸ĳɹ���" << endl;

		}
	}
	system("pause");//�����������
	system("cls");//��������
}