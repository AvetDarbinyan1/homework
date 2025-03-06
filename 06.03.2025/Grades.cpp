#include <iostream>

const int size = 30;
int grades[size];


void inputGrades() {
	int ig = 0; 
	for (int i = 0; i < size; i++) { 
        	std::cout << "Enter grade " << i + 1 << ": ";
        	std::cin >> ig;
        	grades[i] = ig;  
    }
}
void calculateAverag(){
	double sum = 0;
	int ig  = 0;
	for(int i = 0;i < size;i++){
	sum += grades[i];
	}	
		std::cout<<"Averag - ";'\n';
		std::cout<<sum/size<<std::endl;
	
}

int findHighestGrade() {
    int a = 0;
    for (int i = 1; i < size; i++) {
        if (grades[i] > grades[a]) {
            a = i;
        }
    }
    std::cout<<"HighestGrade - "<<grades[a]<<std::endl;
    return grades[a];
}
int findLowestGrade(){
    int a = 0;  
    for (int i = 1; i < size; i++) {
        if (grades[i] < grades[a]) {  
            a = i;
        }
    }
    std::cout << "LowestGrads - " << grades[a] << std::endl;
    return grades[a]; 

}


int main() {
    inputGrades();
    calculateAverag();
    findHighestGrade();
    findLowestGrade();
    return 0;
}
