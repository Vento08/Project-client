#pragma once
#include <iomanip> 
#include "stdio.h"
#include "conio.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm7.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button1->Location = System::Drawing::Point(425, 405);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button2->Location = System::Drawing::Point(32, 70);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Определение типа телосложения";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button3->Location = System::Drawing::Point(32, 131);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Расчет ИМТ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button4->Location = System::Drawing::Point(32, 210);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(159, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Расчет идеального веса";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button5->Location = System::Drawing::Point(250, 70);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(268, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Расчет дневной нормы потребления калорий";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button6->Location = System::Drawing::Point(250, 131);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(209, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Расчет основного обмена веществ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button7->Location = System::Drawing::Point(250, 210);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(186, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"БЖУ состав продуктов";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(534, 471);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->ShowIcon = false;
			this->Text = L"Меню выбора функций:";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ frm2 = gcnew MyForm2();
	frm2->Owner = this;
	frm2->Show();
	this->Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm3^ frm3 = gcnew MyForm3();
	frm3->Owner = this;
	frm3->Show();
	this->Hide();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm4^ frm4 = gcnew MyForm4();
	frm4->Owner = this;
	frm4->Show();
	this->Hide();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm5^ frm5 = gcnew MyForm5();
	frm5->Owner = this;
	frm5->Show();
	this->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm6^ frm6 = gcnew MyForm6();
	frm6->Owner = this;
	frm6->Show();
	this->Hide();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm7^ frm7 = gcnew MyForm7();
	frm7->Owner = this;
	frm7->Show();
	this->Hide();
}
};
}
