#include <iostream.h>
#include <stdio.h>
#define N 100
int fun(char*s);
void main()
{
	char s[N];
	int t;
	cout<<"������һ���ַ�: "<<endl;
	gets(s);
	t=fun(s);
	cout<<"��������ַ�����"<<s<<endl;
	cout<<"����"<<t<<"������"<<endl;
}

int fun(char *s)
{
	int t=0;
	char* p,*q;
	p=q=s;
	while( *p != '\0' && *p == ' ') p++;
	while( *q != '\0')
		q++;
	q--;
	while( *q == ' ')
		q--;

	while( p<=q)
	{
		if( *p == ' ' && *(p+1) != ' ')
		{
			t++;
		}
			p++;
	}
	return t+1;
}