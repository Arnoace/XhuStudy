////设计一个算法，找出两个序列A和B的中位数。
//#include"SqList.cpp"
//template<typename T>
//T GetMiddle(SqList <T> A, SqList <T> B)
//{
//	int i = 0, j = 0;
//	int k = 0;
//	while (i < A.length && j < B.length)
//	{
//		k++;
//		if (A.data[i] < B.data[j])
//		{
//			if (k == A.length)
//				return A.data[i];
//			i++;
//		}
//		else
//		{
//			if (k == B.length)
//				return B.data[j];
//			j++;
//		}
//	}
//}
//
//int main()
//{
//	int x;//x存放中位数
//	int a[] = { 11,13,15,17,19 };
//	int b[] = { 2,4,6,8,20 };
//	cout << "创建线性表A：" << endl;
//	SqList<int>A;
//	int na = sizeof(a) / sizeof(a[0]);
//	A.CreateList(a, na);
//	A.DispList();
//	cout << "创建线性表B：" << endl;
//	SqList<int>B;
//	int nb = sizeof(b) / sizeof(b[0]);
//	B.CreateList(b, nb);
//	B.DispList();
//	x=GetMiddle(A, B);
//	cout << "线性表A和B的中位数是：" << x << endl;
//	return 0;
//}