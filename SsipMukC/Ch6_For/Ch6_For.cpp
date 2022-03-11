#include<iostream>

using namespace std;

int main()
{
	//int i, SIZE; //score;
	//float hap = 0;
	//float avg=0;
	//
	//cout << "몇 과목 평균을 희망? : ";
	//cin >> SIZE;
	//
	//for (i = 0; i < SIZE; i++)
	//{
	//	int score;
	//	//int hap=0;//이렇게 쓰면, 범위 밖에 있어 변수가 for문 밖에서 사라져서 평균 계산이 불가하다.
	//	//또한 과목별로 계속 누적해서 값을 저장을 하지 못한다.
	//	cout << i + 1 << " 번째 과목 점수 : ";
	//	cin >> score;
	//	hap = hap + score;
	//}
	//avg = hap / i;
	//cout << "평균 : " << avg << endl;

	//int Question;
	//
	//cout << "컴퓨터가 생각하는 수를 맞혀봐 \n";
	//for (;;)
	//{
	//	cin >> Question;
	//	if (Question == 7)
	//	{
	//		cout << "Alright!!!";
	//		break;
	//	}
	//	else
	//		cout << "못찾겠쥐?\n";
	//}

	//for (int i = 0; i <= 10; i += 1)
	//{
	//	if (i % 3 == 0)
	//		continue;
	//	cout << i << endl;
	//}

	//------------구구단----------

	//for (int i=2; i < 10; i++)
	//{
	//	cout << "***" << i << "단***"<<'\n';
	//	for (int j = 1; j < 10; j++)
	//	{
	//		cout << i << " x " << j << " : " << i * j << '\n';
	//	}
	//	cout << '\n';
	//}

	//------삼각형을 출력한다.
	//a(0)=1, a(1)=3, a(2)=5, a(n)=n*2+1
	// * *** *****
	//int hap=0 이렇게 하면, hap에서 초기화 안되고 계속 누적되서 는다.
	//int n;
	//cout << "수 입력 : ";
	//cin >> n;
	//for (int i = 0; i < n; i++)//3 ,0,1	
	//{
	//	for (int hap=0; hap < 2 * i + 1; hap++)//(0; 1;0),0,3,0
	//	{
	//		cout << '*';//1,
	//	}
	//	cout << '\n';
	//}

	//--------삼각형 반대로 출력
	//a(0) = 5, a(1) = 3, a(1) = 1, a(n) = n * 2 + 1
		//* ********
		//int hap = 0 이렇게 하면, hap에서 초기화 안되고 계속 누적되서 는다.
	//int n;
	//cout << "수 입력 : ";
	//cin >> n;
	//for (int i = n-1; i >= 0; i--)//3 ,0,1	
	//{
	//	for (int hap = 0; hap < 2 * i + 1; hap++)//(0; 1;0),0,3,0
	//	{
	//		cout << '*';//1,
	//	}
	//	cout << '\n';
	//}

	//---------1000이하의 3 또는 5의 배수인 자연수들의 합을 구한다---------
	// 3, 6, 9,12 .....의 합
	// 5, 10, 15.....의 합

	//int hap = 0;
	//
	//for (int i = 0; i <= 20; i++)
	//{
	//	if (i % 3 == 0 || i % 5 == 0)
	//	{
	//		hap = hap + i;
	//	}
	//}
	//cout << hap << endl;//3, 5,6,9,10,12,15,18,20=98

	//---------N 값을 입력 받고 1부터 N 까지의 곱을 출력
	//int gop = 1;
	//int N;
	//cout << "값 : ";
	//cin >> N;
	//for (int i = 1; i <= N; i++)
	//{
	//	gop *= i;
	//}
	//cout << gop << endl;

	//---------피보나치의 짝수 항의 합----------------
	//짝수의 합 i%2==1 이면 
	//hap=0 -> 그 값을 hap+= 해라
	//피보나치 수열: a(0)=1, a(1)=1, a(2)=a(0)+a(1) ->a(n)=a(n-1)+a(n-2)
	//피보나치용 for문 따로 짝수항합용 for문 따로 준비해야함
	//n=i, 
	//int hap = 1;
	//int aN=0;
	//int aN_2 = 1;
	//int aN_1=1;
	//
	////피보나치용 for문
	//
	//for (int i = 3; ; i++)
	//{
	//	aN = aN_1 + aN_2;
	//	if (i%2==0)
	//	{
	//		hap += aN;
	//	}
	//	if (aN > 1000000)
	//	{
	//		cout << hap << endl;
	//		break;
	//	}
	//	aN_2 = aN_1;
	//	aN_1 = aN;
	//}
	//
	//
	//int j, fibo, sum;
	//int fibo_first = 1;
	//int fibo_second = 1;
	//
	//sum = fibo_second;
	//
	//for (j = 3; ; j++)
	//{
	//	fibo = fibo_first + fibo_second;
	//
	//	if (j % 2 == 0)
	//	{
	//		sum += fibo;
	//	}
	//
	//	if (fibo > 1000000)
	//	{
	//		cout << sum << endl;
	//		break;
	//	}
	//	fibo_first = fibo_second;
	//	fibo_second = fibo;
	//}

	//---------------문제 6----------------

	//int a;
	//int b ;
	//int c ;
	//int count = 0;
	//int hap=0;
	
	//}
		//for (a = 1; a <= 2000; a++)
		//{
		//	for (b = 1; b <= 2000; b++)
		//	{
		//		for (c = 1; c <= 2000; c++)
		//		{
		//			if (a < b && b < c)
		//			{
		//				if (a + b + c == 2000)
		//				{
		//					hap = a + b + c;
		//					count++;
		//					//cout << a << "+" << b << "+" << c << "=" << hap << '\n';
		//				}
		//			}
		//			continue;
		//		}
		//	}
		//}
		//cout << "총 : "<<count<< " 개" << endl;

	//int a, b, c;
	//int num = 0;
	//
	//for (c = 1; c <= 2000; c++) {
	//	for (b = c + 1; b > c; b++) {
	//		a = 2000 - b - c;
	//		if (a > b && b > c) {
	//			num++;
	//		}
	//		else break;
	//	}
	//}
	//printf("%d", num);
		
	//-----------------------------문제 7--------------------------
	//N을 2로 나눠서 나머지가 0이면 
	//int N;
	//int i = 2;
	//
	//cout << "수 입력 : ";
	//cin >> N;//6
	//while (N != 1) // 3
	//{
	//	
	//	if (N % i == 0)// 6%2=0
	//	{
	//		N /= i;// nextN=3;
	//		cout << i << endl;
	//	}
	//	else
	//	{
	//		i++;
	//	}
	//}
}