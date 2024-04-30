// 실습 2

#include <iostream>
#include <string>
using namespace std;

bool strprint(string* ptr)
{
	string str(*ptr);
	int word_count = 0; // 1111 // 111ㅣ
	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]) == false) // 문자 발견이 안되었을 때
		{
			word_count++;
		}
		//cout << word_count;
	}

	if (word_count == 0)  // 모두 숫자일때
	{
		return true;
	}
	else 
	{
		return false;
	
	}
}

void stragain(string* ptr)
{
	while (1)
	{
		if (!strprint(ptr))
		{
			cout << " 숫자 재입력 해주세요(숫자로만) : ";
			cin >> *ptr;
		}
		else
		{
			break;
		}
	}
}



int main()
{

	string str1;
	string str2;
	string* ptr;

	cout << "첫 번째 문자열 입력 : ";
	cin >> str1;
	ptr = &str1;
	stragain(ptr);


	cout << "두 번째 문자열 입력 : ";
	cin >> str2;
	ptr = &str2;
	stragain(ptr);

	int num1, num2;

	num1 = stoi(str1);
	num2 = stoi(str2);

	cout << "입력 받은 두 숫자의 수 : " << str1.append(str2) << endl;
	cout << "입력 받은 두 숫자의 합 : " << num1 + num2 << endl;


	return 0;
}