
#include "����.h"



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
		case 1:addPerson(&abs);//�����ϵ��
			break;
		case 2:showPerson(&abs);//��ʾ��ϵ��
			break;
		case 3:delPerson(&abs);//ɾ����ϵ��
			break;
		case 4:findPerson(&abs);//������ϵ��
			break;
		case 5:changePerson(&abs);//�޸���ϵ��
			break;
		case 6:clearPerson(&abs);//�����ϵ��
			break;
		case 0://�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;			//	����д������дһ��flag�жϣ��û�����0ѡ��ֱ�ӷ���0����ѭ������
			break;
		default:
			break;
		}
	}


	system("pause");
	return 0;
}