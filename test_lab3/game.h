#pragma once
#include "main.h"
#include "Headers.h"
namespace testlab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для game
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		game(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
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
			this->Closing += gcnew CancelEventHandler(this, &game::game_Closing);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
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
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->label6->Size = System::Drawing::Size(118, 32);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Серия: ";
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
			this->check->Text = L"Проверить (0)";
			this->check->UseVisualStyleBackColor = false;
			// 
			// score
			// 
			this->score->AutoSize = true;
			this->score->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->score->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->score->Location = System::Drawing::Point(1170, 246);
			this->score->Name = L"score";
			this->score->Size = System::Drawing::Size(107, 32);
			this->score->TabIndex = 29;
			this->score->Text = L"СЧЁТ: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label5->Location = System::Drawing::Point(1471, 425);
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
			this->hint2->Text = L"Континент (0)";
			this->hint2->UseVisualStyleBackColor = false;
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
			this->hint1->Text = L"Первая буква (0)";
			this->hint1->UseVisualStyleBackColor = false;
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
			this->gameover->Text = L"Завершить";
			this->gameover->UseVisualStyleBackColor = false;
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
			this->main_menu->Text = L"В главное меню";
			this->main_menu->UseVisualStyleBackColor = false;
			this->main_menu->Click += gcnew System::EventHandler(this, &game::main_menu_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(789, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(236, 32);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Угадай по флагу";
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
			this->Controls->Add(this->gameover);
			this->Controls->Add(this->main_menu);
			this->Controls->Add(this->label3);
			this->Name = L"game";
			this->Text = L"Игра";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void main_menu_Click(System::Object^ sender, System::EventArgs^ e);
};
}
