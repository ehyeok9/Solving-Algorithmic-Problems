#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int num;
	cin >> num;
	
	if ((num >= 30 && num <= 40) || (num >= 60 && num <= 70)){
		cout << "win";
	}
	else{
		cout << "lose";
	}
	return 0;
}
