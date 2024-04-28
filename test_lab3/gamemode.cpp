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

System::Void testlab3::gamemode::mode1_Click(System::Object^ sender, System::EventArgs^ e)
{
	testlab3::game^ gm = gcnew testlab3::game(false);
	gm->Show();
	this->Hide();
}

System::Void testlab3::gamemode::mode2_Click(System::Object^ sender, System::EventArgs^ e)
{
	testlab3::game^ gm = gcnew testlab3::game(true);
	gm->Show();
	this->Hide();
}