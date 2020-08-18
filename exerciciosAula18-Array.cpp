#include <iostream>

using namespace std;

int main(void)
{
	
	int array[7] = {10,20,30,40,50,90,192};	
	
	
	for(int i = 0; i < sizeof(array)/4; i++)
	{
		cout << array[i] << "\n";	
	}	

	cout << "\n";

	// We divided the sizeof by 4 because witout 4 he will return the length in bytes of the array, because array have 4 bytes.
	
	return 0;
}
