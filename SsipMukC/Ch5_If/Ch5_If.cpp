#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	//int i;
	//printf("���ڸ� �Է��Ͻÿ� : ");
	//scanf_s("%d", &i);
	//
	//if (i == 7)
	//	printf("����� ���� �Է��߱���!");

	double i, j;
	printf("���ڸ� 2�� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf", &i, &j);

	if (j == 0)
	{
		cout << "0���� ������ �����.\n";
		return 0;
	}
	
	cout << "���� ���� : " << i / j << '\n';
	return 0;

}