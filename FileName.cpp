#include<iostream>
using namespace std;
class toy
{ public:
	toy(int q, int p) 
	{
		quan = q;
		price = p;
	}
	int get_quan()
	{
		return quan;
	}
    int get_price() 
    {
		return price;
    }
private:
	int quan, price;
};
					
int main()
{
	toy op[3][2] = {
		toy(10, 20), toy(30, 48),
		toy(50, 68), toy(70, 80),
		toy(90, 16), toy(11, 120),
	};
	for (int i = 0; i < 3; i++)
	{
		cout << op[i][0].get_quan() << ", ";
		cout << op[i][0].get_price() << "\n ";
		cout << op[i][1].get_quan() << ", ";
		cout << op[i][1].get_price() << "\n ";

	}
	cout << endl;
}
