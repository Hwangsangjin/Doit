#include <iostream>

using namespace std;

int main()
{
	// 시간 단축을 위한 독립 버퍼 사용
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// N(숫자 개수), Q(질의 개수)
	int N, Q;
	cin >> N >> Q;

	// S(합 배열)
	int S[100000] = {};

	// 숫자 개수만큼 반복
	for (int i = 1; i <= N; i++)
	{
		// 구간 합 구하기
		int Temp;
		cin >> Temp;
		S[i] = S[i - 1] + Temp;
	}

	// 질의 개수만큼 반복
	for (int i = 0; i < Q; i++)
	{
		// 질의 범위 받기
		int Start, End;
		cin >> Start >> End;

		// 부분 합 출력
		cout << S[End] - S[Start - 1] << "\n";
	}

	return 0;
}
