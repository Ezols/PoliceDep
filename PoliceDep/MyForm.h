#pragma once

#include "MyForm2.h"

namespace PoliceDep {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			password_txt->PasswordChar = '*';
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Login;
	private: System::Windows::Forms::TextBox^  username_txt;
	private: System::Windows::Forms::TextBox^  password_txt;


	private: System::Windows::Forms::Label^  username_lbl;
	private: System::Windows::Forms::Label^  password_lbl;

	private: System::Windows::Forms::PictureBox^  pictureBox1;


	protected:



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Login = (gcnew System::Windows::Forms::Button());
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->username_lbl = (gcnew System::Windows::Forms::Label());
			this->password_lbl = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Login
			// 
			this->Login->Location = System::Drawing::Point(401, 441);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(75, 23);
			this->Login->TabIndex = 0;
			this->Login->Text = L"Login";
			this->Login->UseVisualStyleBackColor = true;
			this->Login->UseWaitCursor = true;
			this->Login->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// username_txt
			// 
			this->username_txt->Location = System::Drawing::Point(281, 389);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(133, 20);
			this->username_txt->TabIndex = 1;
			this->username_txt->UseWaitCursor = true;
			this->username_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::username_txt_TextChanged);
			// 
			// password_txt
			// 
			this->password_txt->Location = System::Drawing::Point(518, 389);
			this->password_txt->Name = L"password_txt";
			this->password_txt->Size = System::Drawing::Size(133, 20);
			this->password_txt->TabIndex = 2;
			this->password_txt->UseWaitCursor = true;
			this->password_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::password_txt_TextChanged);
			// 
			// username_lbl
			// 
			this->username_lbl->AutoSize = true;
			this->username_lbl->BackColor = System::Drawing::Color::Black;
			this->username_lbl->ForeColor = System::Drawing::Color::White;
			this->username_lbl->Location = System::Drawing::Point(202, 392);
			this->username_lbl->Name = L"username_lbl";
			this->username_lbl->Size = System::Drawing::Size(55, 13);
			this->username_lbl->TabIndex = 3;
			this->username_lbl->Text = L"Username";
			this->username_lbl->UseWaitCursor = true;
			this->username_lbl->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// password_lbl
			// 
			this->password_lbl->AutoSize = true;
			this->password_lbl->BackColor = System::Drawing::Color::Black;
			this->password_lbl->ForeColor = System::Drawing::Color::White;
			this->password_lbl->Location = System::Drawing::Point(445, 392);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(53, 13);
			this->password_lbl->TabIndex = 4;
			this->password_lbl->Text = L"Password";
			this->password_lbl->UseWaitCursor = true;
			this->password_lbl->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-8, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(881, 500);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(867, 501);
			this->Controls->Add(this->Login);
			this->Controls->Add(this->username_lbl);
			this->Controls->Add(this->password_txt);
			this->Controls->Add(this->password_lbl);
			this->Controls->Add(this->username_txt);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->UseWaitCursor = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
		String^ constring = L"datasource=localhost;port=3306;username=root;password=global";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM policedep.officers where username='"+this->username_txt->Text+"' and password='"+this->password_txt->Text+"';", conDatabase);
		MySqlDataReader^ myReader;
		try
		{
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			int count = 0;

			while (myReader->Read())
			{
				count = count + 1;
			}
			if (count == 1)
			{
				this->Hide();
				MyForm2^ f2 = gcnew MyForm2();
				f2->ShowDialog();
			}
			else if (count > 1)
			{
				MessageBox::Show("Access denied");
			}
			else
				MessageBox::Show("Something is not correct..");
		}
		catch(Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}

		}


	private: System::Void Msg_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void password_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void username_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
