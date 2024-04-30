//실습1 string

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";
	
	cout << "문자열 길이 : ";
	cout << s.length() << endl;

	int n;
	cout << "몇 번쨰 문자 출력 : ";
	cin >> n;
	cout << n << " 번째 문자는 " << s[n - 1] << endl;

	cout << "two 라는 문자 처음 index : ";
	cout << s.find("two") << endl;

	cout << "two 라는 문자 두번째 index : ";
	cout << s.find("two", s.find("two")+1);
}