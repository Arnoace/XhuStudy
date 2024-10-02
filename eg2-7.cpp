//有一个整数链表L，其中可能存在多个值相同的结点，设计一个算法查找L中最大值结点的个数
#include"LinkList.cpp"
template<typename T>
int GetMax(LinkList<T>& L,T & maxjt)
{
	int cnt;
	int n = L.Getlength();
	LinkNode<T>* p = L.head->next;
	T max = p->data;
	//注意此处并不需要遍历一遍得到最大值，因为最大值第一次出现就可以开始计数
	while (p->next != NULL)
	{
		if (p->next->data > max)
		{
			cnt = 1;
			max = p->next->data;
		}
		else if (p->next->data == max)
			cnt++;
		p = p->next;
	}
	maxjt = max;
	return cnt;
}
int main()
{
	int a[] = { 1,2,4,5,3,6,6,6,4,6,2,3,4,6 };
	LinkList<int>L;
	int max;
	int n = sizeof(a) / sizeof(a[0]);
	cout << "尾插法建立单链表：" << endl;
	L.CreateListR(a, n);
	L.DispList();
	int x = GetMax(L,max);
	cout << "最大值是" << max << "，出现" << x << "次" << endl;
	return 0;
}