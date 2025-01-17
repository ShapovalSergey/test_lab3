#pragma once
#include "main.h"
#include "newgamecapital.h"
#include "newgamecountry.h"
#include "Headers.h"
namespace testlab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� game
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		game(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

		void game_Closing(Object^ sender, System::ComponentModel::CancelEventArgs^ e);

		game(bool capital)
		{
			InitializeComponent();
			BOOL attrib = TRUE;
			HWND hWnd;
			hWnd = static_cast<HWND>(this->Handle.ToPointer());
			DwmSetWindowAttribute(hWnd, DWMWA_TRANSITIONS_FORCEDISABLED, &attrib, sizeof(attrib));
			if (capital==true)
			{
				title->Text = "������ ������� �� �����";
				ng = new newgamecapital();
			}
			else
			{
				title->Text = "������ ������ �� �����";
				ng = new newgamecountry();
			}

			this->Closing += gcnew CancelEventHandler(this, &game::game_Closing);
		}

	protected:
		newgame* ng;
		bool capital;
		int currentFlagID;

		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::Button^ check;
	private: System::Windows::Forms::Label^ score;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ hint2;
	private: System::Windows::Forms::Button^ hint1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ gameover;
	private: System::Windows::Forms::Button^ main_menu;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Button^ further;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->check = (gcnew System::Windows::Forms::Button());
			this->score = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->hint2 = (gcnew System::Windows::Forms::Button());
			this->hint1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->gameover = (gcnew System::Windows::Forms::Button());
			this->main_menu = (gcnew System::Windows::Forms::Button());
			this->title = (gcnew System::Windows::Forms::Label());
			this->further = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(1471, 246);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(149, 32);
			this->label6->TabIndex = 33;
			this->label6->Text = L"�����: +1";
			// 
			// check
			// 
			this->check->BackColor = System::Drawing::Color::LightSteelBlue;
			this->check->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->check->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->check->Location = System::Drawing::Point(1289, 687);
			this->check->Name = L"check";
			this->check->Size = System::Drawing::Size(224, 40);
			this->check->TabIndex = 31;
			this->check->Text = L"��������� (3)";
			this->check->UseVisualStyleBackColor = false;
			this->check->Click += gcnew System::EventHandler(this, &game::check_Click);
			// 
			// score
			// 
			this->score->AutoSize = true;
			this->score->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->score->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->score->Location = System::Drawing::Point(1170, 246);
			this->score->Name = L"score";
			this->score->Size = System::Drawing::Size(111, 32);
			this->score->TabIndex = 29;
			this->score->Text = L"����: 0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label5->Location = System::Drawing::Point(1432, 425);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 64);
			this->label5->TabIndex = 28;
			this->label5->Text = L"\r\nhint2";
			this->label5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(1161, 425);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 64);
			this->label4->TabIndex = 27;
			this->label4->Text = L"\r\nhint1";
			this->label4->Visible = false;
			// 
			// hint2
			// 
			this->hint2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->hint2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hint2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->hint2->Location = System::Drawing::Point(1430, 338);
			this->hint2->Name = L"hint2";
			this->hint2->Size = System::Drawing::Size(216, 39);
			this->hint2->TabIndex = 26;
			this->hint2->Text = L"��������� (5)";
			this->hint2->UseVisualStyleBackColor = false;
			this->hint2->Click += gcnew System::EventHandler(this, &game::hint2_Click);
			// 
			// hint1
			// 
			this->hint1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->hint1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hint1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->hint1->Location = System::Drawing::Point(1167, 338);
			this->hint1->Name = L"hint1";
			this->hint1->Size = System::Drawing::Size(216, 39);
			this->hint1->TabIndex = 25;
			this->hint1->Text = L"������ ����� (5)";
			this->hint1->UseVisualStyleBackColor = false;
			this->hint1->Click += gcnew System::EventHandler(this, &game::hint1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1167, 625);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(438, 20);
			this->textBox1->TabIndex = 24;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(219, 325);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 600);
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// gameover
			// 
			this->gameover->BackColor = System::Drawing::Color::LightSteelBlue;
			this->gameover->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gameover->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->gameover->Location = System::Drawing::Point(1611, 612);
			this->gameover->Name = L"gameover";
			this->gameover->Size = System::Drawing::Size(133, 40);
			this->gameover->TabIndex = 32;
			this->gameover->Text = L"���������";
			this->gameover->UseVisualStyleBackColor = false;
			this->gameover->Visible = false;
			this->gameover->Click += gcnew System::EventHandler(this, &game::gameover_Click);
			// 
			// main_menu
			// 
			this->main_menu->BackColor = System::Drawing::Color::LightSteelBlue;
			this->main_menu->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->main_menu->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->main_menu->Location = System::Drawing::Point(825, 800);
			this->main_menu->Name = L"main_menu";
			this->main_menu->Size = System::Drawing::Size(270, 64);
			this->main_menu->TabIndex = 30;
			this->main_menu->Text = L"� ������� ����";
			this->main_menu->UseVisualStyleBackColor = false;
			this->main_menu->Click += gcnew System::EventHandler(this, &game::main_menu_Click);
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->title->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->title->Location = System::Drawing::Point(789, 214);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(236, 32);
			this->title->TabIndex = 22;
			this->title->Text = L"������ �� �����";
			// 
			// further
			// 
			this->further->BackColor = System::Drawing::Color::LightSteelBlue;
			this->further->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->further->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->further->Location = System::Drawing::Point(1611, 612);
			this->further->Name = L"further";
			this->further->Size = System::Drawing::Size(133, 40);
			this->further->TabIndex = 34;
			this->further->Text = L"������";
			this->further->UseVisualStyleBackColor = false;
			this->further->Click += gcnew System::EventHandler(this, &game::further_Click);
			// 
			// game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->check);
			this->Controls->Add(this->score);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->hint2);
			this->Controls->Add(this->hint1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->main_menu);
			this->Controls->Add(this->title);
			this->Controls->Add(this->gameover);
			this->Controls->Add(this->further);
			this->Name = L"game";
			this->Text = L"����";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &game::game_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void main_menu_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void game_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void check_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void hint1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void hint2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void further_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void gameover_Click(System::Object^ sender, System::EventArgs^ e);
};
}
