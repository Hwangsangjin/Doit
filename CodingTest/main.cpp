#include <iostream>

using namespace std;

int main()
{
	// N값 받기
	int N = 0;
	cin >> N;

	// 숫자를 string 변수(Numbers)로 입력받기
	string Numbers;
	cin >> Numbers;

	// Sum 변수 선언
	int Sum = 0;

	// Numbers 길이만큼 반복
	for (int i = 0; i < Numbers.length(); i++)
	{
		// Numbers[i]를 정수로 계산하여 Sum에 누적하기
		Sum += Numbers[i] - '0';
	}

	// Sum 출력
	cout << Sum << "\n";

	return 0;
}
