#include <iostream>
#include <vector>
#include <string>


using std::cout, std::vector, std::endl, std::string;

int main(){
	vector<string> fruits = {"apple", "banana", "cherry", "date"};

	cout << "Fruits list:" << endl;
	for (const auto& fruit : fruits){
		cout << fruit << endl;
	}

	cout << "\nFruit pairs:" << endl;
	for (size_t i = 0; i < fruits.size(); ++i){
		for (size_t j = i + 1; j < fruits.size(); ++j){
			cout << fruits[i] << " & " << fruits[j] << endl;
		}
	}
	return 0;
}
