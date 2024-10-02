////对于含有n个整数元素的顺序表L，设计一个算法将其中所有元素逆置。
//#include"SqList.cpp"
////逆置函数
//template <typename T>
//void Reverse(SqList<T> & L)
//{
//	int i = 0, j = L.length - 1;
//	while (i < j)
//	{
//		swap(L.data[i], L.data[j]);
//		i++;j--;
//	}
//}
//
//int main()
//{
//	int n = 5;
//	int a[] = { 1,2,3,4,5};
//	SqList<int>L;//创建元素类型为int的顺序表L
//	cout << "创建顺序表L" << endl;
//	L.CreateList(a, n);
//	cout << "顺序表L：";
//	L.DispList();
//	cout << "逆置顺序表L" << endl;
//	Reverse(L);
//	cout << "逆置后的顺序表L：";
//	L.DispList();
//	cout << "销毁顺序表L" << endl;
//	return 0;
//}