#include<iostream>

using namespace std;

int main()
{
	//int i, SIZE; //score;
	//float hap = 0;
	//float avg=0;
	//
	//cout << "�� ���� ����� ���? : ";
	//cin >> SIZE;
	//
	//for (i = 0; i < SIZE; i++)
	//{
	//	int score;
	//	//int hap=0;//�̷��� ����, ���� �ۿ� �־� ������ for�� �ۿ��� ������� ��� ����� �Ұ��ϴ�.
	//	//���� ���񺰷� ��� �����ؼ� ���� ������ ���� ���Ѵ�.
	//	cout << i + 1 << " ��° ���� ���� : ";
	//	cin >> score;
	//	hap = hap + score;
	//}
	//avg = hap / i;
	//cout << "��� : " << avg << endl;

	//int Question;
	//
	//cout << "��ǻ�Ͱ� �����ϴ� ���� ������ \n";
	//for (;;)
	//{
	//	cin >> Question;
	//	if (Question == 7)
	//	{
	//		cout << "Alright!!!";
	//		break;
	//	}
	//	else
	//		cout << "��ã����?\n";
	//}

	//for (int i = 0; i <= 10; i += 1)
	//{
	//	if (i % 3 == 0)
	//		continue;
	//	cout << i << endl;
	//}

	//------------������----------

	//for (int i=2; i < 10; i++)
	//{
	//	cout << "***" << i << "��***"<<'\n';
	//	for (int j = 1; j < 10; j++)
	//	{
	//		cout << i << " x " << j << " : " << i * j << '\n';
	//	}
	//	cout << '\n';
	//}

	//------�ﰢ���� ����Ѵ�.
	//a(0)=1, a(1)=3, a(2)=5, a(n)=n*2+1
	// * *** *****
	//int hap=0 �̷��� �ϸ�, hap���� �ʱ�ȭ �ȵǰ� ��� �����Ǽ� �´�.
	//int n;
	//cout << "�� �Է� : ";
	//cin >> n;
	//for (int i = 0; i < n; i++)//3 ,0,1	
	//{
	//	for (int hap=0; hap < 2 * i + 1; hap++)//(0; 1;0),0,3,0
	//	{
	//		cout << '*';//1,
	//	}
	//	cout << '\n';
	//}

	//--------�ﰢ�� �ݴ�� ���
	//a(0) = 5, a(1) = 3, a(1) = 1, a(n) = n * 2 + 1
		//* ********
		//int hap = 0 �̷��� �ϸ�, hap���� �ʱ�ȭ �ȵǰ� ��� �����Ǽ� �´�.
	//int n;
	//cout << "�� �Է� : ";
	//cin >> n;
	//for (int i = n-1; i >= 0; i--)//3 ,0,1	
	//{
	//	for (int hap = 0; hap < 2 * i + 1; hap++)//(0; 1;0),0,3,0
	//	{
	//		cout << '*';//1,
	//	}
	//	cout << '\n';
	//}

	//---------1000������ 3 �Ǵ� 5�� ����� �ڿ������� ���� ���Ѵ�---------
	// 3, 6, 9,12 .....�� ��
	// 5, 10, 15.....�� ��

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

	//---------N ���� �Է� �ް� 1���� N ������ ���� ���
	//int gop = 1;
	//int N;
	//cout << "�� : ";
	//cin >> N;
	//for (int i = 1; i <= N; i++)
	//{
	//	gop *= i;
	//}
	//cout << gop << endl;

	//---------�Ǻ���ġ�� ¦�� ���� ��----------------
	//¦���� �� i%2==1 �̸� 
	//hap=0 -> �� ���� hap+= �ض�
	//�Ǻ���ġ ����: a(0)=1, a(1)=1, a(2)=a(0)+a(1) ->a(n)=a(n-1)+a(n-2)
	//�Ǻ���ġ�� for�� ���� ¦�����տ� for�� ���� �غ��ؾ���
	//n=i, 
	//int hap = 1;
	//int aN=0;
	//int aN_2 = 1;
	//int aN_1=1;
	//
	////�Ǻ���ġ�� for��
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

	//---------------���� 6----------------

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
		//cout << "�� : "<<count<< " ��" << endl;

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
		
	//-----------------------------���� 7--------------------------
	//N�� 2�� ������ �������� 0�̸� 
	//int N;
	//int i = 2;
	//
	//cout << "�� �Է� : ";
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