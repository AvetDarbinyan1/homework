#include <iostream>

int main(){
	int a = 0;
	int b = 0;

	std::cout<<"Enter number"<<std::endl;
	std::cin>>a;
	a = a % 2;

	if(a == 0){
		std::cout<<"the number is even"<<std::endl;
	}else{
	std::cout<<"the number is odd"<<std::endl;
	}
	
	std::cout<<"Enter number"<<std::endl;
	std::cin>>b;
	std::cout<<"ardiunq"<<a+b<<std::endl;
}
