//2.19已知线性表中的元素以值递增有序排列，并以单链表作存储结构。
//试写一高效的算法，删除表中所有值大于mink且小于maxk的元素（若表中存在这样的元素），
//同时释放被删结点空间，并分析你的算法的时间复杂度
//（注意，mink和maxk是给定的两个参变量，它们的值可以和表中的元素相同，也可以不同）。 

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
