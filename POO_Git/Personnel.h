#pragma once

namespace Interface2_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Personnel
	/// </summary>
	public ref class Personnel : public System::Windows::Forms::Form
	{
	public:
		Personnel(void)
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
		~Personnel()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;

	protected:

	protected:

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Enabled = false;
			this->comboBox1->Location = System::Drawing::Point(280, 65);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(234, 24);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Personnel::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"First Name";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(520, 95);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton2->Location = System::Drawing::Point(280, 21);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(146, 21);
			this->radioButton2->TabIndex = 11;
			this->radioButton2->Text = L"Personnel Existant";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Personnel::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton1->Location = System::Drawing::Point(9, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(154, 21);
			this->radioButton1->TabIndex = 10;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Nouveau Personnel";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Personnel::radioButton1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(12, 113);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(520, 344);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 314);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 17);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Number Res";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 286);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 17);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Type";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 258);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 17);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Country";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 230);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 17);
			this->label8->TabIndex = 22;
			this->label8->Text = L"City";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 202);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 17);
			this->label7->TabIndex = 21;
			this->label7->Text = L"PostCode";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 174);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 17);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 146);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 17);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Way";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 17);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Address";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(186, 314);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(328, 22);
			this->textBox10->TabIndex = 17;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox10_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(186, 286);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(328, 22);
			this->textBox9->TabIndex = 16;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox9_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(186, 258);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(328, 22);
			this->textBox8->TabIndex = 15;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox8_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(186, 230);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(328, 22);
			this->textBox7->TabIndex = 14;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(186, 202);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(328, 22);
			this->textBox6->TabIndex = 13;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox6_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(186, 174);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(328, 22);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(186, 146);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(328, 22);
			this->textBox4->TabIndex = 11;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(186, 90);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(328, 22);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Hire Date";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(186, 62);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(328, 22);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Last Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(186, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(328, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(355, 463);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 33);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Personnel::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(161, 463);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 33);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Enregistrer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Personnel::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(639, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(719, 381);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Personnel::dataGridView1_CellContentClick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1151, 399);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(207, 58);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Load";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Personnel::button3_Click);
			// 
			// Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1382, 553);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Personnel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Personnel";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Choix Personnel 
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			this->comboBox1->Enabled = false;
			this->textBox3->ReadOnly = false;
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true)
		{
			this->comboBox1->Enabled = true;
			this->textBox3->ReadOnly = true;
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

		   //Info Personnel
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

		   //button DELETE
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   //button Enregistrer
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   //Afficher la/les tables
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
