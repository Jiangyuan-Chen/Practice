#include <iostream>
using namespace std;

int main()
{
	int n, i;
	for(n = 2; n < 101; ++n)
	{
	   for(i = 2; n%i != 0 || n == 2; ++i)
	   {
		   if(i >= n-1)
		   {
			   cout << n << " ÊÇÖÊÊý\n";
			   break;
		   }
	   }
	}
   return 0;
}
