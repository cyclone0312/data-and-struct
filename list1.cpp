typedef struct LNode
{
	ElemType data;
	struct LNode* next;
}LinkNode;
typedef int ElemType;
//ͷ�巨 
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

//β�巨
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
 //�������Ա�
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
 //��������Ԫ��
 
 bool ListInsert(LinkNode *&L,int i,ElemType e)
 {
 	int j=0;
 	LinkNode *p=L,*s;//ΪʲôҪ��*p=L�����ƶ��һ�� ����ʵ�Ƿ�ֹ��L����ֱ�ӵ��޸�
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
 
 //ɾ��Ԫ��
  bool ListInsert(LinkNode *&L,int i,ElemType e)
 {
 	int j=0;
 	LinkNode *p=L,*q;//ΪʲôҪ��*p=L�����ƶ��һ�� ����ʵ�Ƿ�ֹ��L����ֱ�ӵ��޸�
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
  //˫����
  typedef struct DNode
  {
  	ElemType date;
  	struct DNode *prior;
  	struct DNode *next;
   } DLiknDode;
   
   //����s�ڵ� 
   s->next=p->next;
   p->next->prior=s;
   s->prior=p;
   p->next=s; 
 
 //ɾ�� 
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
  //��ת 
  void reverse(DLinkNode *&L)
  {
  	DLinkNode *p=L->next;//pָ���׽ڵ�
	  L->next=NULL;//����ֻ��ͷ�ڵ��˫����L
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
 
 
 
 
 
 
 
 
 
 
 
