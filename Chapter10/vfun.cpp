#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> values;
	int c, i, len;
	cin >> c;

	while(c != -1){
		values.push_back(c);
		cin >> c;
	}
	len = values.size();
	for(i = 0; i < len; i++) {
		cout << values[i] << endl;
	}
}
