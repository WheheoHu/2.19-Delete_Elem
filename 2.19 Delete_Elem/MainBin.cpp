//2.19��֪���Ա��е�Ԫ����ֵ�����������У����Ե��������洢�ṹ��
//��дһ��Ч���㷨��ɾ����������ֵ����mink��С��maxk��Ԫ�أ������д���������Ԫ�أ���
//ͬʱ�ͷű�ɾ���ռ䣬����������㷨��ʱ�临�Ӷ�
//��ע�⣬mink��maxk�Ǹ����������α��������ǵ�ֵ���Ժͱ��е�Ԫ����ͬ��Ҳ���Բ�ͬ���� 

const int mink = 10;
const int maxk = 11;
const int SIZEOFLIST = 30;

#include <iostream>
#include "linearlinkedlist.h"

void Delete_elem(Linear_Linked_List<int> LLList,int location);

int main() {
	Linear_Linked_List<int> LLList(0);
	for (int i = 0; i <SIZEOFLIST-1 ; i++)
	{
		LLList.ListInsert(i + 2, i + 1);
	}
	
	Delete_elem(LLList,1);

	for (int i = 0; i < LLList.ListLength(); i++)
	{
		std::cout << LLList.GetElem(i + 1) << std::endl;
	}
	system("pause");
	return 0;
}


void Delete_elem(Linear_Linked_List<int> LLList,int location)
{
	if (LLList.GetElem(location) >= mink && LLList.GetElem(location) <= maxk)
	{
		location++;
		Delete_elem(LLList,location);
	}
	else
	{

		LLList.ListDelete(location);
		Delete_elem(LLList,location);
	
	}

}
