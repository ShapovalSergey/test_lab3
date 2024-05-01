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
			label6->Text = "Серия: +1";
		}
		else 
		{
			hint1->Enabled = false;
			hint2->Enabled = false;
		}
	}
	else
	{
		check->Text = "Неверно";
		check->Enabled = false;
		Application::DoEvents();
		Sleep(1500);
		check->Enabled = true;
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

System::Void testlab3::game::further_Click(System::Object^ sender, System::EventArgs^ e)
{
	msclr::interop::marshal_context context;
	const char* slo = context.marshal_as<const char*>(textBox1->Text);
	char slovo[50];
	ng->addTurn();
	ng->setCheckAnswer(3);
	textBox1->Enabled = true;
	check->Enabled = true;
	label4->Visible = false;
	label5->Visible = false;
	check->Text = "Проверить (" + ng->getCheckAnswer() + ")";
	if (ng->getTurn()==20)
	{
		further->Visible = false;
		gameover->Visible = true;
	}
	if (ng->gethintLetter() == 0)
	{
		hint1->Enabled = false;
	}
	else
	{
		hint1->Enabled = true;
	}
	if (ng->gethintLocation() == 0)
	{
		hint2->Enabled = false;
	}
	else
	{
		hint2->Enabled = true;
	}
	strcpy(slovo, slo);
	if (strcmp(slovo, ng->getFlagAnswer(currentFlagID).c_str()) == 0)
	{
		if ((hint1->Enabled == false) && (hint2->Enabled == false))
		{
			ng->setStreak(1);
			ng->addGamescore(ng->getStreak());
		}
		else
		{
			ng->addGamescore(ng->getStreak());
			ng->addStreak();
		}
	}
	else
	{
		ng->setStreak(1);
	}
	currentFlagID = ng->getFlagId();
	pictureBox1->Image = System::Drawing::Bitmap::FromFile("D:\\projects\\test_lab3\\test_lab3\\flags\\" + currentFlagID + ".png");
	textBox1->Text = "";
	score->Text = "Счёт: "+ng->getGamescore();
	label6->Text = "Серия: +" + ng->getStreak();
}

System::Void testlab3::game::gameover_Click(System::Object^ sender, System::EventArgs^ e)
{
	msclr::interop::marshal_context context;
	const char* slo = context.marshal_as<const char*>(textBox1->Text);
	char slovo[50];
	strcpy(slovo, slo);
	if (strcmp(slovo, ng->getFlagAnswer(currentFlagID).c_str()) == 0)
	{
		if ((hint1->Enabled == false) && (hint2->Enabled == false))
		{
			ng->setStreak(1);
			ng->addGamescore(ng->getStreak());
		}
		else
		{
			ng->addGamescore(ng->getStreak());
			ng->addStreak();
		}
	} 
	MessageBox::Show("Количество очков, которое вы набрали  = " + ng->getGamescore(), "Игра окончена", MessageBoxButtons::OKCancel, MessageBoxIcon::Asterisk);
	this->Close();
}