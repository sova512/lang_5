#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("/root/lab6/files/data_v2.bin");
    ofstream f2("/root/lab6/files/data_v2_1.bin");
    f.seekg(0, ios::end);
	const int fsize = f.tellg();
	f.seekg(0, ios::beg);
	char *buf = new char[fsize];
	float *buf2 = new float[fsize];
	f.read(buf, fsize);
    int i = 0;
    /*for (i = 0; i < fsize; i++)
	cout << (double)buf[i] << endl;
    */
	for (i = 0; i < fsize; i++)
	{
		buf2[i] = 1/((float)buf[i]);
        cout << buf2[i] << endl;
	}
	f2.write((char*)buf2, fsize);
    f.close();
    f2.close();
    delete[] buf;
    delete[] buf2;
	return 0;
}