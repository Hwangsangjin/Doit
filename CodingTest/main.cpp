#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// 시간 단축을 위한 독립 버퍼 사용
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// N(배열 크기), Q(질의 수)
	int N, Q;
	cin >> N >> Q;

	// A(원본 배열), D(합 배열)
	vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));
	vector<vector<int>> D(N + 1, vector<int>(N + 1, 0));

	// N만큼 반복
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			// 원본 배열 저장
			cin >> A[i][j];

			// 합 배열 저장
			D[i][j] = D[i][j - 1] + D[i - 1][j] - D[i - 1][j - 1] + A[i][j];
		}
	}

	// Q만큼 반복
	for (int i = 0; i < Q; i++)
	{
		int X1, Y1, X2, Y2;
		cin >> X1 >> Y1 >> X2 >> Y2;

		// 질의 계산 및 출력
		int Result = D[X2][Y2] - D[X1 - 1][Y2] - D[X2][Y1 - 1] + D[X1 - 1][Y1 - 1];
		cout << Result << "\n";
	}

	return 0;
}
