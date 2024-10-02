////设计一个算法用于删除从序号i开始的k个元素
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
//	cout << "请输入从第i个元素开始删除k个元素：";
//	cin >> i >> k;
//	cout << "删除第" << i << "个元素开始的" << k << "个元素";
//	SqList<int> L;
//	L.CreateList(a, n);
//	cout << "创建线性表L：";
//	L.DispList();
//	Deletek(L, i, k);
//	cout << "经过删除处理后：";
//	L.DispList();
//	return 0;
//}