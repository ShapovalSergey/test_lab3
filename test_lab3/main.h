#pragma once
#include "windows.h"
namespace testlab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ rules;
	private: System::Windows::Forms::Button^ start_game;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->rules = (gcnew System::Windows::Forms::Button());
			this->start_game = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(619, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(682, 40);
			this->label1->TabIndex = 2;
			this->label1->Text = L"УГАДАЙ СТРАНУ\\СТОЛИЦУ ПО ФЛАГУ";
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::LightSteelBlue;
			this->exit->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->exit->Location = System::Drawing::Point(825, 925);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(270, 64);
			this->exit->TabIndex = 4;
			this->exit->Text = L"Выход из игры";
			this->exit->UseVisualStyleBackColor = false;
			// 
			// rules
			// 
			this->rules->BackColor = System::Drawing::Color::LightSteelBlue;
			this->rules->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rules->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->rules->Location = System::Drawing::Point(825, 425);
			this->rules->Name = L"rules";
			this->rules->Size = System::Drawing::Size(270, 64);
			this->rules->TabIndex = 6;
			this->rules->Text = L"Правила игры";
			this->rules->UseVisualStyleBackColor = false;
			// 
			// start_game
			// 
			this->start_game->BackColor = System::Drawing::Color::LightSteelBlue;
			this->start_game->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->start_game->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->start_game->Location = System::Drawing::Point(825, 325);
			this->start_game->Name = L"start_game";
			this->start_game->Size = System::Drawing::Size(270, 64);
			this->start_game->TabIndex = 5;
			this->start_game->Text = L"Начать игру";
			this->start_game->UseVisualStyleBackColor = false;
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->rules);
			this->Controls->Add(this->start_game);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->label1);
			this->Name = L"main";
			this->Text = L"Угадай страну\\столицу по флагу";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
