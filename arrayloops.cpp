#include <iostream>
#include <vector>

using std::cout, std::endl, std::vector;

int newfunction(){
	vector<int> numbers = {1,2,3,4};
	for (int num : numbers){
		cout << num << endl;
	}
	return 0;
}



int main(){
	int myArray[] = {2,4,6,8};
	for (int i = 0; i < 4; i++){
		cout << myArray[i] << endl;
	}
	newfunction();
	return 0;
}
