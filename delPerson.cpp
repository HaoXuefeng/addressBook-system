#include "����.h"


//ɾ����ϵ�˺���
void delPerson(addressBook* abs)
{
	//���ж�ͨѶ¼��û����
	if (abs->p_Size == 0) {
		cout << "ͨѶ¼Ϊ�գ�" << endl;
	}
	else {
		cout << "������Ҫɾ������ϵ��������" << endl;
		string name;
		cin >> name;
		int temp = isExist(abs,name);		//��Ϊ�������Ĳ��� abs ������ǵ�ַ�����Բ��ü� & ȡַ������
		if (temp == -1) {
			cout << "���޴��ˣ�" << endl;
		}
		else {
			for (int i = temp; i < abs->p_Size; i++) {
				abs->personArray[i] = abs->personArray[i + 1];
			}
		}
	}
	system("pause");//�����������
	system("cls");//��������
}