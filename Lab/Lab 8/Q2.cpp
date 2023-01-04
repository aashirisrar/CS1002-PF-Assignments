#include <iostream>
using namespace std;

void DrawRectangle(int h, int w)
{
	if (h > 0 && w > 0)
	{
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Rectangle printing is not possible!";
	}

}


int main()
{
	int height, width;

	cout << "Enter the height of the rectange:";
	cin >> height;

	cout << "Enter the width of the rectangle:";
	cin >> width;

	DrawRectangle(height, width);

	system("pause");

	return 0;
}