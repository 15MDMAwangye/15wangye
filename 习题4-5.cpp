#include <iostream.h>
int main()
{
	{
		int year,num = 0;
    for(year=2000; year<=3000; ++year) 
	{
        if(year%4==0&&year%100!=0||year%400==0)
		{
            if(num && num%10==0)
			cout<<endl;
            cout<<year<<"  ";
            ++num;
        }
    }
    if(num%10) 
	cout<<endl;
	cout<<"闰年总年数为"<<num<<"年"<<endl;
	}	
}
