#include<iostream>

using namespace std;

int main()
{
	int score[3][2];
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
			{
				cout << i + 1 << " ��° �л��� ���� ������ �Է��ϼ���. : ";
				cin >> score[i][j];
			}
			else
			{
				cout << i + 1 << " ��° �л��� ���� ������ �Է��ϼ���. : ";
				cin >> score[i][j];
			}
		}
	}
	cout << '\n';
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
			{
				cout << i + 1 << " ��° �л��� ���� ���� : " << score[i][j]<<'\n';
			}
			else
			{
				cout << i + 1 << " ��° �л��� ���� ���� : " << score[i][j] << '\n';
			}
		}
	}
	
}