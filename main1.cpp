#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
	int d[10], i;
    for (i = 0; i < 10; i++)
    {
        cin >> d[i];
    }
    for (i = 0; i < 10; i++)
    {
        cout << setw(5) << oct << d[i] << setw(5);
        cout << setw(5) << dec << d[i] << setw(5);
        cout << setw(5) << hex << d[i] << endl;
    }
	return 0;
}