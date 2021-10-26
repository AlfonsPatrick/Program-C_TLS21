#include <iostream>

using namespace std;

int main()
{
    int n;
    float total;
    float rata2;
    cout << "Masukkan berapa jumlah siswa yang ingin dihitung nilainya: ";
    cin >> n;
    cout << "Anda akan menghitung nilai rata - rata dari " << n << " siswa" << endl;

    int numb[n];
    int i, j;
    for (i = 0; i <= (n - 1); i++)
    {
        cout << "Masukkan data nilai siswa: ";
        cin >> numb[i];
    }

    for (i = 0; i <= (n - 2); i++)
    {
        for (j = i + 1; j <= (n - 1); j++)
        {
            int temp;

            if (numb[i] > numb[j])
            {
                temp = numb[i];
                numb[i] = numb[j];
                numb[j] = temp;
            }
        }
    }

    cout << "Data nilai siswa yang sudah diurutkan adalah: " << endl;
    for (i = 0; i <= (n - 1); i++)
    {
        cout << numb[i] << endl;

    }
    for (i = 0; i <= (n - 1); i++)
    {
        total += numb[i];
    }
    rata2 = total / n;
    cout << "Total nilai: " << total << endl;
    cout << "Rata - rata: " << rata2 << endl;
    return 0;
}
