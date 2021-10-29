#include <iostream>
using namespace std;
int main()
{
	int n1 ,n2,n3,n4=0;
	cout <<"enter number :"<<endl;
	cin>>n1;
	n2=n1;
	while(n2!=0)
	{
		n3=n2%10;
		n4=n4+(n3*n3*n3);
		n2=n2/10;
	}
	if(n4==n1)
	{
		cout<<"it is an angstorm number :"<<endl;
	}
	else
    {  
         cout<<"it is not angstrom number :"<<endl;
	}
	return 0;
}
