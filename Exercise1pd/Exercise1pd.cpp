#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array : ";
		cin >> n;

		if (n >= 20)
		{
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan adalah 20 elemen. \n";
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}
void insertion()
{
	int temp;
	int j;

	for (int i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;

		cout << endl;
		cout << "\nPass " << i << ": ";
		for (int k = 0; k < n; k++)
		{
			cout << arr[k] << " ";
		}
	}
}

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double rata) {
	if (rata >= 70 )
		return "Diterima";
	else
		return "Ditolak";
}

string status2(double rata, double nil) {
	if (rata >= 70 || nil >= 80)
		return "Diterima";
	else
		return "Ditolak";
}

int main() {
	double nilM, nilB;
	cout << "Masukan nilai Matematika = ";
	cin >> nilM;
	cout << "Masukan nilai Bahasa Inggris = ";
	cin >> nilB;
	cout << "Status kelulusan = " << status(rerata(nilM, nilB));
	cout << "\nStatus kelulusan ke-2 = " << status2(rerata(nilM, nilB), nilM);
	cout << "Masukan nama = ";
	return 0;

}