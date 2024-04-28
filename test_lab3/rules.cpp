#include "rules.h"


System::Void testlab3::rules::main_menu_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

void testlab3::rules::rules_Closing(Object^ sender, System::ComponentModel::CancelEventArgs^ e)
{
	testlab3::main^ main = gcnew testlab3::main();
	main->Show();
}