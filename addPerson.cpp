#include "����.h"


//������ϵ�˺���
void addPerson(struct addressBook* abs) {
	//���ж�ͨѶ¼��û����1000��
	if (abs->p_Size == MAX) {
		cout << "ͨѶ¼������" << endl;
	}
	else {
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
	}
	abs->p_Size++;
	cout << "��ӳɹ���" << endl;
	system("pause");//�����������
	system("cls");//��������
}