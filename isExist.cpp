#include "∂®“Â.h"

int isExist(struct addressBook* abs, string name)
{
	int temp = 0;
	for (int i = 0; i < abs->p_Size; i++)
	{
		if (abs->personArray[i].p_Name == name) {
			return i;
		}
		temp++;
	}
	if (temp == abs->p_Size) {
		return -1;
	}
}