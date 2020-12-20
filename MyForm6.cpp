#include "MyForm6.h"
#include <Windows.h>
using namespace Project1; // Название проекта
int WINAPI WinMain6(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm6);
	return 0;
}
