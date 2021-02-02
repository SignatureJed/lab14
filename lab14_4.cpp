#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++)
	{
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &l,int &o,int &v,int &e)
{
	int comprog[] = {l,o,v,e};
	int order[4]= {0,1,2,3};
	
	for(int i =0 ; i < 4 ; i++)
	{
		order[i] = rand()%4;
			for(int j=0; j<i; j++)
			{
				if (order[i]==order[j])
					{
						i--; 
						break;
					}
			}
	}
	l = comprog[order[0]];
	o = comprog[order[1]];
	v = comprog[order[2]];
	e = comprog[order[3]];


}