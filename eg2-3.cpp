////���ں���n������Ԫ�ص�˳���L�����һ���㷨����ɾ����������ֵΪx��Ԫ��
//#include"SqList.cpp"
////��һ�����彨��
//template <typename T>
//void Deletex1(SqList<T>& L, int x)//x��Ҫɾ������ֵ
//{
//	int k = 0;//k�ۼ����µ�Ԫ�ظ���
//	for (int i = 0;i < L.length; i++)
//	{
//		if (L.data[i] != x)
//		{
//			L.data[k] = L.data[i];
//			k++;
//		}
//	}
//	L.length = k;
//}
////������Ԫ���ƶ���
//template <typename T>
//void Deletex2(SqList<T>& L, int x) 
//{
//	int k = 0;//k�ۼ�Ҫɾ����Ԫ��
//	for (int i = 0;i < L.length;i++)
//	{
//		if (L.data[i] != x)
//			L.data[i - k] = L.data[i];
//		else
//			k++;
//	}
//	L.length -= k;
//}
////���������仮�ַ�
//template <typename T>
//void Deletex3(SqList<T>& L, int x)
//{
//	int i = -1,j = 0;
//	while (j < L.length)
//	{
//		if (L.data[j] != x)
//		{
//			i++;
//			if (i!=j)
//					swap(L.data[i], L.data[j]);
//		}
//		j++;
//	}
//	L.length = i + 1;
//}
//
//int main()
//{
//	int x;
//	cout << "������Ҫɾ�������֣�";
//	cin >> x;
//	//���Խⷨһ
//	int a[] = { 1,2,3,3,2,1,3,3,6,7 };
//	int n = sizeof(a) / sizeof(a[0]);
//	SqList<int> L1;
//	cout << "���Է���һ�����彨����" << endl;
//	cout << "����˳���L1��" << endl;
//	L1.CreateList(a, n);
//	L1.DispList();
//	Deletex1(L1, x);
//	cout << "ɾ��Ԫ��" << x << "��" << endl;
//	L1.DispList();
//	cout << endl;
//	//���Խⷨ��
//	SqList<int> L2;
//	L2.CreateList(a, n);
//	cout << "���Է�������Ԫ���ƶ�����" << endl;
//	cout << "����˳���L2��" << endl;
//	L2.DispList();
//	Deletex2(L2, x);
//	cout << "ɾ��Ԫ��" << x << "��" << endl;
//	L2.DispList();
//	cout << endl;
//	//���Խⷨ��
//	SqList<int> L3;
//	L3.CreateList(a, n);
//	cout << "���Է����������仮�ַ���" << endl;
//	cout << "����˳���L3��" << endl;
//	L3.DispList();
//	cout << "ɾ��Ԫ��" << x << "��" << endl;
//	Deletex3(L3, x);
//	L3.DispList();
//	cout << endl;
//	return 0;
//}