#include "main.h"

using namespace testlab3;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew main);
    return 0;
}


System::Void main::rules_Click(System::Object^ sender, System::EventArgs^ e) 
{
    testlab3::rules^ rule = gcnew testlab3::rules();
    rule->Show();
    this->Hide();
}

System::Void main::exit_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void main::start_game_Click(System::Object^ sender, System::EventArgs^ e)
{
    testlab3::gamemode^ gm = gcnew testlab3::gamemode();
    gm->Show();
    this->Hide();
}