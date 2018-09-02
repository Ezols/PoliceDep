#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace MySql::Data::MySqlClient;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PoliceDep::MyForm form;
	Application::Run(%form);
	return 0;
}
