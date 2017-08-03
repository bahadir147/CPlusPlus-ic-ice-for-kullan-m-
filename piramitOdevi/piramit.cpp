#include <iostream>
using namespace std;


void main()
{
	int b,c;
	for (int sayac=1 ; sayac<6 ;sayac++)
	{
		for(int i =0; i<sayac; i++)
		{
			cout<< i+1;
		}
			cout<<endl;
		if(sayac==5)
		{
			for(int j=5 ; j>1; j--)
			{
				for(int q=1; q<j ;q++)
				{
					cout <<q;
				}
				cout <<endl;
			}
		}
	}
	system("pause");
}