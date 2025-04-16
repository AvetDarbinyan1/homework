#include <iostream>
using namespace std;
//int index = 0;
int x = 0;
void inputCars(string* brands, string* models, int* years, float* prices, int index){
	for(int i = 0; i < index; ++i){
		cout<<"nermuteq brendy"<<endl;
		cin >> brands[i];
		cout<<"nermuteq modely"<<endl;
		cin>>models[i];
		cout<<"nermuteq years"<<endl;
		cin>>years[i];
		cout<<"nermuteq giny"<<endl;
		cin>>prices[i];

	}
}


void displayCars(const string* brands, const string* models, const int* years, const float* prices, int index){
	cout<<"avtomeqenaner"<<endl;
	for(int i = 0;i < index;++i){
		cout<<" "<<endl;
		cout<<"brend------"<<brands[i]<<endl;
		cout<<"model -----"<<models[i]<<endl;
		cout<<"year-----"<<years[i]<<endl;
		cout<<"price-----"<<prices[i]<<endl;
		cout<<" "<<endl;;
	}

}

int findMostExpensiveCar(const float* prices, int index){
	int x = 0;
	for (int i = 1; i < index; ++i){
		if(prices[i] > prices[x]){
			x = i;
		}
	}
	return x;
}







int main(){
	int index = 0;
	cout<<"nermuceq avtomeqenaneri qanaky";
	cin>>index;
	string* brands = new string[index];
    	string* models = new string[index];
    	int* years = new int[index];
    	float* prices = new float[index];
    	inputCars(brands, models, years, prices, index);
    	displayCars(brands, models, years, prices, index);
    
	
	int x = findMostExpensiveCar(prices, index);
	cout<<x<<endl;	

}
