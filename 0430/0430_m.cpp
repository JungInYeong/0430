//�ǽ�1 string

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";
	
	cout << "���ڿ� ���� : ";
	cout << s.length() << endl;

	int n;
	cout << "�� ���� ���� ��� : ";
	cin >> n;
	cout << n << " ��° ���ڴ� " << s[n - 1] << endl;

	cout << "two ��� ���� ó�� index : ";
	cout << s.find("two") << endl;

	cout << "two ��� ���� �ι�° index : ";
	cout << s.find("two", s.find("two")+1);
}