#pragma once

//AYUDA JUAN SOLIS 
//GEEKS FOR GEEKS
//GITHUB
//STACKOVERFLOW
#include <windows.h>
#include <iostream>
#include "Pokemon.h"
#include <list>
#include <iterator> 
#include <vector> 
#include <fstream> 
#include "ordenamiento.h"
#include <msclr\marshal_cppstd.h>


Pokemon arrayPok[70];
namespace pkdx2DeLeónChang1170419 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	//PARA K FUNCIONE 
	using namespace System::Diagnostics;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			System::Windows::Forms::MessageBox::Show("CLICK EN BOTON DE PKDX", "AYUDA");
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnabrir;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;




	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnstupidnn;
	private: System::Windows::Forms::Button^ btnquicknn;
	private: System::Windows::Forms::Button^ btnbubblenn;








	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnabrir = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnstupidnn = (gcnew System::Windows::Forms::Button());
			this->btnquicknn = (gcnew System::Windows::Forms::Button());
			this->btnbubblenn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(472, 416);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnabrir
			// 
			this->btnabrir->Location = System::Drawing::Point(84, 356);
			this->btnabrir->Name = L"btnabrir";
			this->btnabrir->Size = System::Drawing::Size(25, 28);
			this->btnabrir->TabIndex = 1;
			this->btnabrir->Text = L"    ";
			this->btnabrir->UseVisualStyleBackColor = true;
			this->btnabrir->Click += gcnew System::EventHandler(this, &MyForm::Btnabrir_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 447);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingresar archivo";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(162, 243);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(197, 116);
			this->listBox1->TabIndex = 3;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(751, 133);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(148, 340);
			this->listBox3->TabIndex = 16;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(549, 133);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(148, 340);
			this->listBox2->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(635, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(266, 17);
			this->label2->TabIndex = 14;
			this->label2->Text = L"ORDENAR SEGÚN NATIONAL NUMBER";
			// 
			// btnstupidnn
			// 
			this->btnstupidnn->Location = System::Drawing::Point(919, 164);
			this->btnstupidnn->Name = L"btnstupidnn";
			this->btnstupidnn->Size = System::Drawing::Size(123, 69);
			this->btnstupidnn->TabIndex = 23;
			this->btnstupidnn->Text = L"STUPID sort";
			this->btnstupidnn->UseVisualStyleBackColor = true;
			this->btnstupidnn->Click += gcnew System::EventHandler(this, &MyForm::Btnstupidnn_Click);
			// 
			// btnquicknn
			// 
			this->btnquicknn->Location = System::Drawing::Point(751, 58);
			this->btnquicknn->Name = L"btnquicknn";
			this->btnquicknn->Size = System::Drawing::Size(135, 71);
			this->btnquicknn->TabIndex = 22;
			this->btnquicknn->Text = L"ORDERNAR QUICK";
			this->btnquicknn->UseVisualStyleBackColor = true;
			this->btnquicknn->Click += gcnew System::EventHandler(this, &MyForm::Btnquicknn_Click);
			// 
			// btnbubblenn
			// 
			this->btnbubblenn->Location = System::Drawing::Point(549, 58);
			this->btnbubblenn->Name = L"btnbubblenn";
			this->btnbubblenn->Size = System::Drawing::Size(137, 71);
			this->btnbubblenn->TabIndex = 21;
			this->btnbubblenn->Text = L"ORDERNAR BUBBLE ";
			this->btnbubblenn->UseVisualStyleBackColor = true;
			this->btnbubblenn->Click += gcnew System::EventHandler(this, &MyForm::Btnbubblenn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1089, 485);
			this->Controls->Add(this->btnstupidnn);
			this->Controls->Add(this->btnquicknn);
			this->Controls->Add(this->btnbubblenn);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnabrir);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"pkdx ordenamiento";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//CODIGO EXPLICADO POR MARIANA EN EL CUAL se extrae el texto hasta que encuentra <,>
	private: System::Void Btnabrir_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		string line;
		Pokemon linePokemon;
		vector<Pokemon> vectorPokemones;
		int coma;
		int nuevacoma;
		String^ nombre;
		string nuevalinea = "";

		msclr::interop::marshal_context context;
		list<string> listastring;
		list<string>::iterator itr = listastring.begin();
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ pathFile = openFileDialog1->FileName;
			string standardPathFile = context.marshal_as<std::string>(pathFile);
			ifstream archivotxt(standardPathFile);
			string linea;
			while (!archivotxt.eof()) {
				archivotxt >> linea;
				listastring.insert(itr, linea);
			}
			archivotxt.close();
			for (itr = listastring.begin(); itr != listastring.end(); ++itr) {
				line += " " + *itr;
			}
		}
		for each (string laslineas in listastring)
		{
			vector<string> DatosPokemon;
			Pokemon newPokemon;
			coma = laslineas.find(",");
			DatosPokemon.push_back(laslineas.substr(0, coma));
			nuevalinea = laslineas.substr(coma + 1, laslineas.size());
			nuevacoma = nuevalinea.find(",");
			DatosPokemon.push_back(nuevalinea.substr(0, nuevacoma));
			DatosPokemon.push_back(nuevalinea.substr(nuevacoma + 1, laslineas.size()));
			newPokemon.nombre = DatosPokemon[0];
			newPokemon.nacional = atoi(DatosPokemon[1].c_str());
			newPokemon.gen = atoi(DatosPokemon[2].c_str());
			vectorPokemones.push_back(newPokemon);
			String^ archivoo = gcnew String(laslineas.c_str());
			listBox1->Items->Add(archivoo->ToString());
		}
		int cont = 0;
		for each (Pokemon arrayPokemon in vectorPokemones) {
			arrayPok[cont] = arrayPokemon;
			cont++;
		}



	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

		 //comparacion de tiempos
		 String^ variable1;
		 String^ variable2;
		 double tiempo1, tiempo2;
private: System::Void Btnbubblenn_Click(System::Object^ sender, System::EventArgs^ e) {

	Stopwatch^ Timer = gcnew Stopwatch();
	Timer->Start();

	ordenamiento metodoss;
	Pokemon arrayBBSort[70];
	Pokemon newArrPok[70];
	for (int i = 0; i < 70; i++)
	{
		arrayBBSort[i] = arrayPok[i];
	}
	for (int i = 0; i < 70; i++)
	{
		newArrPok[i] = metodoss.bubbleSort(arrayBBSort, 70)[i];
	}
	for each (Pokemon arrayPokemon in newArrPok) {
		String^ elnombre = gcnew String(arrayPokemon.nombre.c_str());
		listBox2->Items->Add(elnombre + "," + arrayPokemon.nacional + "," + arrayPokemon.gen);

		/*
					// A function to implement bubble sort  
			void bubbleSort(int arr[], int n)  
			{  
				int i, j;  
				for (i = 0; i < n-1; i++)      
      
				// Last i elements are already in place  
				for (j = 0; j < n-i-1; j++)  
					if (arr[j] > arr[j+1])  
						swap(&arr[j], &arr[j+1]);  
			}  
		*/
		
	}

	Timer->Stop();
	/*
	a1= System::Convert::ToString(Timer->Elapsed);
	tiempo1= System::Convert::ToDouble(a1) * 100
	*/
	System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));

}
private: System::Void Btnquicknn_Click(System::Object^ sender, System::EventArgs^ e) {
	Stopwatch^ Timer = gcnew Stopwatch();
	Timer->Start();
	ordenamiento metodoss;
	Pokemon arrayQSort[70];
	Pokemon newArrPok[70];
	for (int i = 0; i < 70; i++)
	{
		arrayQSort[i] = arrayPok[i];
	}
	for (int i = 0; i < 70; i++)
	{
		newArrPok[i] = metodoss.quickSort(arrayQSort, 0, 9)[i];
	}
	for each (Pokemon arrayPokemon in newArrPok) {
		String^ elnombre = gcnew String(arrayPokemon.nombre.c_str());
		listBox3->Items->Add(elnombre + "," + arrayPokemon.nacional + "," + arrayPokemon.gen);
	}

	//GEEKS FOR GEEKS
	/* low  --> Starting index,  high  --> Ending index */
	/*
	quickSort(arr[], low, high)
	{
		if (low < high)
		{
			// pi is partitioning index, arr[pi] is now
			   //at right place 
			pi = partition(arr, low, high);

			quickSort(arr, low, pi - 1);  // Before pi
			quickSort(arr, pi + 1, high); // After pi
		}
	}
	
	*/
	
	Timer->Stop();
	/*
	a2= System::Convert::ToString(Timer->Elapsed);
	tiempo1= System::Convert::ToDouble(a2) * 100
	*/
	
	System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));

}
private: System::Void Btnstupidnn_Click(System::Object^ sender, System::EventArgs^ e) {
	Stopwatch^ Timer = gcnew Stopwatch();
	Timer->Start();
	ordenamiento metodoss;
	Pokemon arrayQSort[70];
	Pokemon newArrPok[70];
	System::Windows::Forms::MessageBox::Show("Nunca lo ordeno :c","PROBLEM :V");
	/*
	if (tiempo1 > tiempo2) {
		System::Windows::Forms::MessageBox::Show("Gano quick sort","GANADOR");
	}
	else {
		System::Windows::Forms::MessageBox::Show("Gano bubble sort", "GANADOR");
	}
	
	for (int i = 0; i < 70; i++)
	{
		arrayQSort[i] = arrayPok[i];
	}

	for each (Pokemon arrayPokemon in newArrPok) {
		String^ elnombre = gcnew String(arrayPokemon.nombre.c_str());
		listBox3->Items->Add(elnombre + "," + arrayPokemon.nacional + "," + arrayPokemon.gen);
	}
	*/

	
}
};
}
