# 2018426

// ...

#include <iostream>
#include <vector>
using namespace std;

class palace
{
public:
	int siz;
	int key;
	vector<char> data;
	int posK, posT;

	palace(int _s, int _k) :siz(_s), key(_k) {};
	friend istream& operator >> (istream& s, palace& x)
	{
		char tmp;
		for (int i = 0; i < x.siz*x.siz; i++)
		{
			s >> tmp;
			x.data.push_back(tmp);
		}
		return s;
	}
	friend ostream& operator << (ostream& s, const palace& x)
	{
		for (int i = 0; i < x.siz; i++)
		{
			for (int j = 0; j < x.siz; j++)
			{
				cout << x.data[i*x.siz + j] << ' ';
			}
			cout << endl;
		}
		return s;
	}

};

//class path
//{
//public:
//
//};

int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		palace D(m, n);
		cin >> D;
		cout << D;
	}
	return 0;
}
