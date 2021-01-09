#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int n;
    cout <<"Nhap vao so nguyen N = "; cin >> n;
    
    int a[n];
    for (int i=0; i<n; i++)
    {
        cout << " a[i] = " ;
        cin >> a[i];
    
    }

    cout << "Mang theo thu tu nguoc lai la: \n";
    for (int i=n-1; i>=0; i--)
    {
        cout << a[i] << "\t" ;
    }

    return 0;
}