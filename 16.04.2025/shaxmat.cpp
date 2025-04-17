#include <iostream>
std::string a = "⬜️";
std::string b = "⬛️";
int c = 0;
int d = 0;
void print(){
	std::cout<<"enter qanak"<<std::endl;
	std::cin>>c;։ո
	for(int i = 0;i < c;i++){
		std::cout<<" "<<std::endl;
		for(int j = 0;j < c;j++){
			if(d == 0){
			std::cout<<a;
			d += 1;
			}else{
			std::cout<<b;
			d -= 1;
			}
	}
}
}
int main(){
	print();		


}
