#pragma once
#include "main.h"
#include <windows.h>

namespace testlab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для rules
	/// </summary>
	public ref class rules : public System::Windows::Forms::Form
	{
	public:

		void rules_Closing(Object^ sender, System::ComponentModel::CancelEventArgs^ e);

		rules(void)
		{
			InitializeComponent();

			this->Closing += gcnew CancelEventHandler(this, &rules::rules_Closing);
		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~rules()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ main_menu;
	protected:
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(rules::typeid));
			this->main_menu = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->main_menu->TabIndex = 19;
			this->main_menu->Text = L"В главное меню";
			this->main_menu->UseVisualStyleBackColor = false;
			this->main_menu->Click += gcnew System::EventHandler(this, &rules::main_menu_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(213, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1556, 640);
			this->label2->TabIndex = 20;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// rules
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->main_menu);
			this->Controls->Add(this->label2);
			this->Name = L"rules";
			this->Text = L"Правила игры";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &rules::rules_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void rules_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void main_menu_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
