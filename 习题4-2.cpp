#include<iostream.h>
void main()
{
      int i,n;
	  cout<<"下面是1-99之间的全部同构数"<<endl;
	  for(i=1;i<=100;i++)
	{
      n=i*i;
      if(n%10==i||n%100==i)
	  {
    cout<<i<<" ";
	  }
	}
     cout<<endl;
}