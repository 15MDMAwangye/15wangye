#include<iostream.h>
#include<iomanip.h>
#define N 10
void main()
{
int a[N];
int i,k,*p,*q;
cout<<"请输入10个数:";
for(i=0;i<N;i++)
cin>>a[i];
p=a;
q=a;
for(i=1;i<N;i++)
if(a[i]<*p)
{
p=&a[i];
}
if(a[i]>*q)
{
q=&a[i];
}
k=*p;
*p=*q;
*q=k;
cout<<"调换后的数组为:"<<endl;
for(i=0;i<N;i++)
cout<<a[i];
}