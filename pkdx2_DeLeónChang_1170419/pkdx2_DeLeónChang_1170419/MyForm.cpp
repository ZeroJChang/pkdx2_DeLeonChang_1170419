#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	pkdx2DeLe�nChang1170419::MyForm form;
	Application::Run(% form);
	return 0;
}

