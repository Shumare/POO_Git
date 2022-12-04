#pragma once
#include "Sup.h"
#include "Pers.h"
namespace Interface2_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Connection
	/// </summary>
	public ref class Connection : public System::Windows::Forms::Form
	{
	public:
		Connection(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Connection()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;




	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(12, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 350);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Supérieur";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Connection::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button2->Location = System::Drawing::Point(1060, 45);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 350);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Personnel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Connection::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(495, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username";
			this->label1->Click += gcnew System::EventHandler(this, &Connection::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(498, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &Connection::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(498, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Connection::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(498, 212);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Connection::textBox2_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(997, 373);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Connection::dataGridView1_CellContentClick_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(498, 292);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Connexion";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Connection::button3_Click_1);
			// 
			// Connection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1382, 553);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Connection";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Connection";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Sup^ S1 = gcnew Sup();
		S1->Show();
		this->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Pers^ P1 = gcnew Pers();
		P1->Show();
		this->Hide();
	}

	//test
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}

