#include "rules.h"


System::Void testlab3::rules::main_menu_Click(System::Object^ sender, System::EventArgs^ e)
{
	testlab3::main^ main = gcnew testlab3::main();
	main->Show();
	this->Close();
}
