#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// 시간 단축을 위한 독립 버퍼 사용
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// N(수열의 개수), M(나누어떨어져야 하는 수)
	int N, M;
	cin >> N >> M;

	// S(합 배열), C(같은 나머지를 가지는 인덱스를 카운터하는 배열)
	vector<long> S(N, 0);
	vector<long> C(M, 0);

	// 정답
	long Answer = 0;

	// 처음 값 받기
	cin >> S[0];

	// 1 ~ N
	for (int i = 1; i < N; i++)
	{
		int Temp = 0;
		cin >> Temp;

		// 합 배열 저장
		S[i] = S[i - 1] + Temp;
	}

	// 0 ~ N
	for (int i = 0; i < N; i++)
	{
		// 합 배열의 모든 값에 % 연산 수행하기
		int Remainder = S[i] % M;
		
		// 0 ~ i까지의 구간 합 자체가 0일 때 정답에 더하기
		if (Remainder == 0)
		{
			Answer++;
		}

		// 나머지가 같은 인덱스의 개수 세기
		C[Remainder]++;
	}

	// 0 ~ M
	for (int i = 0; i < M; i++)
	{
		// 나머지가 같은 인덱스 중 2개를 뽑는 경우의 수를 더하기
		if (C[i] > 1)
		{
			Answer += C[i] * (C[i] - 1) / 2;
		}
	}

	// 결과값 출력
	cout << Answer << "\n";

	return 0;
}
