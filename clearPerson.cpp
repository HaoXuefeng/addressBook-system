#include "����.h"

//�����ϵ�˺���
void clearPerson(addressBook* abs) {
	cout << "�Ƿ�ȷ��Ҫ�����ϵ�ˣ�" << endl;
	cout << "1--ȷ�����" << endl;
	cout << "2--����" << endl;
	int temp;
	cin >> temp;
	if (temp == 1) {
		abs->p_Size = 0;
		cout << "ͨѶ¼����գ�" << endl;
	}
	system("pause");//�����������
	system("cls");//��������
}