#include <iosTream>
using namespace std;
int main()
{
	int num,power,ans=1;
	cout <<"enter number :"<<endl;
	cin >>num;
	cout <<"enter power :"<<endl;
	cin >>power;
	for(int i=0;i<=power;i++)
	{
	
		ans=ans*num;
		cout<<"power is"<<ans<<endl;
		
	}

	return 0;
}
