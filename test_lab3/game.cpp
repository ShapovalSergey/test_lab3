#include "game.h"



void testlab3::game::game_Closing(Object^ sender, System::ComponentModel::CancelEventArgs^ e)
{
	testlab3::main^ main = gcnew testlab3::main();
	main->Show();
}

System::Void testlab3::game::main_menu_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}