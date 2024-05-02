// string �ǽ�4

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

// �л� ���� ���� ����
int studentnum;
vector<string> names(studentnum); //3
vector<int>ages; //3
vector<string> births(studentnum); //10, 3

// �л� ���� �Է� �Լ�
void inputStudent()
{
	//int studentnum; // �л� ��
	cout << "�л� ���� �Է��ϼ��� : ";
	cin >> studentnum;

	for (int i = 0; i < studentnum; ++i)
	{
		string name;
		cout << "�̸��� �Է��ϼ��� : ";
		cin >> name;
		names.push_back(name);


		int age;
		cout << "���̸� �Է��ϼ��� : ";
		cin >> age;
		ages.push_back(age);

		string birth;
		cout << "������ �Է����ּ��� (mmdd ����) : ";
		cin >> birth;
		births.push_back(birth);
	}
}


// �л� ���� ��� �Լ�
void printStudent()
{
	cout << endl;

	cout << " �л� ����  " << endl;

	for (int i = 0; i < names.size(); i++)
	{
		cout << "�̸� : " << names[i] << " ���� : " << ages[i] << " ���� : " << births[i] << endl;
		
	}
	cout << endl;
}


// ��ճ��� ���ϴ� �Լ�
void printAverage()
{
	int totalage = 0; // ��ü ���� �� ����

	//ages ������ ����� �� �л��� ���̸� totalage�� ����
	for (int age : ages)
	{
		totalage += age;
	}
	// ��ճ��� ���
	double average = double(totalage) / ages.size();

	cout << "��� ���� : " << average << "��" << endl;
	cout << endl;
}

// ������� ���� ���ϴ� �Լ�
void printFastbirth()
{
	string earlybirth = "1000-12-31";
	string earlyname;
	int earlyage = 0;

	for (int i = 0; i < studentnum; i++)
	{
		if (births[i] < earlybirth)
		{
			earlybirth = births[i];
			earlyname = names[i];
			earlyage = ages[i];
		}
	}
	cout << "���� ���� ������ �̸� : " << earlyname << " ���� : " << earlyage << "�� ���� : " << earlybirth << endl;
	
	cout << endl;
}

int main()
{
	inputStudent();
	cout << endl;

	cout << " 1) �л� ���� ���, 2) ��� ����, 3) ���� ���� ����, 4) ���α׷� ���� " << endl;

	cout << endl;

	int choice;
	while (1)
	{
		cout << "�ñ��� ��ȣ�� �������ּ��� : ";
		cin >> choice;

		switch (choice)
		{
			case 1: // �л��������
				printStudent();
				cout << endl;
				break;

			case 2: // ��ճ���
				printAverage();
				cout << endl;
				break;
			
			case 3: // �����������
				printFastbirth();
				cout << endl;
				break;

			case 4: // ���α׷�����
				cout << "���α׷��� �����մϴ�." << endl;
				return 0;

			default:
				cout << "�߸��� �Է��Դϴ�" << endl;
		}
	}

	return 0;
}

