#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int array[3];
	int input[3] = {3,8,1};
	for(int i = 0; i < 3; ++i){
		array[i] = input[i];
	}

	sort(array,array+3);

	for(int i = 0; i < 3; ++i){
		cout << array[i]  << " ";
	}
	cout << endl;

	return 0;
}