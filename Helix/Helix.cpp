#include <iostream>
using namespace std;
const int N = 7;
int main()
{
	int ar[N][N]{ {} };
	int x = N * N;
	int One = 1, helix = 0, Size = N;
	while (x != 0)
	{
		for (int i = helix; i < Size - helix; i++)
		{
			ar[helix][i] = x;
			x--;
		}
		for (int i = One + helix; i < Size - helix; i++)
		{
			ar[i][Size - One - helix] = x;
			x--;
		}
		for (int i = Size - One - helix; i > helix; i--)
		{
			ar[Size - One - helix][i - One] = x;
			x--;
		}
		for (int i = Size - (One + One + helix); i > helix; i--)
		{
			ar[i][helix] = x;
			x--;
		}
		helix++;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (ar[i][j] < 10)
				cout << " ";
			cout << ar[i][j] << "  ";
		}
		cout << endl << endl;
	}
	return 0;
}