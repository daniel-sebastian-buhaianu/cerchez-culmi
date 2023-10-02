#include <fstream>

using namespace std;

ifstream fin("culmi.in");
ofstream fout("culmi.out");

int main()
{
	int n;
	fin >> n;

	int ultim[n], nr, i, x, st, dr, mij;

	for (nr = i = 0; i < n; i++)
	{
		fin >> x;

		st = -1, dr = nr;

		while (dr-st > 1)
		{
			mij = st + (dr-st)/2;

			if (ultim[mij] > x)
			{
				st = mij;
			}
			else
			{
				dr = mij;
			}
		}
		
		if (dr == nr)
		{
			ultim[nr++] = x;
		}
		else
		{
			ultim[dr] = x;
		}
	}

	fin.close();

	fout << nr;

	fout.close();

	return 0;
}

