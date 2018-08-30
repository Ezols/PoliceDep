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
			Fillcombo();
			FillListBox();
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



	private: System::Windows::Forms::Label^  gender_lbl;







	private: System::Windows::Forms::Button^  delete_btn;
	private: System::Windows::Forms::ComboBox^  searchBox;
	private: System::Windows::Forms::ListBox^  listBox;









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
			this->gender_lbl = (gcnew System::Windows::Forms::Label());
			this->delete_btn = (gcnew System::Windows::Forms::Button());
			this->searchBox = (gcnew System::Windows::Forms::ComboBox());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(129, 217);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// save_btn
			// 
			this->save_btn->Location = System::Drawing::Point(346, 217);
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
			// gender_lbl
			// 
			this->gender_lbl->AutoSize = true;
			this->gender_lbl->Location = System::Drawing::Point(314, 61);
			this->gender_lbl->Name = L"gender_lbl";
			this->gender_lbl->Size = System::Drawing::Size(77, 13);
			this->gender_lbl->TabIndex = 11;
			this->gender_lbl->Text = L"Manual search";
			this->gender_lbl->Click += gcnew System::EventHandler(this, &MyForm2::label1_Click_1);
			// 
			// delete_btn
			// 
			this->delete_btn->Location = System::Drawing::Point(466, 217);
			this->delete_btn->Name = L"delete_btn";
			this->delete_btn->Size = System::Drawing::Size(75, 23);
			this->delete_btn->TabIndex = 15;
			this->delete_btn->Text = L"Delete";
			this->delete_btn->UseVisualStyleBackColor = true;
			this->delete_btn->Click += gcnew System::EventHandler(this, &MyForm2::delete_btn_Click);
			// 
			// searchBox
			// 
			this->searchBox->FormattingEnabled = true;
			this->searchBox->Location = System::Drawing::Point(397, 57);
			this->searchBox->Name = L"searchBox";
			this->searchBox->Size = System::Drawing::Size(100, 21);
			this->searchBox->TabIndex = 10;
			this->searchBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::searchBox_SelectedIndexChanged);
			// 
			// listBox
			// 
			this->listBox->FormattingEnabled = true;
			this->listBox->Location = System::Drawing::Point(317, 84);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(224, 108);
			this->listBox->TabIndex = 16;
			this->listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::listBox_SelectedIndexChanged);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(580, 261);
			this->Controls->Add(this->listBox);
			this->Controls->Add(this->delete_btn);
			this->Controls->Add(this->gender_lbl);
			this->Controls->Add(this->searchBox);
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
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT into policedep.officers (Name,Surname,Age) values('" + this->name_txt->Text + "','" + this->surname_txt->Text + "','" + this->age_txt->Text + "');", conDatabase);
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


	}
	private: System::Void delete_btn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		String^ constring = L"datasource=localhost;port=3306;username=root;password=global";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("DELETE FROM policedep.officers where name = '"+this->searchBox->Text+"';", conDatabase);
		MySqlDataReader^ myReader;

		
		try
		{
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Deleted");

		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}





	}
	private: void Fillcombo(void)
	{
		String^ constring = L"datasource=localhost;port=3306;username=root;password=global";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM policedep.officers;", conDatabase);
		MySqlDataReader^ myReader;

		try
		{
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read())
			{
				String^ vName;
				vName = myReader->GetString("Name");
				searchBox->Items->Add(vName);		
			}


		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
			
	private: void FillListBox(void)
	{
		String^ constring = L"datasource=localhost;port=3306;username=root;password=global";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM policedep.officers;", conDatabase);
		MySqlDataReader^ myReader;

		try
		{
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read())
			{
				String^ Name;
				Name = myReader->GetString("Name");
				String^ Surname;
				Surname = myReader->GetString("Surname");
				String^ Age;
				Age = myReader->GetInt32("Age").ToString();
				listBox->Items->Add(Name + ", " + Surname + ", " + Age);

			}


		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void searchBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		String^ comboVal = searchBox->Text;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=global";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM policedep.officers where name ='" + comboVal + "';", conDatabase);
		MySqlDataReader^ myReader;

		try
		{
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();

			if (myReader->Read())
			{
				String^ name = myReader->GetString("Name");
				name_txt->Text = name;
				String^ surname = myReader->GetString("Surname");
				surname_txt->Text = surname;
				String^ age = myReader->GetInt32("age").ToString();
				age_txt->Text = age;
			}


		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}

	}


private: System::Void listBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
