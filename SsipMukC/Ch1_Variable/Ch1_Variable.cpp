#include<stdio.h>
int main()
{
	int a; 
	// a 라는 변수를 쓰겠다고 컴파일러에게 알리는 것
	// int 형 데이터(4바이트=8비트) 변수 a에 -2147483648에서 +2147483647까지 정수를 보관할 수 있다.
	//a = 10;
	a = 10000000000;
	//int의 저장범위를 벗어나면 이상한 값을 뱉어낸다.
	printf("a 의 값은 : %d\n", a);


	int b;
	b = 127;
	printf("b 를 %d 진수로 하면 %o 이다. \n ", 8, b);
	printf("b 를 %d 진수로 하면 %d 이다. \n ", 10, b);
	printf("b 를 %d 진수로 하면 %x 이다. \n ", 16, b);
	

	float c = 3.141592f;//'f'를 붙이는 이유는 안붙히면 double로 인식하기때문
	double d = 3.141592;
	printf("c : %f\n", c);
	printf("d : %f\n", d);
	printf("실수형 소수점 안붙히면 %f\n", 1);//이상한 값이 출력됨
	printf("실수형 소수점 붙히면 %f\n", 1.0);

	float aNum = 3.141592f;
	double bNum = 3.141592;
	int cNum = 123;

	printf("aNum : %.2f\n", aNum);//소수 2째자리까지만 출력
	printf("bNum : %6.3f\n", bNum);//.과 소수 3째자리포함 6자리 출력
	printf("cNum : %5d\n", cNum);//공백 포함5자리 출력 
	//이때 변수에 6자리 입력하면 다나온다.
	//소수는 지정 자리수를 초과하면 잘리는것이 차이점이다.


	return 0;
}