#include<iostream.h>
#include<iomanip.h>
void main()
{
	int a[4][4];
	int i,j,sum=0;
	cout<<"please put a 4*4 juzhen"<<endl;
	for(i=0;i<4;i++)
    	for(j=0;j<4;j++)
			if(i==j)
				sum=sum+a[i][j];
			cout<<sum<<endl;
for(i=0;i<4;i++)
    	for(j=0;j<4;j++)
		 if(i=1&&j!=4||j=4&&i!=4)
				a[i][j]=a[i][j]++;
		 else if(i=1&&j!=1||j=4&&i!=4)
			 a[i][j]=a[i][j]--;
cout<<setw(4)<<a[i][j];
cout<<"\n";
}