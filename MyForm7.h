#pragma once
#include "Food.cpp"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace HealthCloud::Lib::Products;

	/// <summary>
	/// Сводка для MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
		{
			InitializeComponent();
			/*Food::Init();
			for (int i = 0; i < Food::FoodList->Count; i++)
			{
				listBox1->Items->Add(Food::FoodList[i]->Name);
			}*/
			ProductApi^ api = gcnew ProductApi();
			products = api->GetAllProducts();

			for (int i = 0; i < products->Count; i++)
			{
				listBox1->Items->Add(products[i]->Name);
			}
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm7()
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
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Collections::Generic::IList<Product^>^ products;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm7::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Aqua;
			this->button1->Location = System::Drawing::Point(353, 408);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkCyan;
			this->button2->Location = System::Drawing::Point(219, 408);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"В меню";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm7::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button3->Location = System::Drawing::Point(94, 408);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Рассчитать";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Turquoise;
			this->listBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(89, 99);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 95);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedValueChanged += gcnew System::EventHandler(this, &MyForm7::listBox1_SelectedValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label1->Location = System::Drawing::Point(274, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Название:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label2->Location = System::Drawing::Point(274, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Белки:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label3->Location = System::Drawing::Point(274, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Жиры:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label4->Location = System::Drawing::Point(274, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Углеводы:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label5->Location = System::Drawing::Point(86, 74);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Список продуктов:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(277, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label7->Location = System::Drawing::Point(274, 251);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Калории:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::RoyalBlue;
			this->label8->Location = System::Drawing::Point(274, 99);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(139, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Состав на 100 г продукта:";
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(534, 471);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm7";
			this->ShowIcon = false;
			this->Text = L"БЖУ состав различных продуктов.";
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
	private: System::Void listBox1_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e) {
		Product^ food = products[listBox1->SelectedIndex];

		label1->Text = "Название: " + food->Name;
		label2->Text = "Белки: " + food->Proteins;
		label3->Text = "Жиры: " + food->Fats;
		label4->Text = "Углеводы: " + food->Carbons;
		label7->Text = "Калории: " + food->Calories;

	}
};
}
