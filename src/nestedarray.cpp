#include <iostream>
#include <vector>

using std::cout, std::endl, std::vector;

int vfunction(){
	vector<int> numbers = {1, 2, 3, 4, 5};
	for (int nums : numbers){
		cout << nums;
	}
	cout << endl;
	for (int k : numbers){
		for (int l : numbers){
			cout << "(" << k << "," << l << ")";
		}
		cout << endl;
	}
cout << endl;
return 0;
}

int main(){
	vfunction();
	int newArray[] = {2, 4, 6, 8, 2};
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			cout << "(" << i << "," << j << ")";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
