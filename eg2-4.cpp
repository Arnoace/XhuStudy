////��������Ԫ��ֵ�������������˳���A��B�����һ���㷨��˳���A��Bȫ��Ԫ�غϲ���һ������
////����˳���C��
//#include"SqList.cpp"
//template<typename T>
//void Hebing(SqList<T> A, SqList<T> B, SqList<T>& C)
//{
//	int i = 0, j = 0, k = 0;
//	while (i < A.length && j < B.length)
//	{
//		if (A.data[i] < B.data[j])
//		{
//			C.Add(A.data[i]);
//			i++;
//		}
//		else
//		{
//			C.Add(B.data[j]);
//			j++;
//		}
//	}
//	while (i < A.length)
//	{
//		C.Add(A.data[i]);
//		i++;
//	}
//	while (j < B.length)
//	{
//		C.Add(B.data[j]);
//		j++;
//	}
//
//}
//
//int main()
//{
//	int a[] = { 1,3,6,7,9 };
//	int b[] = { 2,4,5,6,7,10 };
//	int n1 = sizeof(a) / sizeof(a[0]);
//	int n2 = sizeof(b) / sizeof(b[0]); 
//	cout << "����˳���A��" << endl;
//	SqList<int>A;
//	A.CreateList(a, n1);
//	A.DispList();
//	cout << "����˳���B��" << endl;
//	SqList<int>B;
//	B.CreateList(b, n2);
//	B.DispList();
//	cout << "����˳���C��" << endl;
//	SqList<int>C;
//	Hebing(A, B, C);
//	cout << "�ϲ�˳���A��B��" << endl;
//	C.DispList();
//	return 0;
//}