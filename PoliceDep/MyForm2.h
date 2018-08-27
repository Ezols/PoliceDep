#pragma once

namespace PoliceDep {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  save_btn;

	private: System::Windows::Forms::Label^  name_lbl;
	private: System::Windows::Forms::Label^  surname_lbl;
	private: System::Windows::Forms::Label^  age_lbl;
	private: System::Windows::Forms::TextBox^  name_txt;
	private: System::Windows::Forms::TextBox^  surname_txt;
	private: System::Windows::Forms::TextBox^  age_txt;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  gender_lbl;
	private: System::Windows::Forms::ComboBox^  combobox;
	private: System::Windows::Forms::TextBox^  combobox_txt;




	private: System::Windows::Forms::Button^  add_btn;
	private: System::Windows::Forms::Button^  delete_btn;









	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->surname_lbl = (gcnew System::Windows::Forms::Label());
			this->age_lbl = (gcnew System::Windows::Forms::Label());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->surname_txt = (gcnew System::Windows::Forms::TextBox());
			this->age_txt = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->gender_lbl = (gcnew System::Windows::Forms::Label());
			this->combobox = (gcnew System::Windows::Forms::ComboBox());
			this->combobox_txt = (gcnew System::Windows::Forms::TextBox());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->delete_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(150, 217);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// save_btn
			// 
			this->save_btn->Location = System::Drawing::Point(403, 78);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(75, 23);
			this->save_btn->TabIndex = 1;
			this->save_btn->Text = L"Save";
			this->save_btn->UseVisualStyleBackColor = true;
			this->save_btn->Click += gcnew System::EventHandler(this, &MyForm2::save_btn_Click);
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->Location = System::Drawing::Point(54, 57);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(35, 13);
			this->name_lbl->TabIndex = 4;
			this->name_lbl->Text = L"Name";
			this->name_lbl->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click);
			// 
			// surname_lbl
			// 
			this->surname_lbl->AutoSize = true;
			this->surname_lbl->Location = System::Drawing::Point(54, 83);
			this->surname_lbl->Name = L"surname_lbl";
			this->surname_lbl->Size = System::Drawing::Size(49, 13);
			this->surname_lbl->TabIndex = 5;
			this->surname_lbl->Text = L"Surname";
			this->surname_lbl->Click += gcnew System::EventHandler(this, &MyForm2::label3_Click);
			// 
			// age_lbl
			// 
			this->age_lbl->AutoSize = true;
			this->age_lbl->Location = System::Drawing::Point(54, 109);
			this->age_lbl->Name = L"age_lbl";
			this->age_lbl->Size = System::Drawing::Size(26, 13);
			this->age_lbl->TabIndex = 6;
			this->age_lbl->Text = L"Age";
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(115, 54);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(100, 20);
			this->name_txt->TabIndex = 7;
			// 
			// surname_txt
			// 
			this->surname_txt->Location = System::Drawing::Point(115, 80);
			this->surname_txt->Name = L"surname_txt";
			this->surname_txt->Size = System::Drawing::Size(100, 20);
			this->surname_txt->TabIndex = 8;
			// 
			// age_txt
			// 
			this->age_txt->Location = System::Drawing::Point(115, 106);
			this->age_txt->Name = L"age_txt";
			this->age_txt->Size = System::Drawing::Size(100, 20);
			this->age_txt->TabIndex = 9;
			this->age_txt->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox4_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(115, 134);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 10;
			// 
			// gender_lbl
			// 
			this->gender_lbl->AutoSize = true;
			this->gender_lbl->Location = System::Drawing::Point(54, 137);
			this->gender_lbl->Name = L"gender_lbl";
			this->gender_lbl->Size = System::Drawing::Size(42, 13);
			this->gender_lbl->TabIndex = 11;
			this->gender_lbl->Text = L"Gender";
			this->gender_lbl->Click += gcnew System::EventHandler(this, &MyForm2::label1_Click_1);
			// 
			// combobox
			// 
			this->combobox->FormattingEnabled = true;
			this->combobox->Location = System::Drawing::Point(458, 172);
			this->combobox->Name = L"combobox";
			this->combobox->Size = System::Drawing::Size(100, 21);
			this->combobox->TabIndex = 12;
			// 
			// combobox_txt
			// 
			this->combobox_txt->Location = System::Drawing::Point(337, 172);
			this->combobox_txt->Name = L"combobox_txt";
			this->combobox_txt->Size = System::Drawing::Size(100, 20);
			this->combobox_txt->TabIndex = 13;
			// 
			// add_btn
			// 
			this->add_btn->Location = System::Drawing::Point(362, 217);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(75, 23);
			this->add_btn->TabIndex = 14;
			this->add_btn->Text = L"Add";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &MyForm2::add_btn_Click);
			// 
			// delete_btn
			// 
			this->delete_btn->Location = System::Drawing::Point(458, 217);
			this->delete_btn->Name = L"delete_btn";
			this->delete_btn->Size = System::Drawing::Size(75, 23);
			this->delete_btn->TabIndex = 15;
			this->delete_btn->Text = L"Delete";
			this->delete_btn->UseVisualStyleBackColor = true;
			this->delete_btn->Click += gcnew System::EventHandler(this, &MyForm2::delete_btn_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(580, 261);
			this->Controls->Add(this->delete_btn);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->combobox_txt);
			this->Controls->Add(this->combobox);
			this->Controls->Add(this->gender_lbl);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->age_txt);
			this->Controls->Add(this->surname_txt);
			this->Controls->Add(this->name_txt);
			this->Controls->Add(this->age_lbl);
			this->Controls->Add(this->surname_lbl);
			this->Controls->Add(this->name_lbl);
			this->Controls->Add(this->save_btn);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
		}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void save_btn_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=global";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT into policedep.officers (Name,Surname,Age) values('"+this->name_txt->Text+"','"+this->surname_txt->Text+"','"+this->age_txt->Text +"');", conDatabase);
	MySqlDataReader^ myReader;

	try
	{
		conDatabase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Saved");

		while (myReader->Read())
		{

			
		}


	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void add_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		
	combobox->Items->Add(combobox_txt->Text);

}
private: System::Void delete_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		combobox->Items->Remove(combobox->Text);

}
};
}
