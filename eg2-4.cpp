////有两个按元素值递增有序的整数顺序表A和B，设计一个算法将顺序表A和B全部元素合并到一个递增
////有序顺序表C中
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
//	cout << "创建顺序表A：" << endl;
//	SqList<int>A;
//	A.CreateList(a, n1);
//	A.DispList();
//	cout << "创建顺序表B：" << endl;
//	SqList<int>B;
//	B.CreateList(b, n2);
//	B.DispList();
//	cout << "创建顺序表C：" << endl;
//	SqList<int>C;
//	Hebing(A, B, C);
//	cout << "合并顺序表A和B后：" << endl;
//	C.DispList();
//	return 0;
//}