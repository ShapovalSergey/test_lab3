#pragma once
#include "main.h"
#include "game.h"
#include "Headers.h"
namespace testlab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для gamemode
	/// </summary>
	public ref class gamemode : public System::Windows::Forms::Form
	{
	public:

		void gamemode_Closing(Object^ sender, System::ComponentModel::CancelEventArgs^ e);

		gamemode(void)
		{
			InitializeComponent();
			BOOL attrib = TRUE;
			HWND hWnd;
			hWnd = static_cast<HWND>(this->Handle.ToPointer());
			DwmSetWindowAttribute(hWnd, DWMWA_TRANSITIONS_FORCEDISABLED, &attrib, sizeof(attrib));
			this->Closing += gcnew CancelEventHandler(this, &gamemode::gamemode_Closing);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~gamemode()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ mode1;
	private: System::Windows::Forms::Button^ mode2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ back;

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
			this->mode1 = (gcnew System::Windows::Forms::Button());
			this->mode2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// mode1
			// 
			this->mode1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->mode1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mode1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->mode1->Location = System::Drawing::Point(825, 325);
			this->mode1->Name = L"mode1";
			this->mode1->Size = System::Drawing::Size(270, 64);
			this->mode1->TabIndex = 10;
			this->mode1->Text = L"Государство по флагу";
			this->mode1->UseVisualStyleBackColor = false;
			this->mode1->Click += gcnew System::EventHandler(this, &gamemode::mode1_Click);
			// 
			// mode2
			// 
			this->mode2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->mode2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mode2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->mode2->Location = System::Drawing::Point(825, 425);
			this->mode2->Name = L"mode2";
			this->mode2->Size = System::Drawing::Size(270, 64);
			this->mode2->TabIndex = 9;
			this->mode2->Text = L"Столица по флагу";
			this->mode2->UseVisualStyleBackColor = false;
			this->mode2->Click += gcnew System::EventHandler(this, &gamemode::mode2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(789, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(325, 32);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Выберите режим игры";
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
			this->label1->TabIndex = 12;
			this->label1->Text = L"УГАДАЙ СТРАНУ\\СТОЛИЦУ ПО ФЛАГУ";
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::LightSteelBlue;
			this->back->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->back->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->back->Location = System::Drawing::Point(825, 800);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(270, 64);
			this->back->TabIndex = 13;
			this->back->Text = L"Назад";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &gamemode::back_Click_1);
			// 
			// gamemode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->back);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->mode1);
			this->Controls->Add(this->mode2);
			this->Name = L"gamemode";
			this->Text = L"gamemode";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &gamemode::gamemode_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void gamemode_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void back_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void mode1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void mode2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
