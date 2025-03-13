#include<iostream>
//x o xax 


char points[3][3] = {
	{'.','.','.'},
	{'.','.','.'},
	{'.','.','.'},
	};
char x = 'x';
char o = 'o';
int to = 0;
int xx = 0;
int y = 0;
bool tr = true;
void print(){ //ketery tpelu hamar 
	for(int i = 0;i < 3;i++){
		for(int j = 0; j  < 3;j++){
			
		std::cout<<points[i][j];	//i barcrutiun j erkarutiun
	
		}

		std::cout<<std::endl;
	}


}
void check_winer(){

                if(points[0][i] == points[0][i] && points[0][i] ==  points[0][i] ){
			
			std::cout<<"haxtanak"<<std::endl;

               
	       	}
	
}


void x_o(){

for(int i = 0;i < 9;i++){
   
	if (to == 0){ // x stugelu hamar 
		std::cout<<"x i hertna nsheq kordinaty"<<std::endl;
		std::cout<<"nermuteq barcrutiuny"<<std::endl;
		std::cin>>xx;
		std::cout<<"nermuteq laynutiuny"<<std::endl;
		std::cin>>y;
	if(xx <= 2 && y <= 2){
		points[xx][y] = x;
		to = 1;
		print();
		check_winer();
	}else{
		break;
	}		
	}else{// o stugelu hamar
		to = 1;
		std::cout<<"o i hertna nsheq kordinaty"<<std::endl;
		std::cout<<"nermuteq barcrutiuny"<<std::endl;
		std::cin>>xx;
		std::cout<<"nermuteq laynutiuny"<<std::endl;
		std::cin>>y;
	if(xx <= 2 & y <= 2){
		points[xx][y] = o;
		to = 0;
		print();
	}else{
	
		break;
}
}
}
}


int main(){	
	print();
	x_o();
	check_winer();
	return 0;
}
