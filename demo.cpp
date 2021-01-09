#include<iostream>
#include <string>
using namespace std;
int main() {
    string arr[20];
	string str = "abc    de   fff gh j", tmp;
	int i = 0, d = 0;
	while (i < str.length()) 
    {
		tmp = "";
		if (str[i] == ' ') 
        {
			i++;
			continue;
		}
		while ((str[i] != ' ') && (i < str.length())) 
        {
			tmp += str[i];
			i++;
		}
		if (tmp != "") 
        {
			arr[d] = tmp;
			d++;
		}
	}
	
	for (i = 0; i < d; ++i) {
		cout << arr[i] << "\t";
	}
	return 0;
}