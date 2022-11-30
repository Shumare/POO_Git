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
	/// Description résumée de Sup
	/// </summary>
	public ref class Sup : public System::Windows::Forms::Form
	{
	public:
		Sup(void)
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
		~Sup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(49, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 350);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Gestion du Personnel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Sup::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button2->Location = System::Drawing::Point(381, 69);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 350);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Gestion des Clients";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Sup::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Lime;
			this->button3->Location = System::Drawing::Point(713, 69);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(250, 350);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Gestion du Stock";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Sup::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Lime;
			this->button4->Location = System::Drawing::Point(1045, 69);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(250, 350);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Gestion des Commandes";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Sup::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Lime;
			this->button5->Location = System::Drawing::Point(713, 459);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(582, 60);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Statistiques";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Sup::button5_Click);
			// 
			// Sup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1382, 553);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Sup";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sup";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Personnel^ Pers1 = gcnew Personnel();
		Pers1->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Client^ Client1 = gcnew Client();
		Client1->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Stock^ Stock1 = gcnew Stock();
		Stock1->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Commande^ Com1 = gcnew Commande();
		Com1->Show();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Stats^ Stat1 = gcnew Stats();
		Stat1->Show();
	}
	};
}
