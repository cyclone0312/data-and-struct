#include<bits/stdc++.h>
using namespace std;

typedef struct
{
	ElemType data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack *&s)
{
	s=(SqStack*)malloc(sizeof(SqStack));
	s->top=-1;
}

void DeatoryStack(SqStack*&s)
{
	free(s);
}

bool StackEmpty(SqStack *s)
{
	return (s->top==-1);//��ʼΪs->top=-1; 
}

bool Push(SqStack*&s,ElemType e)
{
	if(s->top==MaxSize-1)
	  return false;
	  s->top++;
	  s->data[s->top]=e;
	  return true;
}

bool Pop(SqStack *&s,Elemtype &e)
{
	if(s->top==-1)
	return false;
	e=s->data[s->top;]
	s->top--;
		return true;
 } 
	
//�ж��Ƿ�Ϊ�Գƴ�
bool symmetry(ElemType str[])
{
	int i;
	ElemType e;
	SqStack *st;
	InitStack(st);//��ʼ��ջ 
	for(i=0;str[i]!='\0';i++)
	Push(st,str[i]);
	for(i=0;str[i]!='\0';i++)
	{
		Pop(st,e);
		if(str[i]!=e)
		{
			DestroyStack(st);
			return false;
		}
	}
	DestoryStack(st);
	return true; 
 } 
	
	//��ʽ����ṹ
	typedef struct linknode
	{
		ElemType data;
		struct linknode *next;
	}LinkStNode;
	
void InitStack(LinkStNode *&s)
{
	s=(LinkStNode *)malloc(sizeof(LinkStNode));
	s->next=NULL;
 } 
	
void DestoryStack(&s)
{
	free(pre);
	pre=p;
	p=pre->next; 
}

bool Push(LinkStNode *&s,ElemType e)
{
	LinkStNode *p;
	p=(LinkStNode *)malloc(sizeof(LinkStNode));
	p->data=e;
	p->next=s->next;
	s->next=p;
	return true;
 } 
	
//POP  
if(s->next==NULL)
return false;
p=s->next;
e=p->data;
s->next=p->next;
free(p); 
	//�жϱ��ʽ�������Ƿ�ƥ���磨�������������� 
bool Match(char exp[],int n)
{
	int i=0;char e;
	bool match=true;//��ʼ������ƥ���
	LinkStNode *st;
	InitStack(st);
	while(i<n&&match)//����exp�����е��ַ�
	{
	if(exp[i]=='(')
	 Push(st.exp[i]);
	 else if(exp[i]==')')
	{ if(GetTop(st,e)==true)//ȡ��ջ��Ԫ�سɹ� ��Ϊe 
	 {
	 	if(e!='(')
		 match=false;
		 else Pop(st,e);//��ջ��Ԫ�س�ջ 
		  
	  } 
	  else match=false; //���޷�ȡ��ջ��Ԫ�� 
	} 
	i++;}
	if(!stackEmpty(st))
	 match=false;
	 DestoryStack(st);
	 return match;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

