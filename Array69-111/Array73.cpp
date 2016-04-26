//73 78-additional array 82 and 86 - (ssuv na 1 el., k el., simple shift looped shift)

//Array73
#include <iostream>
#include <array>
using namespace std;
int main() {
	array <float, 10> A={1,2,3,4,5,6,7,8,9,10};
	int ind_k, ind_l;
	float temp;
	cout << "Vvedit' index" << endl;
	cin >> ind_k >> ind_l;
	if (!(0 <= ind_k && ind_k < ind_l && ind_l <= A.size()-1)) {
		cout << "Chysla ne vidpovidaut umovi!" << endl;
	}
	else {
//		for (int i = 0; i < A.size(); i++) {
//			cout << "Vvedit chyslo" << endl;
//			cin >> A[i];
//		}
		for (int i = 1; i <= (ind_l - ind_k - 1) / 2; i++) {
			swap(A[ind_k + i], A[ind_l - i]);
		}
		cout << "Noviy massiv" << endl;
		for(int i = 0; i < A.size(); i++){
			cout << A[i] << endl;
		}
	}
	return 0;
}