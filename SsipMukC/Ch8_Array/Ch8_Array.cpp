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

 
	//int i, j;
	//int k = 0;
	//int arr[1001];
	//arr[1] = 1;
	//for (i = 2; ; i++)
	//{//소수는 1 제외, 2이상 자기보다 작은수 범위에서 나눠지지 않을때 소수라고 한다. 2<=n-1<n
	//	for (j = 2; j < i; j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			break;
	//		}
	//	}// 위 논리에 따라서 j는 나누는 수 2이상 n미만인 수로 나누고, i는 n역할을 한다.
	//	//나눠지면 for을 벗어남으로써 i가 증가하여 소수가 아닌 수를 점프하게 된다.
	//	if (i == j)//i와 j가 같다는 것은 n이 자기자신과 나누기 전까지 나눠지지 않았다는 뜻 즉 소수라는 뜻이다. 
	//	{
	//		k++;//1000개의 소수를 찾는 것이므로, k는 배열의 주소 즉, arr[0], arr[1], arr[2]를 의미
	//		arr[k] = i;//각 주소 마다 소수를 대입해준다.
	//		cout <<k<<" 번째 소수 :" << arr[k] << endl;
	//		if (k == 1000)//1000개가 차면 종료
	//			break;
	//	}
	//
	//}

	//int nStudent;
	//cout << "몇명을 입력할껀가요? : ";
	//cin >> nStudent;
	//int arr[5];
	//float avg = 0;
	//int hap = 0;
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << i + 1 << "번째 학생의 성적 : ";
	//	cin >> arr[i];
	//	hap += arr[i];
	//}
	//avg = (float)hap / 5;
	//cout << "학급 평균 : " << avg << '\n';
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	if (arr[i] > avg)
	//	{
	//		cout << i + 1 << " 번째 학생 : 합격" << '\n';
	//	}
	//	else
	//		cout << i + 1 << " 번째 학생 : 불합격" << '\n';
	//}

	//-----------------문제1.입력받은 학생의 성적을 내림차순으로 정렬하세요--------------------

	//int arr[5];
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << i + 1 << "번째 학생의 성적 : ";
	//	cin >> arr[i];
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = i + 1; j < 5; j++)//이 for문은 아래에 5를 예로 들어 5의 오른쪽 자리와 반복해서 비교하는 for문이다.
	//	{
	//		if (arr[i] < arr[j])
	//		{
	//			int tmp = arr[j];
	//			arr[j] = arr[i];
	//			arr[i] = tmp;
	//			break;//여기서 break를 하는 이유는 아래에 5가 비교하는 수보다 작으면, 자리가 바껴지기 때문에, 
	//				  //바뀐 자리에서 그 다음 자리 수와 비교를 해야 되기 때문이다.
	//		}
	//		else
	//			continue;//continue는 만약 5가 다음 자리보다 크지 않으면, 그자리는 뛰어넘고 그다다음 자리와 비교하기 위함이다.
	//	}
	//	cout << arr[i] << '\n';
	//}
	//5,1,7,9,3 a[0]과 a[1]비교
	//1,5,7,9,3 a[1]과 a[2]비교
	//1,5,7,9,3 a[1]과 a[3]비교
	//1,3,7,9,5 a[1]과 a[4]비교
	//1,3,7,9,5 a[2]과 a[3]비교
	//1,3,5,9,7 a[2]과 a[4]비교
	//1,3,5,7,9 a[3]과 a[4]비교 
	//a[0]<a[1] -> tmp=a[1], a[1]=a[0], a[0]=tmp

	//-----------------------문제2. 입력받은 학생의 성적을 막대 그래프로 나타내라---------------------
	// 5점 이면 for문을 돌려서 그만큼 문자를 출력하게 ?
	int arr[5];
	int count = 0;
	
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 학생의 성적 : ";
		cin >> arr[i];
	}//이 안에 아래 for문을 넣으면, 입력과 동시에 값이 출력된다.

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 학생 성적 : ";
		for (int j = 0; j < arr[i]; j++)//조건 부분에 배열을 넣은 이유는 배열의 크기 만큼 문자를 출력하기 위함이다.
		{
			count++;//배열의 값만큼 반복되기 때문에 1씩 증가해서 배열의 값만큼 증가한다.
			for (int k = 0; k < count; k++)//count 값은 배열의 값만큼 쌓여 *을 출력한다.
			{
				cout << "*";
			}
			count = 0;
		}
		cout << '\n';
	}
}
