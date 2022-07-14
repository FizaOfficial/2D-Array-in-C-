#include <iostream>
#include <vector>
#include <string>
 
using namespace std ;
int main()
{
	string booksnames[2][2]={
	 {"Maths", "Computer"},
	 { "Urdu", "English"}
	} ;
	int i, j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cout << booksnames[i][j] <<"\n";
		}
	}
return 0;
}
