#include <iostream>
using namespace std;

long int bin(long int x)
{
    if (x == 0)
        return 1;
    long int r = x;
    for (int i = r - 1;i > 0;i--)
    {
        r = r * i;
    }
    return r;
}
int main()
{
    cout << "Write n and k: " << endl;
    long int n = 0;
    long int k = 0;
    cin >> n;
    cin >> k;
    long int result = 0;
    long int fn = bin(n);
    long int fk = bin(k);
    long int fnk = bin(n - k);


    result = fn / (fk * fnk);

    cout << endl << "C = " << result << endl;


    int f, div = 2;
    cout << "N = ";
    cin >> f;
    cout << f << " = 1";
    while (f > 1)
    {
        while (f % div == 0)
        {
            cout << " * " << div;
            f = f / div;
        }
        div++;
    }
    cin.get(); cin.get();
    return 0;
}