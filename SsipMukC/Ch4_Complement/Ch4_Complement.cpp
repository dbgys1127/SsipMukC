#include <stdio.h>

int main()
{
	int a = 2147483647;
	printf("a : %d\n", a);

	a++;
	printf("a : %d\n", a);//-2147483648
	//int가 표현할 수 있는 최대값을 벗어 났는데 음수가 나옴
	//0111 1111 1111 1111 1111 1111 1111 1111
	//1000 0000 0000 0000 0000 0000 0000 0000 = a++
	//0111 1111 1111 1111 1111 1111 1111 1111
	//이런 것을 오버플로우라고 한다.

	int celsius = 10;

	printf("9*celsius/5+32 : %lf\n", (double)9 * celsius / 5 + 32);
	printf("9/5*celsius+32 : %lf\n", (double)9 /5*celsius + 32);
}
