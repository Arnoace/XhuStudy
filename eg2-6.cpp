////有一个长度大于2的整数单链表L，设计一个算法查找L中中间位置的元素
//#include"LinkList.cpp"
////方法一：计数法
//template<typename T>
//T GetMiddle1(LinkList<T> &L)
//{
//	int j = 1;
//	int n = L.Getlength();
//	LinkNode<T>* p = L.head->next;//p指针指向头节点
//	while (j <= (n - 1) / 2)
//	{
//		j++;
//		p = p->next;
//	}
//	return p->data;
//}
//
////方法二：快慢指针法
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
//	int x1,x2;//存储中间元素
//	cout << "建立单链表：" << endl;
//	LinkList<int> L;
//	L.CreateListR(a, n);
//	L.DispList();
//	cout << "测试方法一——计数法" << endl;
//	x1 = GetMiddle1(L);
//	cout << "找到单链表L中间元素：" << x1 << endl;
//	
//	cout << endl;
//	cout << "测试方法二——快慢指针法" << endl;
//	x2 = GetMiddle2(L);
//	cout << "找到单链表L中间元素：" << x2 << endl;
//	return 0;
//}
