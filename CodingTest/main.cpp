#include <iostream>

using namespace std;

int main()
{
	// 시험을 본 과목의 갯수
	int N = 0;
	cin >> N;

	// 과목 데이터 저장 배열
	int A[1000];

	// 배열의 길이만큼 반복
	for (int i = 0; i < N; i++)
	{
		// 점수 저장
		cin >> A[i];
	}

	// 총점과 최고점 변수
	long Sum = 0;
	long Max = 0;

	// 배열의 길이만큼 반복
	for (int i = 0; i < N; i++)
	{
		// 최고점을 판별하여 저장
		if (A[i] > Max)
		{
			Max = A[i];
		}

		// 총점 계산
		Sum += A[i];
	}

	// 총점 * 100 / 최고점 / 과목수 계산 후 출력
	double Result = Sum * 100.0 / Max / N;
	cout << Result << "\n";

	return 0;
}
