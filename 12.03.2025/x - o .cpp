#include<iostream>
//x-o xax 


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
void print(){ //ketery tpelu hamar 
	for(int i = 0;i < 3;i++){
		for(int j = 0; j  < 3;j++){
			
		std::cout<<points[i][j];	//i barcrutiun j erkarutiun
	
		}

		std::cout<<std::endl;
	}


}
void check_winer(){//stugelu hamar 
	
    for (int i = 0; i < 3; i++) { // horizonakany stugelu hamar 
        if (points[i][0] != '.'&& points[i][0] ==  points[i][1] && points[i][1] == points[i][2] ) {
            std::cout << "haxtanak" << std::endl;
            exit(0);
        }
    }
    for(int i = 0;i < 3; i++){// uxahayacy stugelu hamar 
    	if(points[0][i] != '.' && points[0][i] == points[1][i] && points[1][i] == points[2][i] ){
		std::cout<<"haxtanak"<<std::endl;
		exit(0);
	
	}
    
    }
    
	 if(points[0][0] != '.' && points[0][0] == points[1][1] && points[1][1] == points[2][2]){
		    std::cout<<"haxtanak";
		    exit(0);
	    
	    
	    }
   
    	if(points [0][2] != '.' && points[0][2] == points[1][1] && points[1][1] == points[2][0]){
		std::cout<<"haxtanak";
		exit(0);
    
    }

}

void x_o(){

for(int i = 0;i < 9;i++){
   
	if (to == 0){ //x grelu hamar 
		std::cout<<"x i hertna nsheq kordinaty"<<std::endl;
		std::cout<<"nermuteq barcrutiuny"<<std::endl;
		std::cin>>xx;
		std::cout<<"nermuteq laynutiuny"<<std::endl;
		std::cin>>y;
	if(xx <= 2 && y <= 2 && points[xx][y] == '.'){
		points[xx][y] = x;
		to = 1;
		print();
		check_winer();
	}else{
		break;
	}		
	}else{// o graelu hamar
		to = 1;
		std::cout<<"o i hertna nsheq kordinaty"<<std::endl;
		std::cout<<"nermuteq barcrutiuny"<<std::endl;
		std::cin>>xx;
		std::cout<<"nermuteq laynutiuny"<<std::endl;
		std::cin>>y;
	if(xx <= 2 & y <= 2 && points[xx][y] == '.'){
		points[xx][y] = o;
		to = 0;
		print();
		check_winer();
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
