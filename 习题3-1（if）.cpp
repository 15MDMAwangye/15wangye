#include<iostream.h>
void main()
{
	float x;
	cout<<"Please input x;"<<endl;
	cin>>x;
	if(x<10)
		cout<<x<<"<10"<<endl;
	else
		if(x>=10&&x<=99)
			cout<<x<<"����10-99"<<endl;
		else
			if(x>=100&&x<=999)
				cout<<x<<"����100-999"<<endl;
			else
				if(x>=1000)
					cout<<x<<"��1000"<<endl;
}
