// �ǽ� 2

#include <iostream>
#include <string>
using namespace std;

bool strprint(string* ptr)
{
	string str(*ptr);
	int word_count = 0; // 1111 // 111��
	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]) == false) // ���� �߰��� �ȵǾ��� ��
		{
			word_count++;
		}
		//cout << word_count;
	}

	if (word_count == 0)  // ��� �����϶�
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
			cout << " ���� ���Է� ���ּ���(���ڷθ�) : ";
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

	cout << "ù ��° ���ڿ� �Է� : ";
	cin >> str1;
	ptr = &str1;
	stragain(ptr);


	cout << "�� ��° ���ڿ� �Է� : ";
	cin >> str2;
	ptr = &str2;
	stragain(ptr);

	int num1, num2;

	num1 = stoi(str1);
	num2 = stoi(str2);

	cout << "�Է� ���� �� ������ �� : " << str1.append(str2) << endl;
	cout << "�Է� ���� �� ������ �� : " << num1 + num2 << endl;


	return 0;
}