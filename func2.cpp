#include <iostrem>
using namespace std;
void add(int a, int b )
{
	int sum = a+b;
	cout<<"Sum of the numbers is :"<<sum<<endl;
}


	int main()
	{
		int a1,b1;
		cout<<"Enter 2 nos."<<endl;
		cin>>a1>>endl>>b1>>endl;
		add(a1,b1);
		return 0;
	}