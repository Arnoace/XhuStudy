//��һ����������L�����п��ܴ��ڶ��ֵ��ͬ�Ľ�㣬���һ���㷨����L�����ֵ���ĸ���
#include"LinkList.cpp"
template<typename T>
int GetMax(LinkList<T>& L,T & maxjt)
{
	int cnt;
	int n = L.Getlength();
	LinkNode<T>* p = L.head->next;
	T max = p->data;
	//ע��˴�������Ҫ����һ��õ����ֵ����Ϊ���ֵ��һ�γ��־Ϳ��Կ�ʼ����
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
	cout << "β�巨����������" << endl;
	L.CreateListR(a, n);
	L.DispList();
	int x = GetMax(L,max);
	cout << "���ֵ��" << max << "������" << x << "��" << endl;
	return 0;
}