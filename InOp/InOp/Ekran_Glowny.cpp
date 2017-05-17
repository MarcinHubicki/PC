#include "Ekran_Glowny.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]//leave this as is
void mainEKR_GL(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew InOp::Ekran_Glowny);
}