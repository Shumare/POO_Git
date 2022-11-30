#pragma once
#include "Personnel.h"
#include "Client.h"
#include "Stock.h"
#include "Commande.h"
#include "Stats.h"

namespace Interface2_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Pers
	/// </summary>
	public ref class Pers : public System::Windows::Forms::Form
	{
	public:
		Pers(void)
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
		~Pers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(78, 84);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 350);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Gestion des Clients";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Pers::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button2->Location = System::Drawing::Point(410, 84);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 350);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Gestion du Stock";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Pers::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Lime;
			this->button3->Location = System::Drawing::Point(742, 84);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(250, 350);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Gestion des Commandes";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Pers::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Lime;
			this->button4->Location = System::Drawing::Point(742, 463);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(582, 60);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Statistiques";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Pers::button4_Click);
			// 
			// Pers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1382, 553);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Pers";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pers";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Client^ Client1 = gcnew Client();
		Client1->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Stock^ Stock1 = gcnew Stock();
		Stock1->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Commande^ Com1 = gcnew Commande();
		Com1->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Stats^ Stat1 = gcnew Stats();
		Stat1->Show();
	}
	};
}
