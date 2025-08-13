#include <iostream>

using namespace std;

double function(double y);

main() {
	double yn[4];
	double h = 0.01;
	yn[0] = 1; 
	
	for(int i = 0; i<5; i++) {
		yn[i+1] = yn[i] + h*function(yn[i]);
		cout<<yn[i+1]<<endl;
	}
}

double function(double y) {
	double f = -y;
	return f;
}