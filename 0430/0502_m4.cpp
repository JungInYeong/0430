// string 실습4

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

// 학생 정보 저장 벡터
int studentnum;
vector<string> names(studentnum);	// 이름저장 벡터
vector<int>ages;					// 나이 저장 벡터
vector<string> births(studentnum);	// 생일 저장 벡터

// 학생 정보 입력 함수
void inputStudent()
{
	//int studentnum; // 학생 수
	cout << "학생 수를 입력하세요 : ";
	cin >> studentnum;

	for (int i = 0; i < studentnum; ++i)
	{
		string name;
		cout << "이름을 입력하세요 : ";
		cin >> name;
		names.push_back(name);


		int age;
		cout << "나이를 입력하세요 : ";
		cin >> age;
		ages.push_back(age);

		string birth;
		cout << "생일을 입력해주세요 (mmdd 형식) : ";
		cin >> birth;
		births.push_back(birth);
	}
}


// 학생 정보 출력 함수
void printStudent()
{
	cout << endl;

	cout << " 학생 정보  " << endl;

	for (int i = 0; i < names.size(); i++)
	{
		cout << "이름 : " << names[i] << " 나이 : " << ages[i] << " 생일 : " << births[i] << endl;
		
	}
	cout << endl;
}


// 평균나이 구하는 함수
void printAverage()
{
	int totalage = 0; // 전체 나이 합 변수

	//ages 변수에 저장된 각 학생의 나이를 totalage에 더함
	for (int age : ages)
	{
		totalage += age;
	}
	// 평균나이 계산
	double average = double(totalage) / ages.size();

	cout << "평균 나이 : " << average << "세" << endl;
	cout << endl;
}

// 가장빠른 생일 구하는 함수
void printFastbirth()
{
	string earlybirth = "1231"; //초기값은 가장 큰 생일값
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
	cout << "가장 빠른 생일은 이름 : " << earlyname << " 나이 : " << earlyage << "세 생일 : " << earlybirth << endl;
	
	cout << endl;
}

int main()
{
	inputStudent();
	cout << endl;

	cout << " 1) 학생 정보 출력, 2) 평균 나이, 3) 가장 빠른 생일, 4) 프로그램 종료 " << endl;

	cout << endl;

	int choice;
	while (1)
	{
		cout << "궁금한 번호를 선택해주세요 : ";
		cin >> choice;

		switch (choice)
		{
			case 1: // 학생정보출력
				printStudent();
				cout << endl;
				break;

			case 2: // 평균나이
				printAverage();
				cout << endl;
				break;
			
			case 3: // 가장빠른생일
				printFastbirth();
				cout << endl;
				break;

			case 4: // 프로그램종료
				cout << "프로그램을 종료합니다." << endl;
				return 0;

			default:
				cout << "잘못된 입력입니다" << endl;
		}
	}

	return 0;
}

