#include <Windows.h>
#include <iostream>

using namespace std;
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	AllocConsole();
	FILE* pFile;

	freopen_s(&pFile, "conin$", "r", stdin);
	freopen_s(&pFile, "conout$", "w", stdout);
	freopen_s(&pFile, "conout$", "w", stderr);


	cout.sync_with_stdio(false);
	SetConsoleTitle(TEXT("Console"));
	cout << "Console opened." << endl;

	int code = MessageBoxA(NULL, "Random Asd?","Console" , MB_YESNO | MB_ICONQUESTION);

	switch (code)
	{
	case IDYES:
		cout << "Pressed Yes." << endl;
		break;
	case IDNO:
		cout << "Pressed No."<<endl;
		break;
	default:
		break;
	}
	system("pause");

	
	return 0;
}