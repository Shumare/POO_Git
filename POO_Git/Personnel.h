#pragma once
#include"CLemployees.h"
#include "ClCreateEmp_City.h"
#include "ClCreateEmp_Country.h"
#include "ClCreateEmp_Address.h"
#include "Acity.h"
#include "Acountry.h"
#include "ClCreateEmp_People.h"
#include "ClCreateEmp_Employee.h"
#include "ClCreateEmp_Users.h"
#include "ClCreateEmp_Own.h"


namespace Interface2_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Personnel
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
	private: NS_Comp_Svc::CLemployees^ oSvc = gcnew NS_Comp_Svc::CLemployees;
	private: NS_Comp_Svc::ClCreateEmp_City^ oSvc1 = gcnew NS_Comp_Svc::ClCreateEmp_City;
	private: NS_Comp_Svc::ClCreateEmp_Country^ oSvc2 = gcnew NS_Comp_Svc::ClCreateEmp_Country;
	private: NS_Comp_Svc::ClCreateEmp_Address^ oSvc3 = gcnew NS_Comp_Svc::ClCreateEmp_Address;
	private: NS_Comp_Svc::ClCreateEmp_People^ oSvc4 = gcnew NS_Comp_Svc::ClCreateEmp_People;
	private: NS_Comp_Svc::ClCreateEmp_Employee^ oSvc5 = gcnew NS_Comp_Svc::ClCreateEmp_Employee;
	private: NS_Comp_Svc::ClCreateEmp_Users^ oSvc6 = gcnew NS_Comp_Svc::ClCreateEmp_Users;
	private: NS_Comp_Svc::ClCreateEmp_Own^ oSvc7 = gcnew NS_Comp_Svc::ClCreateEmp_Own;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::DataGridView^ dataGridView6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox17;


	private: System::Windows::Forms::DataGridView^ dataGridView3;
	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
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


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

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
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	protected:

	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->label1->Location = System::Drawing::Point(6, 18);
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
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Personnel::groupBox1_Enter);
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
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->textBox16);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox15);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->comboBox3);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->textBox9);
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
			this->groupBox2->Size = System::Drawing::Size(621, 401);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(520, 42);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(95, 25);
			this->button13->TabIndex = 47;
			this->button13->Text = L"Up Peo";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Personnel::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(520, 104);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(95, 25);
			this->button12->TabIndex = 46;
			this->button12->Text = L"Up Emp";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Personnel::button12_Click);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(445, 105);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(69, 22);
			this->textBox16->TabIndex = 45;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox16_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(358, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 17);
			this->label4->TabIndex = 44;
			this->label4->Text = L"ID manager";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(445, 77);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(69, 22);
			this->textBox15->TabIndex = 43;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox15_TextChanged);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(358, 79);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(69, 17);
			this->label20->TabIndex = 42;
			this->label20->Text = L"ID People";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(520, 373);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(95, 23);
			this->button10->TabIndex = 41;
			this->button10->Text = L"New Own";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Personnel::button10_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(371, 376);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(42, 17);
			this->label15->TabIndex = 40;
			this->label15->Text = L"Nadd";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(198, 376);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(42, 17);
			this->label14->TabIndex = 39;
			this->label14->Text = L"Npeo";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(425, 373);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(89, 22);
			this->textBox11->TabIndex = 38;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox11_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(254, 373);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(72, 22);
			this->textBox8->TabIndex = 37;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox8_TextChanged);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(520, 278);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 33);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Personnel::button2_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 378);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 17);
			this->label13->TabIndex = 36;
			this->label13->Text = L"Own";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(520, 74);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(95, 25);
			this->button9->TabIndex = 35;
			this->button9->Text = L"New Emp";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Personnel::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(520, 10);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(95, 30);
			this->button8->TabIndex = 34;
			this->button8->Text = L"New People";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Personnel::button8_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Location = System::Drawing::Point(520, 317);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(95, 50);
			this->button7->TabIndex = 14;
			this->button7->Text = L"New Address";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Personnel::button7_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(186, 149);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(328, 22);
			this->textBox7->TabIndex = 33;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox7_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 149);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(72, 17);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Type Way";
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(492, 289);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(22, 22);
			this->button5->TabIndex = 31;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Personnel::button5_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(492, 261);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(22, 22);
			this->button4->TabIndex = 30;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Personnel::button4_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(186, 286);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(300, 24);
			this->comboBox3->TabIndex = 29;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Personnel::comboBox3_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(186, 258);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(300, 24);
			this->comboBox2->TabIndex = 26;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Personnel::comboBox2_SelectedIndexChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 345);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 17);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Number Res";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 317);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 17);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Type";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 289);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 17);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Country";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 261);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 17);
			this->label8->TabIndex = 22;
			this->label8->Text = L"City";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 233);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 17);
			this->label7->TabIndex = 21;
			this->label7->Text = L"PostCode";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 205);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 17);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 17);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Way";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(186, 345);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(328, 22);
			this->textBox10->TabIndex = 17;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox10_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(186, 317);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(328, 22);
			this->textBox9->TabIndex = 16;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox9_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(186, 233);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(328, 22);
			this->textBox6->TabIndex = 13;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox6_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(186, 205);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(328, 22);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(186, 177);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(328, 22);
			this->textBox4->TabIndex = 11;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(186, 74);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(157, 22);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Hire Date";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(186, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(328, 22);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Last Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(186, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(328, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(355, 520);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 33);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Personnel::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(639, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(719, 164);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Personnel::dataGridView1_CellContentClick);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(1151, 182);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(207, 58);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Load Addresses";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Personnel::button3_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(860, 248);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(29, 27);
			this->dataGridView2->TabIndex = 10;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Personnel::dataGridView2_CellContentClick);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(1135, 42);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(223, 111);
			this->dataGridView3->TabIndex = 11;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Personnel::dataGridView3_CellContentClick);
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(635, 187);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(510, 142);
			this->dataGridView4->TabIndex = 12;
			this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Personnel::dataGridView4_CellContentClick);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(1151, 271);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(207, 58);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Load People";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Personnel::button6_Click);
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(905, 26);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(240, 150);
			this->dataGridView5->TabIndex = 14;
			this->dataGridView5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Personnel::dataGridView5_CellContentClick);
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(649, 26);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->RowTemplate->Height = 24;
			this->dataGridView6->Size = System::Drawing::Size(240, 150);
			this->dataGridView6->TabIndex = 15;
			this->dataGridView6->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Personnel::dataGridView6_CellContentClick);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->textBox17);
			this->groupBox3->Controls->Add(this->button14);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->textBox14);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->button11);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->textBox13);
			this->groupBox3->Controls->Add(this->textBox12);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Location = System::Drawing::Point(674, 335);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(355, 174);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Users";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(113, 146);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(112, 23);
			this->button14->TabIndex = 8;
			this->button14->Text = L"Update";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Personnel::button14_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 62);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(66, 17);
			this->label19->TabIndex = 7;
			this->label19->Text = L"Id people";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(113, 62);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(236, 22);
			this->textBox14->TabIndex = 6;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox14_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 118);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(62, 17);
			this->label18->TabIndex = 5;
			this->label18->Text = L"Pasword";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(231, 146);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(118, 23);
			this->button11->TabIndex = 4;
			this->button11->Text = L"New user";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Personnel::button11_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 69);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 17);
			this->label17->TabIndex = 3;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(113, 118);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(236, 22);
			this->textBox13->TabIndex = 2;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox13_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(113, 90);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(236, 22);
			this->textBox12->TabIndex = 1;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox12_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 90);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(73, 17);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Username";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(113, 34);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(236, 22);
			this->textBox17->TabIndex = 9;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox17_TextChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 34);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(51, 17);
			this->label21->TabIndex = 10;
			this->label21->Text = L"Id user";
			// 
			// Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1382, 553);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->dataGridView6);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Choix Personnel 
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
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
	private: System::Void textBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox16_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Acity^ A1 = gcnew Acity();
		A1->Show();
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Acountry^ A2 = gcnew Acountry();
		A2->Show();
	}
	private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

		   //button DELETE
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc5->DeleteEmp_Emp("Delete", this->textBox15->Text);
	}

		   //button Update Address
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView5->Refresh();
		String^ foo = this->comboBox2->Text;
		this->dataGridView5->DataSource = this->oSvc3->SelectIdCity("rsl", foo);
		this->dataGridView5->DataMember = "rsl";
		int foo1 = (int)this->dataGridView5->Rows[0]->Cells[8]->Value;
		String^ result = System::Convert::ToString(foo1);
		this->dataGridView5->Refresh();
		String^ foo2 = this->comboBox3->Text;
		this->dataGridView6->DataSource = this->oSvc3->SelectIdCountry("rsl1", foo2);
		this->dataGridView6->DataMember = "rsl1";
		int foo3 = (int)this->dataGridView6->Rows[0]->Cells[0]->Value;
		String^ result1 = System::Convert::ToString(foo3);
		this->oSvc3->UpdateEmp_Add("Update", this->textBox11->Text, this->textBox5->Text, this->textBox7->Text, this->textBox4->Text, this->textBox10->Text, this->textBox9->Text, this->textBox6->Text, result1, result);
	}

	//button update Emp
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc5->UpdateEmp_Emp("Update", this->textBox15->Text, this->textBox3->Text, this->textBox16->Text);
	}

	//button update Peo
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc4->UpdateEmp_Peo("Update", this->textBox15->Text, this->textBox1->Text, this->textBox2->Text);
	}

		   //button update Users
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc6->UpdateEmp_Use("Update", this->textBox17->Text, this->textBox14->Text, this->textBox12->Text, this->textBox13->Text);
	}

		   //Afficher la/les tables
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->dataGridView1->DataSource = this->oSvc3->ReadEmp_Add("rsl");
		this->dataGridView1->DataMember = "rsl";
		this->dataGridView2->Refresh();
		this->dataGridView2->DataSource = this->oSvc1->ReadEmp_Cit("rsl");
		this->dataGridView2->DataMember = "rsl";
		String^ foo;
		for (int i = 0; i < this->dataGridView2->RowCount - 1; i++)
		{
			foo = (System::String^)this->dataGridView2->Rows[i]->Cells[1]->Value;
			String^ result = foo->Trim();
			comboBox2->Items->Add(result);
		}
		this->dataGridView3->Refresh();
		this->dataGridView3->DataSource = this->oSvc2->ReadEmp_Cou("rsl");
		this->dataGridView3->DataMember = "rsl";
		String^ foo1;
		for (int i = 0; i < this->dataGridView3->RowCount - 1; i++)
		{
			foo1 = (System::String^)this->dataGridView3->Rows[i]->Cells[1]->Value;
			String^ result = foo1->Trim();
			comboBox3->Items->Add(result);
		}
	}
	private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView4->Refresh();
		this->dataGridView4->DataSource = this->oSvc->SelectTout("rsl");
		this->dataGridView4->DataMember = "rsl";
	}

	//pour pays et ville
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView6_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	//button New Address
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView5->Refresh();
		String^ foo = this->comboBox2->Text;
		this->dataGridView5->DataSource = this->oSvc3->SelectIdCity("rsl", foo);
		this->dataGridView5->DataMember = "rsl";
		int foo1 = (int)this->dataGridView5->Rows[0]->Cells[8]->Value;
		String^ result = System::Convert::ToString(foo1);
		this->dataGridView5->Refresh();
		String^ foo2 = this->comboBox3->Text;
		this->dataGridView6->DataSource = this->oSvc3->SelectIdCountry("rsl1", foo2);
		this->dataGridView6->DataMember = "rsl1";
		int foo3 = (int)this->dataGridView6->Rows[0]->Cells[0]->Value;
		String^ result1 = System::Convert::ToString(foo3);
		this->oSvc3->CreateEmp_Add("New", this->textBox5->Text, this->textBox7->Text, this->textBox4->Text, this->textBox10->Text, this->textBox9->Text, this->textBox6->Text, result1, result);;
	}

	//button New People
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc4->CreateEmp_Peo("New", this->textBox1->Text, this->textBox2->Text);
	}

	//button New employees
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc5->CreateEmp_Emp("New", this->textBox15->Text, this->textBox3->Text, this->textBox16->Text);
	}

	//ADD Own
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	//button Own
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc7->CreateEmp_Own("New", this->textBox8->Text, this->textBox11->Text);
	}

	//ADD Users
	private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox17_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	//button User
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc6->CreateEmp_Use("New", this->textBox14->Text, this->textBox12->Text, this->textBox13->Text);
	}

};
}
