#include <iostream>
#include <vector>

using namespace std;

vector<int> count (4,0);

int main(){
	count[0] = 7;
	count[1] = count[0] * 2;
	count[2]++;
	count[3] -= 60;

	int i;
	for (i = 0; i < 4; i++){
		cout << count[i] << endl;
	}

	return 0;	
}
