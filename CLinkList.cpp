#include <iostream>
using namespace std;
template <typename T>
struct LinkNode								//循环单链表结点类型 
{
	T data;									//存放数据元素
	LinkNode<T>* next;						//指向下一个结点的域
	LinkNode() :next(NULL) {}				//构造函数 
	LinkNode(T d) :data(d), next(NULL) {}		//重载构造函数 
};

template <typename T>
class CLinkList								//循环单链表类
{
public:
	LinkNode<T>* head;						//循环单链表头结点
	CLinkList() 							//构造函数,创建一个空循环单链表
	{
		head = new LinkNode<T>();
		head->next = head;					//构成循环的空链表 
	}
	~CLinkList() 							//析构函数,销毁循环单链表
	{
		LinkNode<T>* pre, * p;
		pre = head;p = pre->next;
		while (p != head)						//用p遍历结点并释放其前驱结点 
		{
			delete pre;						//释放pre结点 
			pre = p; p = p->next;				//pre,p同步后移一个结点 
		}
		delete pre;							//p等于head时pre指向尾结点,此时释放尾结点						
	}

	void CreateListF(T a[], int n)			//头插法建立循环单链表
	{
		for (int i = 0;i < n;i++)				//循环建立数据结点
		{
			LinkNode<T>* s = new LinkNode<T>(a[i]);		//创建数据结点s
			s->next = head->next;					//将结点s插入在head结点之后 
			head->next = s;
		}
	}
	void CreateListR(T a[], int n)			//尾插法建立循环单链表
	{
		LinkNode<T>* s, * r;
		r = head;								//r始终指向尾结点,开始时指向头结点
		for (int i = 0;i < n;i++)				//循环建立数据结点
		{
			s = new LinkNode<T>(a[i]);		//创建数据结点s
			r->next = s;						//将结点s插入结点r之后
			r = s;
		}
		r->next = head;						//将尾结点的next域置为head
	}
	void Add(T e)							//在循环单链表末尾添加一个值为e的结点 
	{
		LinkNode<T>* s = new LinkNode<T>(e); 	//新建结点s
		LinkNode<T>* p = head;
		while (p->next != head)				//查找尾结点p
			p = p->next;
		s->next = p->next;					//在结点p之后插入结点s
		p->next = s;
	}
	int Getlength()                   		//求循环单链表中数据结点个数
	{
		LinkNode<T>* p = head;
		int cnt = 0;
		while (p->next != head)				//查找到尾结点为止
		{
			cnt++;
			p = p->next;
		}
		return cnt;
	}
	bool GetElem(int i, T& e)				//求循环单链表中序号为i的结点值
	{
		if (i < 0) return false;             	//参数i错误返回false
		LinkNode<T>* p = geti(i);				//查找序号i的结点 
		if (p != head)						//找到了序号i的结点p 
		{
			e = p->data;
			return true;					//成功找到返回true 
		}
		else
			return false;					//没有找到序号i的结点返回false 
	}
	bool SetElem(int i, T e)              	//设置序号为i的结点值
	{
		if (i < 0) return false;             	//参数i错误返回false
		LinkNode<T>* p = geti(i);				//查找序号i的结点 
		if (p != NULL)						//找到了序号为i的结点p 
		{
			p->data = e;
			return true;
		}
		else								//没有找到序号为i的结点
			return false;					//参数i错误返回false
	}

	int GetNo(T e)							//查找第一个为e的元素的序号
	{
		int j = 0;
		LinkNode<T>* p = head->next;
		while (p != head && p->data != e)
		{
			j++;							//查找元素e
			p = p->next;
		}
		if (p == head)
			return -1;						//未找到时返回-1
		else
			return j;						//找到后返回其序号
	}
	bool Insert(int i, T e)					//在循环单链表中序号i位置插入值为e的结点
	{
		if (i < 0) return false; 				//参数i错误返回false
		LinkNode<T>* s = new LinkNode<T>(e);	//建立新结点s
		LinkNode<T>* p = geti(i - 1);			//查找序号为i-1的结点p
		if (p != NULL)						//找到了序号i-1的结点 
		{
			s->next = p->next;				//在p结点后面插入s结点
			p->next = s;
			return true;					//插入成功返回true 
		}
		else								//没有找到序号i-1的结点 
			return false;					//参数i错误返回false
	}
	bool Delete(int i)						//在循环单链表中删除序号i位置的结点
	{
		if (i < 0) return false; 				//参数i错误返回false		
		LinkNode<T>* p = geti(i - 1);			//找到序号为i-1的结点p
		if (p != NULL)						//找到序号为i-1的结点 
		{
			LinkNode<T>* q = p->next;			//q指向序号i的结点 
			if (q != NULL) 					//存在序号i的结点时删除它 
			{
				p->next = q->next;			//删除p结点的后继结点
				delete q;					//释放空间 
				return true;				//删除成功返回true 
			}
			else							//没有序号i的结点
				return false;				//参数i错误返回false 			
		}
		else 								//没有找到序号为i-1的结点 
			return false;					//参数i错误返回false  		
	}
	void DispList()							//输出循环单链表所有结点值
	{
		LinkNode<T>* p;
		p = head->next;						//p指向开始结点
		while (p != head)						//p不为head,输出p结点的data域
		{
			cout << p->data << " ";
			p = p->next;						//p移向下一个结点
		}
		cout << endl;
	}
private:
	//*******************************************
	//序号i的正确范围：-1≤i<n，超出范围返回NULL
	//i=-1时返回头结点head
	//i≥0并且i<n时返回序号i的结点
	//*******************************************
	LinkNode<T>* geti(int i)		      	//返回序号为i的结点
	{
		if (i < -1) return NULL;				//i<-1时返回NULL
		if (i == -1) return head;				//i=-1时返回头结点 
		LinkNode<T>* p = head->next;			//首先p指向首结点 
		int j = 0;							//j置为0为首结点序号
		while (j < i && p != head)				//p移动i个结点 
		{
			j++;
			p = p->next;
		}
		if (p == head)						//没有找到序号i的结点返回NULL
			return NULL;
		else
			return p;
	}
};

