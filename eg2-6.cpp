////��һ�����ȴ���2������������L�����һ���㷨����L���м�λ�õ�Ԫ��
//#include"LinkList.cpp"
////����һ��������
//template<typename T>
//T GetMiddle1(LinkList<T> &L)
//{
//	int j = 1;
//	int n = L.Getlength();
//	LinkNode<T>* p = L.head->next;//pָ��ָ��ͷ�ڵ�
//	while (j <= (n - 1) / 2)
//	{
//		j++;
//		p = p->next;
//	}
//	return p->data;
//}
//
////������������ָ�뷨
//template<typename T>
//T GetMiddle2(LinkList<T> &L)
//{
//	LinkNode<T>* slow = L.head->next;
//	LinkNode<T>* fast = L.head->next;
//	while (fast != NULL && slow != NULL)
//	{
//		if (fast->next == NULL || fast->next->next == NULL)
//			return slow->data;
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	return slow->data;
//}
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	int n = sizeof(a) / sizeof(a[0]);
//	int x1,x2;//�洢�м�Ԫ��
//	cout << "����������" << endl;
//	LinkList<int> L;
//	L.CreateListR(a, n);
//	L.DispList();
//	cout << "���Է���һ����������" << endl;
//	x1 = GetMiddle1(L);
//	cout << "�ҵ�������L�м�Ԫ�أ�" << x1 << endl;
//	
//	cout << endl;
//	cout << "���Է�������������ָ�뷨" << endl;
//	x2 = GetMiddle2(L);
//	cout << "�ҵ�������L�м�Ԫ�أ�" << x2 << endl;
//	return 0;
//}
