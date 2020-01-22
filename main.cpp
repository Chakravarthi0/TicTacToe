#include<bits/stdc++.h>
using namespace std;
int c = 0;
char p = 'X';
char m[3][3] = { '1','2','3','4','5','6','7','8','9' };
void dis()
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cout <<m[i][j]<< " ";
		cout << "\n";
	}
}
void in()
{
	int n;
	printf("\n player %c enter a postion: ",p);
	cin >> n;
	if (n == 1)
	{
		if (m[0][0] == '1')
		{
			m[0][0] = p;
			c++;
		}
		else
		{
			cout << "\nposition already taken,try other position\n";
			in();
		}
	}
	else if(n == 2)
	{
		if (m[0][1] == '2')
		{
			m[0][1] = p;
			c++;
		}
		else
		{
			cout << "\nposition already taken,try other position\n";
			in();
		}
	}
	else if (n == 3)
	{
		if (m[0][2] == '3')
		{
			m[0][2] = p;
			c++;
		}
		else
		{
			cout << "\nposition already taken,try other position\n";
			in();
		}
	}

	else if (n == 4)
	{
		if (m[1][0] == '4')
		{
			m[1][0] = p;
			c++;
		}
		else
		{
			cout << "\nposition already taken,try other position\n";
			in();
		}
	}
	else if (n == 5)
	{
		if (m[1][1] == '5')
		{
			m[1][1] = p;
			c++;
		}
		else
		{
			cout << "\nposition already taken,try other position\n";
			in();
		}
	}
	else if (n == 6)
	{
		if (m[1][2] == '6')
		{
			m[1][2] = p;
			c++;
		}
		else
		{
			cout << "\nposition already taken,try other position\n";
			in();
		}
	}
	else if (n == 7)
	{
		if (m[2][0] == '7')
		{
			m[2][0] = p;
			c++;
		}
		else
		{
			cout << "\nposition already taken,try other position\n";
			in();
		}
	}
	else if (n == 8)
	{
		if (m[2][1] == '8')
		{
			m[2][1] = p;
			c++;
		}
		else
		{
			cout << "\nposition already taken,try other position\n";
			in();
		}
	}
	else if (n == 9)
	{
		if (m[2][2] == '9')
		{
			m[2][2] = p;
			c++;
		}
		else
		{
			cout << "\nposition already taken,try other position\n";
			in();
		}
	}
}
void tog()
{
	if (p == 'X')
		p = 'O';
	else
		p = 'X';
}
char win()
{
	if ((m[0][0] == m[0][1] && m[0][0] == m[0][2])||(m[1][0]==m[1][1] && m[1][0]== m[1][2])||(m[2][0]==m[2][1] && m[2][0]==m[2][2])||(m[0][0]==m[1][0]&& m[0][0]==m[2][0])||(m[0][1]==m[1][1]&& m[0][1]==m[2][1])||(m[0][2]==m[1][2]&&m[0][2]==m[2][2])||(m[0][0]==m[1][1]&&m[0][0]==m[2][2])||(m[2][0]==m[1][1]&& m[2][0]==m[0][2]))
		return p;
	return 'a';
}
int main()
{
	cout << "\t\t\t\t\t\t\tTIC TAC TOE\n";
	p = 'X';
	dis();
	while (1)
	{
		in();
		dis();
		if (win() == 'X')
		{
			cout << "\nplayer X won\n";
			break;
		}
		else if(win()=='O')
		{
			cout << "\nplayer O won\n";
			break;
		}
		if (c == 9 && win() == 'a')
		{
			cout << "\n\t\tdrawn\n";
			break;
		}
		tog();
	}
	return 0;
}