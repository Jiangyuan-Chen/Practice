#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	for(int i = 2; i <101; ++i)
	{
	   bool flag = true;
	   for(int j = 2; j<= pow(i,0.5); ++j)
       {
           if(i%j == 0)
           {
               flag = false;
               break;
           }
       }
	   if(flag)
       {
           cout << i << " 是质数\n";
       }
	}
   return 0;
}
