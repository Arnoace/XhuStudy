////有一个整数单链表，其中可能存在多个值相同的结点，设计一个算法删除L中最大值的结点
//#include"LinkList.cpp"
//template<typename T>
//void DeleteMax(LinkList<T>& L,T &maxjt)
//{
//	LinkNode<T>* p = L.head->next;
//	T max = p->data;
//	while (p->next != NULL)         //找到max
//	{
//		if (p->next->data > max)
//			max = p->next->data;
//		p = p->next;
//	}
//	LinkNode<T>* pre = L.head;
//	p = pre->next;
//	while (p!=NULL)
//	{
//		if (p->data == max)
//		{
//			pre->next = p->next;
//			delete p;
//			p = pre->next;
//		}
//		else
//		{
//			pre = pre->next;
//			p = pre->next;
//		}
//	}
//	maxjt = max;
//}
//int main()
//{
//	int a[] = { 1,2,3,4,3,6,5,6,6,2,3,4,6,7,8,9,6 };
//	int n = sizeof(a) / sizeof(a[0]);
//	int max;
//	//尾插法创建单链表
//	cout << "尾插法创建单链表：" << endl;
//	LinkList<int>L;
//	L.CreateListR(a, n);
//	L.DispList();
//	DeleteMax(L, max);
//	cout << "删除最大值" << max << "后，单链表：" << endl;
//	L.DispList();
//	return 0;
//}
