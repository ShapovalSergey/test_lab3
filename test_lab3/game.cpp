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

System::Void testlab3::game::game_Load(System::Object^ sender, System::EventArgs^ e)
{
	currentFlagID = ng->getFlagId();
	pictureBox1->Image = System::Drawing::Bitmap::FromFile("D:\\projects\\test_lab3\\test_lab3\\flags\\" + currentFlagID + ".png");
}


System::Void testlab3::game::check_Click(System::Object^ sender, System::EventArgs^ e)
{
	msclr::interop::marshal_context context;
	const char* slo = context.marshal_as<const char*>(textBox1->Text);
	char slovo[50];
	strcpy(slovo, slo);
	if (strcmp(slovo,ng->getFlagAnswer(currentFlagID).c_str())==0)
	{
		check->Text = "Верно";
		textBox1->Enabled = false;
		check->Enabled = false;
		if ((hint1->Enabled == false) && (hint2->Enabled == false))
		{
			ng->setStreak(1);
		}
		else 
		{
			hint1->Enabled = false;
			hint2->Enabled = false;
		}
	}
	ng->setCheckAnswer(ng->getCheckAnswer()-1);
	check->Text = "Проверить ("+ ng->getCheckAnswer() +")";
	if (ng->getCheckAnswer()==0)
	{
		check->Enabled = false;
	}
}

System::Void testlab3::game::hint1_Click(System::Object^ sender, System::EventArgs^ e)
{
	ng->sethintLetter(ng->gethintLetter()-1);
	hint1->Enabled = false;
	hint1->Text = "Первая буква (" + ng->gethintLetter() + ")";
	label4->Visible = true;
	System::String^ stro; stro = gcnew String(ng->getFlagAnswer(currentFlagID).c_str());
	label4->Text = "Первая буква - " + stro[0];
	if ((hint1->Enabled == false) && (hint2->Enabled == false))
	{
		label6->Text = "Серия: +1";
		ng->setStreak(1);
	}
}

System::Void testlab3::game::hint2_Click(System::Object^ sender, System::EventArgs^ e)
{
	ng->sethintLocation(ng->gethintLocation() - 1);
	hint2->Enabled = false;
	hint2->Text = "Континент (" + ng->gethintLocation() + ")";
	label5->Visible = true;
	System::String^ stro; stro = gcnew String(ng->getFlagHintLocation(currentFlagID).c_str());
	label5->Text = stro;
	if ((hint1->Enabled == false) && (hint2->Enabled == false))
	{
		label6->Text = "Серия: +1";
		ng->setStreak(1);
	}
}