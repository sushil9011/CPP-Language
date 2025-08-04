#include <iostream>
using namespace std;

main()

{       
	
	int n,FirstNum,LastNum;

	cout <<"enter your number:";
	cin>>n;

	LastNum=n%10;

	while(n > 9)
	{
		n=n/10;
	}
	FirstNum=n;

	n = FirstNum+LastNum;

	cout << FirstNum << " + " << LastNum << " = " << n << endl;



}