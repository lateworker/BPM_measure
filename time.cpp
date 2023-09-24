#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
int get_t() {
	int start, stop;
	printf("[WAITING] press any button to start...");
	system("pause > nul");
	start = clock();
	puts("");
	printf("[MEASURING] press any button to stop...");
	system("pause > nul");
	stop = clock();
	puts("");
	return stop - start;
}
int main() {
	while(true) {
		cout<<get_t()/10<<"\n\n";
	}
	return 0;
}
