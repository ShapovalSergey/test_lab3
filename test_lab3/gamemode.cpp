#include "gamemode.h"

System::Void testlab3::gamemode::back_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

void testlab3::gamemode::gamemode_Closing(Object^ sender, System::ComponentModel::CancelEventArgs^ e)
{
	testlab3::main^ main = gcnew testlab3::main();
	main->Show();
}