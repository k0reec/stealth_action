#pragma once
#include "Modules.h"

class CGame;

class CRestartMenu
{
	ISprite *_pBackSprite;           // ������ ���.
	IAnimation *_pButtonEnd;        // ������
	IAnimation *_pButtonNew;
	CGame *_pGame;                   // ��������� �� ����, ��� ������ ������ _pGame->SetState

	void CALLBACK Init();
public:
	CRestartMenu(CGame *pGame);
	~CRestartMenu();

	// ����� ��� ���������
	void CALLBACK Draw();

	// ����� ��� ����������
	void CALLBACK Update();
};