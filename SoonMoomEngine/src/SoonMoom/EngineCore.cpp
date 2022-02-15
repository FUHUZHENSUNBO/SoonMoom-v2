#include "EngineCore.h"
#include<iostream>
#include<windows.h>
namespace SoonMoom
{
	void SetColor(int fore = 7, int back = 0)
	{
		unsigned char m_color = fore;
		m_color += (back << 4);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), m_color);
		return;
	}
	//����������ɫ-����Լ�дlogϵͳ
#ifdef PreTestFontColor
	void TestFontColor()
	{

		using namespace std;

		SetColor();
		cout << "����Ĭ�ϵ���ɫ/This is default color config." << endl << endl;

		cout << "������ɫ foreColor: ";
		for (int i = 0; i < 16; ++i) {
			if (i == 0) { SetColor(0, 7); cout << ' ' << 0 << ' '; continue; }

			SetColor(i, 0);
			cout << ' ' << i << ' ';
		}

		SetColor(); cout << endl << "������ɫ backColor: ";
		for (int i = 0; i < 16; ++i) {
			if (i == 0) { SetColor(7, 0); cout << ' ' << 0 << ' '; continue; }

			SetColor(0, i);
			cout << ' ' << i << ' ';
		}
		// ���ϴ��������ɫ��
		cout << endl << endl;

		int foreColor = 7, backColor = 0;
		SetColor();
		cout << "������������ɫ��������ɫ" << endl;
		cin >> foreColor >> backColor;

		cout << "foreColor=" << foreColor << ", backColor=" << backColor << endl;

		SetColor(); system("pause");
	}
#endif

	EngineCore::EngineCore()
	{

	}

	EngineCore::~EngineCore()
	{

	}

	void EngineCore::Run()
	{
		//����������ɫ-����Լ�дlogϵͳ
#ifdef PreTestFontColor
		TestFontColor();
#endif



	}


}//SoonMoom
