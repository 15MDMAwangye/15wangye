#include<iostream.h>
void main()
{
	int n,c=0;
    cout<<"please input ";
    cin>>n;
    while(n!=1)
	{
		if(n%2==0) 
			n=n/2;
		else 
			n=n*3+1;
		c++;
	}
	cout<<c<<endl;
}