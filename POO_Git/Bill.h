#pragma once

namespace Interface2_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Bill
	/// </summary>
	public ref class Bill : public System::Windows::Forms::Form
	{
	public:
		Bill(void)
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
		~Bill()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label13;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(400, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"CreateBill";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Bill::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(52, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L".tx", L".pdf", L".doc" });
			this->comboBox1->Location = System::Drawing::Point(212, 42);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(241, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Extension";
			this->label1->Click += gcnew System::EventHandler(this, &Bill::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(71, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"FileName";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(74, 139);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Bill::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(259, 139);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Bill::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(74, 198);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Bill::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(259, 198);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 8;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Bill::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(74, 252);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 9;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Bill::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(259, 252);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 10;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Bill::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(74, 303);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 11;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Bill::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(259, 303);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 12;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Bill::textBox9_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(74, 355);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 13;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Bill::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(259, 355);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 14;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &Bill::textBox11_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 17);
			this->label3->TabIndex = 15;
			this->label3->Text = L"PrixTotalAvecRemise";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(277, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 17);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Total HT";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(81, 178);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 17);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Total TVA";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(289, 178);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 17);
			this->label6->TabIndex = 18;
			this->label6->Text = L"TTC";
			this->label6->Click += gcnew System::EventHandler(this, &Bill::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(81, 232);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 17);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Nom Société";
			this->label7->Click += gcnew System::EventHandler(this, &Bill::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(256, 232);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(109, 17);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Adresse société";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(77, 283);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 17);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Numero Client";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(268, 283);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 17);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Nom Client";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(241, 335);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(129, 17);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Addresse Livraison";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(408, 303);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(143, 17);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Addresse Facturation";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(424, 323);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 25;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &Bill::textBox12_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(77, 335);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(80, 17);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Code Client";
			this->label13->Click += gcnew System::EventHandler(this, &Bill::label13_Click);
			// 
			// Bill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 410);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Bill";
			this->Text = L"Bill";
			this->Load += gcnew System::EventHandler(this, &Bill::Bill_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		using namespace System::IO;
		String^ fileName = this->textBox1->Text;
		StreamWriter^ sw = gcnew StreamWriter(fileName+this->comboBox1->Text);
		sw->WriteLine("Total articles avec remise "+this->textBox2->Text);
		sw->WriteLine("Total HT "+this->textBox3->Text);
		sw->WriteLine("Total TVA " + this->textBox4->Text);
		sw->WriteLine("Total TTC " + this->textBox5->Text);
		sw->WriteLine("Nom de la société " + this->textBox6->Text);
		sw->WriteLine("Addresse Société " + this->textBox7->Text);
		sw->WriteLine("Numéro client " + this->textBox8->Text);
		sw->WriteLine("Nom du client " + this->textBox9->Text);
		sw->WriteLine("Code client " + this->textBox10->Text);
		sw->WriteLine("Addresse livraison "+this->textBox11->Text);
		sw->WriteLine("Addresse facturation "+this->textBox12->Text);
		sw->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void Bill_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
