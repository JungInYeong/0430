//�ǽ�3 string

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "Codingon";

	/*for (int i = 0; i < s.size(); i++)
	{
		s[i] = towlower(s[i]);
	}*/
	s[0] = towlower(s[0]);
	cout << "�ҹ��� ��ȯ : " << s << endl;

	//ding ���ڿ� ��ȯ
	cout<< s.substr(2,4) <<"���ڿ� ��ȯ" << endl;


	// cooooon �Ϸ��� ���� ��� ����
	/*s.erase(2, 4);
	cout << s.insert(2,"oooo") << endl;*/
	cout << s.replace(2, 5, "oooo") << endl;

	//cout << s.erase(2, 5) << endl;
	cout << s.erase(1, 4);
	


	return 0;
}