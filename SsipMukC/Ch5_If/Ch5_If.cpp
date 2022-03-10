#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	//int i;
	//printf("숫자를 입력하시오 : ");
	//scanf_s("%d", &i);
	//
	//if (i == 7)
	//	printf("행운의 수를 입력했군요!");

	double i, j;
	printf("숫자를 2개 입력하시오 : ");
	scanf_s("%lf %lf", &i, &j);

	if (j == 0)
	{
		cout << "0으로 나눌수 없어요.\n";
		return 0;
	}
	
	cout << "나눈 값은 : " << i / j << '\n';
	return 0;

}