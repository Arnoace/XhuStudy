////��һ���������������п��ܴ��ڶ��ֵ��ͬ�Ľ�㣬���һ���㷨ɾ��L�����ֵ�Ľ��
//#include"LinkList.cpp"
//template<typename T>
//void DeleteMax(LinkList<T>& L,T &maxjt)
//{
//	LinkNode<T>* p = L.head->next;
//	T max = p->data;
//	while (p->next != NULL)         //�ҵ�max
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
//	//β�巨����������
//	cout << "β�巨����������" << endl;
//	LinkList<int>L;
//	L.CreateListR(a, n);
//	L.DispList();
//	DeleteMax(L, max);
//	cout << "ɾ�����ֵ" << max << "�󣬵�����" << endl;
//	L.DispList();
//	return 0;
//}
