#include "pch.h"
#include "Connection.h"

using namespace System;

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}


using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Interface2_1::Connection monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}