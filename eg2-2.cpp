////���һ���㷨����ɾ�������i��ʼ��k��Ԫ��
//#include"SqList.cpp"
//template <typename T>
//bool Deletek(SqList<T>& L, int i, int k)
//{
//	if (i < 0 || k < 0 || i + k<0 || i + k>L.length)
//		return false;
//	for (int j = i + k;j < L.length;j++)
//		L.data[j - k] = L.data[j];
//	L.length -= k;
//	return true;
//}
//int main()
//{
//	int n = 5;
//	int a[] = { 1,2,3,4,5 };
//	int i, k;
//	cout << "������ӵ�i��Ԫ�ؿ�ʼɾ��k��Ԫ�أ�";
//	cin >> i >> k;
//	cout << "ɾ����" << i << "��Ԫ�ؿ�ʼ��" << k << "��Ԫ��";
//	SqList<int> L;
//	L.CreateList(a, n);
//	cout << "�������Ա�L��";
//	L.DispList();
//	Deletek(L, i, k);
//	cout << "����ɾ�������";
//	L.DispList();
//	return 0;
//}