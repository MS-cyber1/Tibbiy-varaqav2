#include"MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Tibbiyvaraqa::MyForm^ form = gcnew
		Tibbiyvaraqa::MyForm();
	Application::Run(form);

}; 
