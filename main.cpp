#include <iostream>
#include "My_class.h"

int main()
{
	SuperArray arr;

        std::cout<<"Initial array capacity: "<<arr.getCapacity()<<std::endl;

	for (int i = 0; i < 20; ++i)
	{
		arr.pushBack(i);
	}

	std::cout<<"Final array size: "<<arr.getSize()<<std::endl;
	std::cout<<"Final array capacity: "<<arr.getCapacity()<<std::endl;

        for (int i = 0;i < arr.getSize();++i)
	{
		std::cout<<arr.get(i)<<" ";
	}
	std::cout<<std::endl;
	return 0;
}
