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
	int t, n, bpm;
	t = n = bpm = 0;
	scanf("%d", &t);
	if(!t) t = get_t()/10;
	t *= t;
	n = 60000/t+(60000%t?1:0);
	printf("%d\n3*%d+%d 4*%d+%d 5*%d+%d\n", n, n/3, n%3, n/4, n%4, n/5, n%5);
	scanf("%d", &t);
	if(!t) t = get_t()/10;
	n *= 6000;
	bpm = 2*n/t-n/t;
	printf("BPM:%d\n", bpm);
	system("pause");
	return 0;
}
