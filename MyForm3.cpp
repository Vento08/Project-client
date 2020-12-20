#include "MyForm3.h"
#include <Windows.h>
using namespace Project1; // Название проекта
int WINAPI WinMain3(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm3);
	return 0;
}
