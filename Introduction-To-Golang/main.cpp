#include <thread>
#include <iostream>
using namespace std;

void func() {
	cout << "Inside of func(): " << endl;
}

int main() {
	thread th(&func);
	th.join();
	cout << "Outside thread" << endl;
}
