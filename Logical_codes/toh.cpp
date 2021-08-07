#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char f_rod,	char t_rod, char a_rod)
{
	if (n == 1)
	{
		cout << "Move disk 1 from rod " << f_rod <<" to rod " << t_rod<<endl;
		return;
	}
	towerOfHanoi(n - 1, f_rod, a_rod, t_rod);
	cout << "Move disk " << n << " from rod " << f_rod <<" to rod " << t_rod << endl;
	towerOfHanoi(n - 1, a_rod, t_rod, f_rod);
}

int main()
{
	int n = 4; // total disks
	towerOfHanoi(n, 'A', 'C', 'B');
	return 0;
}

