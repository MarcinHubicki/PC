#include "Ekran_Glowny_Wykl.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]//leave this as is
void mainEKR_GL_Wykl(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew InOp::Ekran_Glowny_Wykl);
}