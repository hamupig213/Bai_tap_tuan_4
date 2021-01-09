#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char str1[50], str2[50];
    cout << "Nhap chuoi 1: ";
    cin.getline(str1,50);
    cout << "Nhap chuoi 2: ";
    cin.getline(str2,50);

    if(strcmp(str1,str2) == 0)
        cout <<"2 chuoi bang nhau.";
    else if (strcmp(str1,str2 ) > 0)
        cout <<"Chuoi 1 lon hon chuoi 2.";
    else 
        cout <<"Chuoi 1 nho hon chuoi 2.";

    return 0;
}