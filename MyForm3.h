#pragma once
#include <cmath>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace HealthCloud::Lib::Calculations;

	/// <summary>
	/// Сводка для MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Location = System::Drawing::Point(393, 369);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LemonChiffon;
			this->button2->Location = System::Drawing::Point(232, 369);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"В меню";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::GreenYellow;
			this->button3->Location = System::Drawing::Point(72, 369);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Рассчитать";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 114);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm3::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(72, 164);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm3::textBox2_KeyPress);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Астенический", L"Гиперстенический", L"Нормостенический" });
			this->comboBox1->Location = System::Drawing::Point(72, 211);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::AntiqueWhite;
			this->label1->Location = System::Drawing::Point(72, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Введите рост(см):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::NavajoWhite;
			this->label2->Location = System::Drawing::Point(75, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Введите вес(кг):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::NavajoWhite;
			this->label3->Location = System::Drawing::Point(72, 195);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Выбирите тип телосложения:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::PeachPuff;
			this->label4->Location = System::Drawing::Point(272, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Результат:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(275, 142);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Salmon;
			this->label5->Location = System::Drawing::Point(275, 190);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Вес:";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Yellow;
			this->button4->Location = System::Drawing::Point(75, 51);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(39, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Info";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm3::button4_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(534, 471);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm3";
			this->ShowIcon = false;
			this->Text = L"Рассчет индекса массы тела.";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Hide();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		double rost = (ProjLib::Class1::vvod(textBox1)) / 100;
		double ves = ProjLib::Class1::vvod(textBox2);
		/*if (ProjLib::Class1::GetTipTel(comboBox1) == 0)
		{
			rez = ((ves + ((ves * 10) / 100)) / (rost * rost));
		}
		else if (ProjLib::Class1::GetTipTel(comboBox1) == 1)
		{
			rez = ((ves - ((ves * 10) / 100)) / (rost * rost));
		}
		else if (ProjLib::Class1::GetTipTel(comboBox1) == 2)
		{
			rez = ves / (rost * rost);
		}

		
		if (rez < 18.5)
		{
			label5->Text = "Вес: недостаточный";
		}
		else if ((18.5 <= rez) && (rez <= 25))
		{
			label5->Text = "Вес: нормальный";
		}
		else if ((25 < rez) && (rez <= 30))
		{
			label5->Text = "Вес: избыточный";
		}
		else if (rez > 30)
		{
			label5->Text = "Вес: ожирение";
		}*/
		CalculationsApi^ api = gcnew CalculationsApi();
		BodyMassIndexInformation^ info = api->GetMassIndex(rost, ves, ProjLib::Class1::GetTipTel(comboBox1));
		if (info->MassIndex == 0)
		{
			label5->Text = "Вес: недостаточный";
		}
		else if (info->MassIndex == 1)
		{
			label5->Text = "Вес: нормальный";
		}
		else if (info->MassIndex == 2)
		{
			label5->Text = "Вес: избыточный";
		}
		else
		{
			label5->Text = "Вес: ожирение";
		}
		ProjLib::Class1::vivod(info->Value, textBox3);
	}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	int i = 0;
	if (((int)e->KeyChar <= 47 || (int)e->KeyChar >= 58) && (int)e->KeyChar != 8)
		e->Handled = !Int32::TryParse(textBox1->Text + e->KeyChar.ToString(), i);
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	int i = 0;
	if (((int)e->KeyChar <= 47 || (int)e->KeyChar >= 58) && (int)e->KeyChar != 8 && (int)e->KeyChar != 44)
		e->Handled = !Int32::TryParse(textBox1->Text + e->KeyChar.ToString(), i);

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Индекс массы тела (ИМТ) — величина, позволяющая оценить степень соответствия массы человека и его роста и тем самым косвенно судить о том, является ли масса недостаточной, нормальной или избыточной.", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
