#include <iostream>
using namespace std;
int main(){
	int a = 0;
	int b = 0;
	char c;

	cout<<"narmuteq tiv"<<endl;
	cin>>a;
	cout<<"nermuteq erkrord tiv"<<endl;
	cin>>b;
	cout<<"nermuteq nshany"<<endl;
	cin>>c;
	
	if (c == '+') {
        cout << "Ardyunq: " << a + b << endl;
    } else if (c == '-') {
        cout << "Ardyunq: " << a - b << endl;
    } else if (c == '*') {
        cout << "Ardyunq: " << a * b << endl;
    } else if (c == '/') {
        if (b != 0)
            cout << "Ardyunq: " << a / b << endl;
        else
            cout << "Tivy chi kareli bajanel 0-i!" << endl;
    } else {
        cout << "Sxal nshanner!" << endl;
    }
}

