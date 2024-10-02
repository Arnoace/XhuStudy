////对于含有n个整数元素的顺序表L，设计一个算法用于删除其中所有值为x的元素
//#include"SqList.cpp"
////法一：整体建表法
//template <typename T>
//void Deletex1(SqList<T>& L, int x)//x是要删除的数值
//{
//	int k = 0;//k累计留下的元素个数
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
////法二：元素移动法
//template <typename T>
//void Deletex2(SqList<T>& L, int x) 
//{
//	int k = 0;//k累计要删除的元素
//	for (int i = 0;i < L.length;i++)
//	{
//		if (L.data[i] != x)
//			L.data[i - k] = L.data[i];
//		else
//			k++;
//	}
//	L.length -= k;
//}
////法三：区间划分法
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
//	cout << "请输入要删除的数字：";
//	cin >> x;
//	//测试解法一
//	int a[] = { 1,2,3,3,2,1,3,3,6,7 };
//	int n = sizeof(a) / sizeof(a[0]);
//	SqList<int> L1;
//	cout << "测试方法一（整体建表法）" << endl;
//	cout << "创建顺序表L1：" << endl;
//	L1.CreateList(a, n);
//	L1.DispList();
//	Deletex1(L1, x);
//	cout << "删除元素" << x << "后：" << endl;
//	L1.DispList();
//	cout << endl;
//	//测试解法二
//	SqList<int> L2;
//	L2.CreateList(a, n);
//	cout << "测试方法二（元素移动法）" << endl;
//	cout << "创建顺序表L2：" << endl;
//	L2.DispList();
//	Deletex2(L2, x);
//	cout << "删除元素" << x << "后：" << endl;
//	L2.DispList();
//	cout << endl;
//	//测试解法三
//	SqList<int> L3;
//	L3.CreateList(a, n);
//	cout << "测试方法三（区间划分法）" << endl;
//	cout << "创建顺序表L3：" << endl;
//	L3.DispList();
//	cout << "删除元素" << x << "后：" << endl;
//	Deletex3(L3, x);
//	L3.DispList();
//	cout << endl;
//	return 0;
//}