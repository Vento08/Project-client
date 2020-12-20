#include "MyForm7.h"
#include <Windows.h>
using namespace Project1; // Название проекта
int WINAPI WinMain7(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm7);
	return 0;
}
