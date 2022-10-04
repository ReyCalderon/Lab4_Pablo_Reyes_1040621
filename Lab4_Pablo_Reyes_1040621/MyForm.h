#pragma once
#include <cstdLib>

namespace Lab4PabloReyes1040621 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int posicionTort = 0;
	int posicionLieb = 0;
	int* ptrTortuga;
	int* ptrLiebre;
	bool continuar = true;
	int matriz[2][70];

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ rectaTortuga;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ rectaLiebre;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rectaTortuga = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->rectaLiebre = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(135, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tortuga Vs Liebre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(197, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tortuga";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(66, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(66, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"La tortuga esta en la posición: 1";
			// 
			// rectaTortuga
			// 
			this->rectaTortuga->AutoSize = true;
			this->rectaTortuga->Location = System::Drawing::Point(25, 190);
			this->rectaTortuga->Name = L"rectaTortuga";
			this->rectaTortuga->Size = System::Drawing::Size(35, 13);
			this->rectaTortuga->TabIndex = 4;
			this->rectaTortuga->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(197, 243);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Liebre";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(63, 278);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(63, 321);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(150, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"La liebre esta en la posición: 1\r\n";
			// 
			// rectaLiebre
			// 
			this->rectaLiebre->AutoSize = true;
			this->rectaLiebre->Location = System::Drawing::Point(25, 362);
			this->rectaLiebre->Name = L"rectaLiebre";
			this->rectaLiebre->Size = System::Drawing::Size(35, 13);
			this->rectaLiebre->TabIndex = 8;
			this->rectaLiebre->Text = L"label9";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(308, 398);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 43);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Pulso del Reloj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 453);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->rectaLiebre);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->rectaTortuga);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Void correrMatrizTortuga() {
			for (int i = 0; i < 69; i++)
			{
				matriz[0][i] = 0;
			}
			matriz[0][posicionTort] = 1;
			rectaTortuga->Text = "";
			for (int i = 0; i < 69; i++)
			{
				rectaTortuga->Text += Convert::ToString(matriz[0][i]);
			}
		}
		
		Void correrMatrizLiebre() {
			for (int i = 0; i < 69; i++)
			{
				matriz[1][i] = 0;
			}
			matriz[1][posicionLieb] = 1;
			rectaLiebre->Text = "";
			for (int i = 0; i < 69; i++)
			{
				rectaLiebre->Text += Convert::ToString(matriz[1][i]);
			}
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{

		MessageBox::Show("¡BANG! ¡Y ARRANCAN!");

		matriz[0][posicionTort] = 1;
		rectaTortuga->Text = "";
		for (int i = 0; i < 69; i++)
		{
			rectaTortuga->Text += Convert::ToString(matriz[0][i]);
		}

		matriz[1][posicionLieb] = 1;
		rectaLiebre->Text = "";
		for (int i = 0; i < 69; i++)
		{
			rectaLiebre->Text += Convert::ToString(matriz[1][i]);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int randomTort, randomLieb;
		randomTort = rand() & 10 + 1;
		randomLieb = rand() % 10 + 1;

		if (continuar)
		{
			switch (randomTort)
			{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
				label3->Text = "Paso Velóz";
				if (posicionTort + randomTort >= 70)
				{
					continuar = false;
					posicionTort = 70;
					label4->Text = "La tortuga esta en la posición: " + Convert::ToString(posicionTort);
				}
				else
				{
					posicionTort += 3;
				}
				label4->Text = "La tortuga esta en la posición: " + Convert::ToString(posicionTort + 1);
				break;
			case 5:
			case 6:
				label3->Text = "Resbalón";
				if (posicionTort <= 6)
				{
					posicionTort = 0;
				}
				else
				{
					posicionTort -= 6;
				}
				label4->Text = "La tortuga esta en la posición: " + Convert::ToString(posicionTort +1 );
				break;
			case 7:
			case 8:
			case 9:
				label3->Text = "Paso lento";
				if (posicionTort + randomTort >= 70)
				{
					continuar = false;
					posicionTort = 70;
					label4->Text = "La tortuga esta en la posición: " + Convert::ToString(posicionTort);
				}
				else
				{
					posicionTort += 1;
				}
				label4->Text = "La tortuga esta en la posición: " + Convert::ToString(posicionTort +1);
				break;
			}


			switch (randomLieb)
			{
			case 0:
			case 1:
				label7->Text = "Duerme";
				posicionLieb += 0;
				label8->Text = "La liebre esta en la posición: " + Convert::ToString(posicionLieb +1);
				break;
			case 2:
			case 3:
				label7->Text = "Gran Salto";
				if (posicionLieb + randomLieb >= 70)
				{
					continuar = false;
					posicionLieb = 70;
				}
				else
				{
					posicionLieb += 9;
				}
				label8->Text = "La liebre esta en la posición: " + Convert::ToString(posicionLieb +1);
				break;
			case 4:
				label7->Text = "Gran Resbalón";
				if (posicionLieb <= 12)
				{
					posicionLieb = 0;
				}
				else
				{
					posicionLieb -= 12;
				}
				label8->Text = "La liebre esta en la posición: " + Convert::ToString(posicionLieb +1);
				break;

			case 5:
			case 6:
			case 7:
				label7->Text = "Salto Pequeño";
				if (posicionLieb + randomLieb >= 70)
				{
					continuar = false;
					posicionLieb = 70;
				}
				else
				{
					posicionLieb += 1;
				}
				label8->Text = "La liebre esta en la posición: " + Convert::ToString(posicionLieb +1);

				break;
			case 8:
			case 9:
				label7->Text = "Resbalón Pequeño";
				if (posicionLieb <= 2)
				{
					posicionLieb = 0;
				}
				else
				{
					posicionLieb -= 2;
				}
				label8->Text = "La liebre esta en la posición: " + Convert::ToString(posicionLieb +1);
				break;
			}


			if (posicionTort == posicionLieb)
			{
				int mostrar = posicionLieb + 1;
				MessageBox::Show("¡OUCH! en " + mostrar);
			}


			correrMatrizTortuga();
			correrMatrizLiebre();

		}
		else
		{
			if (posicionLieb == 70)
			{
				MessageBox::Show("La liebre gana. Ni Hablar");
				Form::Close();
			}
			else
			{
					MessageBox::Show("¡LA TORTUGA GANA! ¡BRAVO!");
					Form::Close();
			}
			

		}
		/* NO ME FUNCIONO CON IF ME DIJERON QUE LO HICIERA CON SWITCH ;((
		
		
		if (continuarLieb)
		{
			if (randomLieb == 1) {
				label7->Text = "Duerme";
				posicionLieb += 0;
				label8->Text = "Posición de la liebre: " + Convert::ToString(posicionLieb + 1);
			}

			if (2 <= randomLieb  && randomLieb >=3 ) {
				label7->Text = "Gran Salto";
				if (posicionLieb + randomLieb >= 69) {
					continuarLieb = false;
					posicionLieb = 70;
				}
				else
				{
					posicionLieb += 9;
				}
				label8->Text = "La tortuga esta en la posición: " + Convert::ToString(posicionLieb + 1);
			}

			if ( 4 <= randomLieb && randomLieb >= 6)
			{
				label7->Text = "Gran Resbalón";

				if (posicionLieb <= 12)
				{
					posicionLieb = 0;
				}
				else
				{
					posicionLieb -= 12;
				}
				label8->Text = "Posición de la liebre: " + Convert::ToString(posicionLieb +1 );

			}

			if ( 7<= randomLieb && randomLieb >= 8)
			{
				label7->Text = "Salto Pequeño";

				if (posicionLieb + randomLieb >= 69)
				{
					continuarLieb = false;
					posicionLieb = 70;
				}
				else
				{
					posicionLieb += 1;
				}
				label8->Text = "Posición de la liebre: " + Convert::ToString(posicionLieb + 1);

			}

			if (9<= randomLieb && randomTort >= 10)
			{
				label7->Text = "Resbalon pequeño";

				if (posicionLieb <= 2)
				{
					posicionLieb = 0;
				}
				else
				{
					posicionLieb -= 2;

				}

				label8->Text = "Posición de la liebre: " + Convert::ToString(posicionLieb + 1);
			}





		}*/
		
	}
	};
}