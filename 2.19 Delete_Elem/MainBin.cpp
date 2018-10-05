//2.19��֪���Ա��е�Ԫ����ֵ�����������У����Ե��������洢�ṹ��
//��дһ��Ч���㷨��ɾ����������ֵ����mink��С��maxk��Ԫ�أ������д���������Ԫ�أ���
//ͬʱ�ͷű�ɾ���ռ䣬����������㷨��ʱ�临�Ӷ�
//��ע�⣬mink��maxk�Ǹ����������α��������ǵ�ֵ���Ժͱ��е�Ԫ����ͬ��Ҳ���Բ�ͬ���� 

const int mink = 1;
const int maxk = 25;
const int SIZEOFLIST = 30;

#include <iostream>
#include "linearlinkedlist.h"

void Delete_elem(Linear_Linked_List<int> &LLList, int min, int max);

int main() {
	Linear_Linked_List<int> LLList(0);
	for (int i = 0; i < SIZEOFLIST; i++)
	{
		LLList.ListInsert(i + 2, i + 1);
	}
	//LLList.ListDelete(LLList.ListLength());
	Delete_elem(LLList, mink, maxk);

	for (int i = 0; i < LLList.ListLength(); i++)
	{
		std::cout << LLList.GetElem(i + 1) << std::endl;
	}
	system("pause");
	return 0;
}

void Delete_elem(Linear_Linked_List<int>& LLList, int min, int max)
{
	Node<int> *q = LLList.HeadPoint;
	Node<int> *temp = NULL;
	while (q!=NULL)
	{
		if (q->next!=NULL&&q->next->data>min&&q->next->data<max)
		{
			temp = q->next;
			q ->next= temp->next;
			delete temp;
		}
		else
		{
			q = q->next;
		}
	}
}
