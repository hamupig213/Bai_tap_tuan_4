#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char  s[50];
    cout << "Nhap chuoi S1 la " ;
    //cin.ignore();
    cin.getline (s,50);
    cout << "Chuoi vua nhap: " << s;
    char s2[50];
    strcpy (s2,s);
    cout << "\n";
    cout << "Chuoi sau khi copy: " << s2 <<"\n";
    
    system("pause");
    return 0;

}