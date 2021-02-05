#include <iostream>

using namespace std;


class asciicode {
public:
	char a;
	int chartoint() {
		return int(a); // or you can write 'return (int) a;'
	}
};



int main() {
	asciicode q;
	cin >> q.a;
	cout << q.chartoint();	
}