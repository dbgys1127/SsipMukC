#include<iostream>
#pragma warning (disable : 4996)
using namespace std;

int main()
{
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//
	//cout << "arr[3] : " << arr[2] << endl;

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i;
	//for (i = 0; i < 10; i++)
	//{
	//	cout << "배열의 " << i + 1 << " 번째 원소 : " << arr[i] << endl;
	//}
	//int score[5];
	//int hap = 0;
	//float avg;
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << i + 1 << "번째 학생의 성적을 입력하세요. : ";
	//	cin >> score[i];
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << i + 1 << "번째 학생 성적 : "  <<score[i]<<'\n';
	//	hap += score[i];
	//}
	//avg = hap / 5;
	//cout << "a반 평균 : " << avg;

	//-----------------평균보다 낮으면 불합격-------------
	//int score[5];
	//int hap = 0;
	//float avg;
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << i + 1 << "번째 학생의 성적을 입력하세요. : ";
	//	cin >> score[i];
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << i + 1 << "번째 학생 성적 : " << score[i] << '\n';
	//	hap += score[i];
	//}
	//avg = hap / 5;
	//cout << "a반 평균 : " << avg<<'\n';
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	if (score[i] >= avg)
	//	{
	//		cout << i + 1 << " 학생 : 합격 " << '\n';
	//	}
	//	else
	//	{
	//		cout << i + 1 << " 학생 : 불합격 " << '\n';
	//	}
	//}

 
	int i, j;
	int k = 0;
	int arr[1001];
	arr[1] = 1;
	for (i = 2; ; i++)
	{//소수는 1 제외, 2이상 자기보다 작은수 범위에서 나눠지지 않을때 소수라고 한다. 2<=n-1<n
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}// 위 논리에 따라서 j는 나누는 수 2이상 n미만인 수로 나누고, i는 n역할을 한다.
		//나눠지면 for을 벗어남으로써 i가 증가하여 소수가 아닌 수를 점프하게 된다.
		if (i == j)//i와 j가 같다는 것은 n이 자기자신과 나누기 전까지 나눠지지 않았다는 뜻 즉 소수라는 뜻이다. 
		{
			k++;//1000개의 소수를 찾는 것이므로, k는 배열의 주소 즉, arr[0], arr[1], arr[2]를 의미
			arr[k] = i;//각 주소 마다 소수를 대입해준다.
			cout <<k<<" 번째 소수 :" << arr[k] << endl;
			if (k == 1000)//1000개가 차면 종료
				break;
		}
	
	}
}
