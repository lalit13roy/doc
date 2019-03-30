#include<iostream>

int main()
{
	int* intPtr = new int(4);
	int size;

	// the array in initialized by zeros
	char* charPtr = new char[size](); 

	std::cout << "Put a number: "; 
	std::cin >>size;

	for (int i=0;i<size;i++)
	{
		charPtr[i]=static_cast<char>(i+65);
		std::cout << charPtr[i];
	}

	std::cout << std::endl;
	
	delete intPtr;
	delete[] charPtr;
}
