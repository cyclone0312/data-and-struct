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
	return (s->top==-1);//初始为s->top=-1; 
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
	
//判断是否为对称串
bool symmetry(ElemType str[])
{
	int i;
	ElemType e;
	SqStack *st;
	InitStack(st);//初始化栈 
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
	
	//链式储存结构
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
	//判断表达式中括号是否匹配如（（））（（）） 
bool Match(char exp[],int n)
{
	int i=0;char e;
	bool match=true;//初始假设是匹配的
	LinkStNode *st;
	InitStack(st);
	while(i<n&&match)//遍历exp中所有的字符
	{
	if(exp[i]=='(')
	 Push(st.exp[i]);
	 else if(exp[i]==')')
	{ if(GetTop(st,e)==true)//取出栈顶元素成功 且为e 
	 {
	 	if(e!='(')
		 match=false;
		 else Pop(st,e);//将栈顶元素出栈 
		  
	  } 
	  else match=false; //即无法取出栈顶元素 
	} 
	i++;}
	if(!stackEmpty(st))
	 match=false;
	 DestoryStack(st);
	 return match;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

