#pragma once
#include "CLstats.h"
namespace Interface2_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Stats
	/// </summary>
	public ref class Stats : public System::Windows::Forms::Form
	{
	public:
		Stats(void)
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
		~Stats()
		{
			if (components)
			{
				delete components;
			}
		}

	

	private: NS_Comp_Svc::CLstats^ oSvc = gcnew NS_Comp_Svc::CLstats;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button6;





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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1358, 479);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(282, 465);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(55, 17);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Remise";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(380, 408);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 17);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Marge";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(282, 408);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 17);
			this->label10->TabIndex = 24;
			this->label10->Text = L"TVA";
			this->label10->Click += gcnew System::EventHandler(this, &Stats::label10_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(719, 35);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(553, 359);
			this->dataGridView1->TabIndex = 23;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(357, 428);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 21;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(251, 428);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 20;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(374, 157);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 19;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(374, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 18;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(494, 427);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Calculer";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Stats::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(494, 374);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 16;
			this->button8->Text = L"Calculer";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Stats::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(491, 322);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Calculer";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Stats::button7_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(494, 214);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Calculer";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Stats::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(491, 156);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Calculer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Stats::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(491, 108);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Calculer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Stats::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(491, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Calculer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Stats::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(491, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Calculer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Stats::button1_Click_1);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(26, 431);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(199, 17);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Simulation valeur commerciale";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 380);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(224, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Calculer la valeur d’achat du stock";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 341);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(257, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Calculer la valeur commerciale du stock";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 283);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(266, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Identifier les 10 articles les moins vendus";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 221);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(255, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Identifier les 10 articles les plus vendus";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(323, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Calculer le montant total des achats pour un client";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(378, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Identifier les produits sous le seuil de réapprovisionnement";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(335, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Calculer le chiffre d’affaire sur un mois en particulier";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Calculer le panier moyen ";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(369, 497);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 22;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(263, 497);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 22;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(383, 477);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 17);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Demarque";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(494, 267);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 27;
			this->button6->Text = L"Calculer";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Stats::button6_Click);
			// 
			// Stats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1382, 553);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->textBox6);
			this->Name = L"Stats";
			this->Text = L"Stats";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Choix Statistiques
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

		   //Infos
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

		   //button Confirm
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void fontDialog1_Apply(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->dataGridView1->DataSource = this->oSvc->PanierMoyenApresRemise("rsl1");
	this->dataGridView1->DataMember = "rsl1";
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->dataGridView1->DataSource = this->oSvc->ChiffreAffaireMois("rsl2",this->textBox1->Text);
	this->dataGridView1->DataMember = "rsl2";
}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->dataGridView1->DataSource = this->oSvc->ArticlesSousStock("rsl3");
		this->dataGridView1->DataMember = "rsl3";
	}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->dataGridView1->DataSource = this->oSvc->MontantTotalClient("rsl4",this->textBox2->Text);
	this->dataGridView1->DataMember = "rsl4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->dataGridView1->DataSource = this->oSvc->DixArticlesPlusVendus("rsl5");
	this->dataGridView1->DataMember = "rsl5";

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->dataGridView1->DataSource = this->oSvc->DixArticlesMoinsVendus("rsl6");
	this->dataGridView1->DataMember = "rsl6";
}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->dataGridView1->DataSource = this->oSvc->ValeurCommercialeStock("rsl7");
	this->dataGridView1->DataMember = "rsl7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->dataGridView1->DataSource = this->oSvc->ValeurAchatStock("rsl8");
	this->dataGridView1->DataMember = "rsl8";
}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->dataGridView1->DataSource = this->oSvc->SimulValCommerciale("rsl9", this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text);
	this->dataGridView1->DataMember = "rsl9";
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
