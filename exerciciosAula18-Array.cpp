#include <iostream>

using namespace std;

int main(void)
{
	
	int vetor[7] = {10,20,30,40,50,90,192};	
	
	
	for(int i = 0; i < sizeof(vetor)/4; i++)
	{
		cout << vetor[i] << "\n";	
	}	
	
	return 0;
}
