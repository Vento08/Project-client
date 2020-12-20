#include "MyForm5.h"
#include <Windows.h>
using namespace Project1; // Название проекта
int WINAPI WinMain5(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm5);
	return 0;
}
