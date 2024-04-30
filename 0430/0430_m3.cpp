//실습3 string

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "Codingon";

	for (int i = 0; i < s.size(); i++)
	{
		s[i] = towlower(s[i]);
	}
	cout << "소문자 변환 : " << s << endl;

	//ding 문자열 반환
	cout<< s.substr(2,4) <<"문자열 반환" << endl;


	// cooooon 하려면 먼저 가운데 지움
	s.erase(2, 4);
	cout << s.insert(2,"oooo") << endl;

	cout << s.erase(2, 5) << endl;

	


	return 0;
}