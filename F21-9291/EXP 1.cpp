#include <iostream>
using namespace std;
int main()
{
	int money,drinks=20;
	cout <<"enter the money you have"<<endl;
	cin>>money;
	while(money>=20)
	{
		cout<<"chose your drink...agian if you have money"<<endl;
		cout<<"coke\nwater\nsprite\npepsi\nmineralWate\n"<<endl;
		cin>>drinks;
		switch(drinks)
		{
		case 1:
			
			cout<<"your drink is coke"<<endl;
				break;
		case 2:
			cout<<"your drink is water"<<endl;
			break;
		case 3:
			cout<<"your drink is sprite"<<endl;
			break;
		case 4:
			cout<<"your drink is pepsi"<<endl;
			break;
		case 5:
			cout<<"your drink is mineral water"<<endl;
		default:
			cout<<"now your money is less then a drink price"<<endl;
		}
         money=money-20;
         cout<<" your remaining money is less"<<endl;
	
	}
	   cout<<" your money is less than drink price"<<endl;
	return 0;
}
