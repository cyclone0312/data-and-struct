typedef struct LNode
{
	ElemType data;
	struct LNode* next;
}LinkNode;
typedef int ElemType;
//头插法 
void CreatListF(LinkNode*&L,ElemType a[],int n)
{
	LinkNode *s;
	L=(LinkNode*)malloc(sizeof(LinkNode));
	L->next=NULL;
	for(int i=0;i<n;i++)
	{
		s=(LinkNode *)malloc(sizeof(LinkNode));
		s->data=a[i];
		s->next=L->next;
		L->next=s;
	}
}

//尾插法
void CreatListR(LinkNode *&L,ElemType a[],int n)
{
	LinkNode *s,*r;
	L=(LinkNode *)malloc(sizeof(LinkNode));
	r=L;
	for(int i=0;i<m;i++)
	{
		s=(LinkNode*)malloc(sizeof(LinkNode));
		s->date=a[i];
		r->next=s;
		r=s; 
	}
	r->next=NULL;

 } 
 //销毁线性表
 void DestroyList(LinkNode *&L)
 {
 	LinkNode *pre=L,*p=L->next; 
 	while(p!=NULL)
 	{
 		free(pre);
 		pre=p;
 		p=pre->next;
	 }
	 free(p);
  } 
 //插入数据元素
 
 bool ListInsert(LinkNode *&L,int i,ElemType e)
 {
 	int j=0;
 	LinkNode *p=L,*s;//为什么要用*p=L？看似多此一举 但其实是防止对L进行直接的修改
	 if(i<=0) return false;
	 while(j<i-1&&p!=NULL)
	 {
	 	j++;
	 	p=p->next;
	  }
	  if(p==NULL)
	  return false;
	  else 
	  {
	  	s=(LinkNode *)malloc(sizeof(LinkNode));
	  	s->date=e;
	  	s->next=p->next;
	  	p->next=s;
	  	return true;
	   } 
  } 
 
 //删除元素
  bool ListInsert(LinkNode *&L,int i,ElemType e)
 {
 	int j=0;
 	LinkNode *p=L,*q;//为什么要用*p=L？看似多此一举 但其实是防止对L进行直接的修改
	 if(i<=0) return false;
	 while(j<i-1&&p!=NULL)
	 {
	 	j++;
	 	p=p->next;
	  }
	  if(p==NULL)
	  return false;
	  else 
	  {
	    q=p->next;
	    if(q==NULL)
	    {
	    	return false;
		}
	  	e=q->date;
	  	p->next=q->next;
	  	free(q);
	  	return true;
	   } 
  } 
  //双链表
  typedef struct DNode
  {
  	ElemType date;
  	struct DNode *prior;
  	struct DNode *next;
   } DLiknDode;
   
   //插入s节点 
   s->next=p->next;
   p->next->prior=s;
   s->prior=p;
   p->next=s; 
 
 //删除 
 int i=0;
 DLinkNode*p=L,*q;
 if(1<=0) return false;
 while(j<i-1&&p!=NULL)
 {
 	i++;
 	p=p->next;
  } 
  if(p == NULL)
  return false;
  else 
  {
  	q=p->next;
  	if(q==NULL)
  	return fasle;
  	p->next= q->next;
  	if(q->next!=NULL)
  	q->nxet->prior=p;
	  free(q);
	  return true; 
  }
  //翻转 
  void reverse(DLinkNode *&L)
  {
  	DLinkNode *p=L->next;//p指向首节点
	  L->next=NULL;//构造只有头节点的双链表L
	  while(p!=NULL) 
	  {
	  	q=p->next;
	  	p->next=L->next;
	  	if(L->next!=NULL)
	  	  L->next->prior=p;
	  	  
	  	  L->next=p;
	  	  p->prior=L;
	  	  p=q;
	  }
   } 
 
 
 
 
 
 
 
 
 
 
 
