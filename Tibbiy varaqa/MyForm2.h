#pragma once

namespace Tibbiyvaraqa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColAge;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColGender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colPhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colHistory;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->colName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColAge = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColGender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colPhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colHistory = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(36, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ism:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(36, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Yosh:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(36, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Jins:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(36, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(217, 31);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Telefon raqami:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(36, 323);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(312, 31);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Tibbiy kasalliklar tarixi:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(360, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(350, 35);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(360, 101);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(350, 35);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(360, 167);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(350, 35);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(360, 236);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(350, 35);
			this->textBox4->TabIndex = 8;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(360, 291);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(409, 120);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(785, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 42);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Saqlash";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(766, 94);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 42);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Yangilash";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(785, 163);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 42);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Qidirish";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(785, 236);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 42);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Chiqish";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->colName,
					this->ColAge, this->ColGender, this->colPhone, this->colHistory
			});
			this->dataGridView1->Location = System::Drawing::Point(42, 431);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(863, 184);
			this->dataGridView1->TabIndex = 14;
			// 
			// colName
			// 
			this->colName->HeaderText = L"Ism";
			this->colName->Name = L"colName";
			// 
			// ColAge
			// 
			this->ColAge->HeaderText = L"Yosh";
			this->ColAge->Name = L"ColAge";
			// 
			// ColGender
			// 
			this->ColGender->HeaderText = L"Jins";
			this->ColGender->Name = L"ColGender";
			// 
			// colPhone
			// 
			this->colPhone->HeaderText = L"Telefon raqami";
			this->colPhone->Name = L"colPhone";
			// 
			// colHistory
			// 
			this->colHistory->HeaderText = L"Tibbiy kasalliklar tarixi";
			this->colHistory->Name = L"colHistory";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(932, 639);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(948, 678);
			this->MinimumSize = System::Drawing::Size(948, 678);
			this->Name = L"MyForm2";
			this->Text = L"Tibbiy tarixni saqlash va boshqarish";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = dataGridView1->Rows->Add();

		dataGridView1->Rows[index]->Cells["colName"]->Value = textBox1->Text;
		dataGridView1->Rows[index]->Cells["ColAge"]->Value = textBox2->Text;
		dataGridView1->Rows[index]->Cells["ColGender"]->Value = textBox3->Text;
		dataGridView1->Rows[index]->Cells["colPhone"]->Value = textBox4->Text;
		dataGridView1->Rows[index]->Cells["colHistory"]->Value = richTextBox1;


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if
		(dataGridView1->SelectedRows->Count > 0)
	{
		DataGridViewRow^ row = dataGridView1->SelectedRows[0];
		row->Cells["colName"]->Value = textBox1->Text;
		row->Cells["ColAge"]->Value = textBox2->Text;
		row->Cells["ColGender"]->Value = textBox3->Text;
        row->Cells["colPhone"]->Value = textBox4->Text;
		row->Cells["colHistory"]->Value = richTextBox1->Text;


	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ searchName = textBox1->Text;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		if
			(dataGridView1->Rows[i]->Cells["colName"]->Value != nullptr && dataGridView1->Rows[i]->Cells["colName"]->Value->ToString()->Equals(searchName))
		{
			dataGridView1->Rows[i]->Selected = true;
			return;
		}

	}
	MessageBox::Show("Bemor topilmadi");
		
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
