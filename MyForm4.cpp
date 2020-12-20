#include "MyForm4.h"
#include <Windows.h>
using namespace Project1; // Название проекта
int WINAPI WinMain4(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm4);
	return 0;
}
