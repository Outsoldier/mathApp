#pragma once

namespace numGenGui {


	#include <stdlib.h>  
	#include <dos.h>  
	#include <time.h>
	#include <filesystem>
	#include <wchar.h>
	#include <Windows.h>
	#include <math.h>
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::NumericUpDown^ UpDown1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::NumericUpDown^ guessNum;
	private: System::Windows::Forms::NumericUpDown^ minNum;
	private: System::Windows::Forms::NumericUpDown^ maxNum;




	private: System::Windows::Forms::ListBox^ Ouput1;
	private: System::Windows::Forms::ListBox^ guessBox;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ NumberGen;
	private: System::Windows::Forms::TabPage^ tabPage2;




	private: System::Windows::Forms::Button^ console;
	private: System::Windows::Forms::Button^ Quick;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::NumericUpDown^ lengthValue;


	private: System::Windows::Forms::Button^ solve;
	private: System::Windows::Forms::NumericUpDown^ heightValue;





	private: System::Windows::Forms::CheckedListBox^ choiceMath;
	private: System::Windows::Forms::CheckedListBox^ typeMath;
	private: System::Windows::Forms::Label^ answer;
	private: System::Windows::Forms::Label^ lengthLabel;
	private: System::Windows::Forms::Label^ heightLabel;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ widthValue;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ version;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;












	protected:

	protected:






	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->UpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->guessNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->minNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->maxNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->Ouput1 = (gcnew System::Windows::Forms::ListBox());
			this->guessBox = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Quick = (gcnew System::Windows::Forms::Button());
			this->console = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->NumberGen = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->version = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->answer = (gcnew System::Windows::Forms::Label());
			this->typeMath = (gcnew System::Windows::Forms::CheckedListBox());
			this->solve = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->choiceMath = (gcnew System::Windows::Forms::CheckedListBox());
			this->widthValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->lengthLabel = (gcnew System::Windows::Forms::Label());
			this->heightLabel = (gcnew System::Windows::Forms::Label());
			this->lengthValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->heightValue = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guessNum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minNum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxNum))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->NumberGen->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->widthValue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lengthValue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->heightValue))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(8, 442);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"0";
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(11, 533);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// UpDown1
			// 
			this->UpDown1->AutoSize = true;
			this->UpDown1->BackColor = System::Drawing::Color::White;
			this->UpDown1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->UpDown1->Cursor = System::Windows::Forms::Cursors::Default;
			this->UpDown1->ForeColor = System::Drawing::Color::Black;
			this->UpDown1->Location = System::Drawing::Point(13, 117);
			this->UpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -1486618624, 232830643, 0, 0 });
			this->UpDown1->Name = L"UpDown1";
			this->UpDown1->Size = System::Drawing::Size(191, 29);
			this->UpDown1->TabIndex = 2;
			this->UpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::UpDown1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(-4, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(319, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Enter how much you want to randomize";
			// 
			// guessNum
			// 
			this->guessNum->AutoSize = true;
			this->guessNum->Location = System::Drawing::Point(13, 208);
			this->guessNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->guessNum->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, System::Int32::MinValue });
			this->guessNum->Name = L"guessNum";
			this->guessNum->Size = System::Drawing::Size(191, 29);
			this->guessNum->TabIndex = 5;
			this->guessNum->ValueChanged += gcnew System::EventHandler(this, &MyForm::guessNum_ValueChanged);
			// 
			// minNum
			// 
			this->minNum->AutoSize = true;
			this->minNum->Location = System::Drawing::Point(13, 291);
			this->minNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->minNum->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, System::Int32::MinValue });
			this->minNum->Name = L"minNum";
			this->minNum->Size = System::Drawing::Size(191, 29);
			this->minNum->TabIndex = 6;
			// 
			// maxNum
			// 
			this->maxNum->AutoSize = true;
			this->maxNum->Location = System::Drawing::Point(13, 362);
			this->maxNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->maxNum->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, System::Int32::MinValue });
			this->maxNum->Name = L"maxNum";
			this->maxNum->Size = System::Drawing::Size(191, 29);
			this->maxNum->TabIndex = 7;
			this->maxNum->ValueChanged += gcnew System::EventHandler(this, &MyForm::maxNum_ValueChanged);
			// 
			// Ouput1
			// 
			this->Ouput1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->Ouput1->Dock = System::Windows::Forms::DockStyle::Right;
			this->Ouput1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ouput1->ForeColor = System::Drawing::Color::White;
			this->Ouput1->FormattingEnabled = true;
			this->Ouput1->ItemHeight = 21;
			this->Ouput1->Location = System::Drawing::Point(1439, 3);
			this->Ouput1->Name = L"Ouput1";
			this->Ouput1->Size = System::Drawing::Size(157, 869);
			this->Ouput1->TabIndex = 10;
			// 
			// guessBox
			// 
			this->guessBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->guessBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->guessBox->Dock = System::Windows::Forms::DockStyle::Left;
			this->guessBox->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guessBox->ForeColor = System::Drawing::Color::White;
			this->guessBox->FormattingEnabled = true;
			this->guessBox->ItemHeight = 21;
			this->guessBox->Location = System::Drawing::Point(321, 3);
			this->guessBox->Name = L"guessBox";
			this->guessBox->Size = System::Drawing::Size(171, 869);
			this->guessBox->TabIndex = 11;
			this->guessBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::guessBox_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->Quick);
			this->panel1->Controls->Add(this->console);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->UpDown1);
			this->panel1->Controls->Add(this->maxNum);
			this->panel1->Controls->Add(this->guessNum);
			this->panel1->Controls->Add(this->minNum);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(318, 869);
			this->panel1->TabIndex = 12;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(-4, 851);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(116, 21);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Version 0.0.0.2";
			// 
			// Quick
			// 
			this->Quick->AutoSize = true;
			this->Quick->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->Quick->FlatAppearance->BorderSize = 0;
			this->Quick->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Quick->ForeColor = System::Drawing::Color::White;
			this->Quick->Location = System::Drawing::Point(11, 570);
			this->Quick->Name = L"Quick";
			this->Quick->Size = System::Drawing::Size(85, 31);
			this->Quick->TabIndex = 17;
			this->Quick->Text = L"Fast";
			this->Quick->UseVisualStyleBackColor = false;
			this->Quick->Click += gcnew System::EventHandler(this, &MyForm::Quick_Click);
			// 
			// console
			// 
			this->console->AutoSize = true;
			this->console->Location = System::Drawing::Point(11, 603);
			this->console->Name = L"console";
			this->console->Size = System::Drawing::Size(85, 31);
			this->console->TabIndex = 16;
			this->console->Text = L"Console";
			this->console->UseVisualStyleBackColor = true;
			this->console->Click += gcnew System::EventHandler(this, &MyForm::console_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(12, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(204, 60);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Num Gen";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(-4, 338);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(157, 21);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Enter Max Number";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(50, 22);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(-4, 267);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 21);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Enter Min Number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(-4, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(263, 21);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Enter number you want to guess";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(-23, -46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->ImageLocation = L"";
			this->pictureBox3->Location = System::Drawing::Point(529, 6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(853, 609);
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->NumberGen);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1607, 901);
			this->tabControl1->TabIndex = 16;
			// 
			// NumberGen
			// 
			this->NumberGen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->NumberGen->Controls->Add(this->chart1);
			this->NumberGen->Controls->Add(this->pictureBox3);
			this->NumberGen->Controls->Add(this->Ouput1);
			this->NumberGen->Controls->Add(this->guessBox);
			this->NumberGen->Controls->Add(this->panel1);
			this->NumberGen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NumberGen->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->NumberGen->Location = System::Drawing::Point(4, 22);
			this->NumberGen->Name = L"NumberGen";
			this->NumberGen->Padding = System::Windows::Forms::Padding(3);
			this->NumberGen->Size = System::Drawing::Size(1599, 875);
			this->NumberGen->TabIndex = 0;
			this->NumberGen->Text = L"Num Gen";
			this->NumberGen->Click += gcnew System::EventHandler(this, &MyForm::NumberGen_Click);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->chart1->BorderlineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->chart1->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			this->chart1->BorderlineWidth = 5;
			this->chart1->BorderSkin->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->chart1->BorderSkin->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			this->chart1->BorderSkin->BorderWidth = 5;
			chartArea2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Cursor = System::Windows::Forms::Cursors::Default;
			this->chart1->Dock = System::Windows::Forms::DockStyle::Bottom;
			legend2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			legend2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend2->ForeColor = System::Drawing::Color::White;
			legend2->IsTextAutoFit = false;
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(492, 622);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			series2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series2->LabelBackColor = System::Drawing::Color::White;
			series2->LabelBorderColor = System::Drawing::Color::Black;
			series2->LabelBorderWidth = 0;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(947, 250);
			this->chart1->TabIndex = 18;
			this->chart1->Text = L"chart1";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->tabPage2->Controls->Add(this->panel2);
			this->tabPage2->ForeColor = System::Drawing::Color::White;
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1599, 875);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Calculate";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->AutoSize = true;
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel2->Controls->Add(this->version);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->answer);
			this->panel2->Controls->Add(this->typeMath);
			this->panel2->Controls->Add(this->solve);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->choiceMath);
			this->panel2->Controls->Add(this->widthValue);
			this->panel2->Controls->Add(this->lengthLabel);
			this->panel2->Controls->Add(this->heightLabel);
			this->panel2->Controls->Add(this->lengthValue);
			this->panel2->Controls->Add(this->heightValue);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(237, 872);
			this->panel2->TabIndex = 14;
			// 
			// version
			// 
			this->version->AutoSize = true;
			this->version->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->version->ForeColor = System::Drawing::Color::White;
			this->version->Location = System::Drawing::Point(-4, 851);
			this->version->Name = L"version";
			this->version->Size = System::Drawing::Size(116, 21);
			this->version->TabIndex = 19;
			this->version->Text = L"Version 0.0.0.2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Impact", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(10, 14);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(224, 60);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Calculate";
			// 
			// answer
			// 
			this->answer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->answer->AutoSize = true;
			this->answer->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->answer->ForeColor = System::Drawing::Color::White;
			this->answer->Location = System::Drawing::Point(12, 739);
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(127, 45);
			this->answer->TabIndex = 9;
			this->answer->Text = L"Answer";
			// 
			// typeMath
			// 
			this->typeMath->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->typeMath->CheckOnClick = true;
			this->typeMath->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->typeMath->ForeColor = System::Drawing::Color::White;
			this->typeMath->FormattingEnabled = true;
			this->typeMath->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Area", L"Volume", L"Primeter", L"Surface Area" });
			this->typeMath->Location = System::Drawing::Point(19, 91);
			this->typeMath->Name = L"typeMath";
			this->typeMath->Size = System::Drawing::Size(120, 114);
			this->typeMath->TabIndex = 8;
			// 
			// solve
			// 
			this->solve->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->solve->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->solve->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->solve->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->solve->Location = System::Drawing::Point(19, 678);
			this->solve->Name = L"solve";
			this->solve->Size = System::Drawing::Size(120, 43);
			this->solve->TabIndex = 2;
			this->solve->Text = L"Solve";
			this->solve->UseVisualStyleBackColor = false;
			this->solve->Click += gcnew System::EventHandler(this, &MyForm::solve_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(16, 564);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 21);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Width";
			// 
			// choiceMath
			// 
			this->choiceMath->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->choiceMath->CheckOnClick = true;
			this->choiceMath->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->choiceMath->ForeColor = System::Drawing::Color::White;
			this->choiceMath->FormattingEnabled = true;
			this->choiceMath->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Square", L"Cube", L"Circle", L"Sphere", L"Triangle",
					L"Pyramid", L"Cylinder", L"Rectangle", L"Rectangular Prism"
			});
			this->choiceMath->Location = System::Drawing::Point(19, 211);
			this->choiceMath->Name = L"choiceMath";
			this->choiceMath->Size = System::Drawing::Size(152, 202);
			this->choiceMath->TabIndex = 7;
			// 
			// widthValue
			// 
			this->widthValue->BackColor = System::Drawing::Color::White;
			this->widthValue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->widthValue->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->widthValue->ForeColor = System::Drawing::Color::Black;
			this->widthValue->Location = System::Drawing::Point(19, 588);
			this->widthValue->Name = L"widthValue";
			this->widthValue->Size = System::Drawing::Size(120, 23);
			this->widthValue->TabIndex = 12;
			// 
			// lengthLabel
			// 
			this->lengthLabel->AutoSize = true;
			this->lengthLabel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lengthLabel->ForeColor = System::Drawing::Color::White;
			this->lengthLabel->Location = System::Drawing::Point(16, 434);
			this->lengthLabel->Name = L"lengthLabel";
			this->lengthLabel->Size = System::Drawing::Size(157, 21);
			this->lengthLabel->TabIndex = 11;
			this->lengthLabel->Text = L"Length/Radius/Base";
			// 
			// heightLabel
			// 
			this->heightLabel->AutoSize = true;
			this->heightLabel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->heightLabel->ForeColor = System::Drawing::Color::White;
			this->heightLabel->Location = System::Drawing::Point(15, 500);
			this->heightLabel->Name = L"heightLabel";
			this->heightLabel->Size = System::Drawing::Size(60, 21);
			this->heightLabel->TabIndex = 10;
			this->heightLabel->Text = L"Height";
			// 
			// lengthValue
			// 
			this->lengthValue->AutoSize = true;
			this->lengthValue->BackColor = System::Drawing::Color::White;
			this->lengthValue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lengthValue->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lengthValue->ForeColor = System::Drawing::Color::Black;
			this->lengthValue->Location = System::Drawing::Point(19, 458);
			this->lengthValue->Name = L"lengthValue";
			this->lengthValue->Size = System::Drawing::Size(120, 23);
			this->lengthValue->TabIndex = 0;
			// 
			// heightValue
			// 
			this->heightValue->BackColor = System::Drawing::Color::White;
			this->heightValue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->heightValue->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->heightValue->ForeColor = System::Drawing::Color::Black;
			this->heightValue->Location = System::Drawing::Point(19, 524);
			this->heightValue->Name = L"heightValue";
			this->heightValue->Size = System::Drawing::Size(120, 23);
			this->heightValue->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1607, 901);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Math App";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guessNum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minNum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxNum))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->NumberGen->ResumeLayout(false);
			this->NumberGen->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->widthValue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lengthValue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->heightValue))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
	bool clicked = false;
	__int64 nums = 0;
	__int64 value;
	__int64 num = 0;
	__int64 min = 0;
	__int64 max = 0;
	__int64 guess = 0;
	__int64 line;
	int x;
	/*std::filesystem::path getCurrentProcessDirectory()
	{
		wchar_t buffer[MAX_PATH];
		GetModuleFileName(NULL, buffer, sizeof(buffer));
		return std::filesystem::path(buffer).parent_path();
	}*/

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (clicked)
	{
		if (nums == value)
		{
			nums = value;
		}
		else
		{
			num = (min + rand() % (max - min));
			Ouput1->Items->Add(num + " Line: " + line + "");
			label1->Text = nums + "";
			nums++;
			if (num == guess)
			{

				guessBox->Items->Add(num + " Line: " + line + "");
			}

			chart1->Series["Series1"]->Points->AddXY(line, num);

		}
	}


	line++;

	guess = System::Convert::ToInt64(Math::Round(guessNum->Value, 0));
	value = System::Convert::ToInt64(Math::Round(UpDown1->Value, 0));
	max = System::Convert::ToInt64(Math::Round(maxNum->Value, 0));
	min = System::Convert::ToInt64(Math::Round(minNum->Value, 0));

}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	clicked = true;

	if (button1->Text == "Start")
	{
		button1->Text = "Stop";
		timer1->Enabled = true;

	}
	else
	{
		button1->Text = "Start";
		timer1->Enabled = false;
	}
		
}

private: System::Void Quick_Click(System::Object^ sender, System::EventArgs^ e) {
	for (x; x <= value; x++)
	{
		if (nums == value)
		{
			nums = value;
		}
		else
		{
			num = (min + rand() % (max - min));
			Ouput1->Items->Add(num + " Line: " + line + "");
			label1->Text = nums + "";
			nums++;
			if (num == guess)
			{

				guessBox->Items->Add(num + " Line: " + line + "");
			}

		}

		chart1->Series["Series1"]->Points->AddXY(line, num);

		line++;
	}
}

private: System::Void console_Click(System::Object^ sender, System::EventArgs^ e) {
}




private: System::Void UpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void guessNum_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maxNum_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void imgChng_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void guessBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void NumberGen_Click(System::Object^ sender, System::EventArgs^ e) {
}

double pi = 3.14159265358979311600;
double length;
double height;
double width;
double hypo;
double area = length * width;;
private: System::Void solve_Click(System::Object^ sender, System::EventArgs^ e) {

	height = System::Convert::ToDouble(heightValue->Value);
	length = System::Convert::ToDouble(lengthValue->Value);
	width = System::Convert::ToDouble(widthValue->Value);

	if (choiceMath->CheckedItems->Contains("Square"))
	{
		if (typeMath->CheckedItems->Contains("Area"))
		{
			answer->Text = length * height + "";
		}
		else
		{
			answer->Text = "Cant do that for square ma boi";
		}
	}
	else if (choiceMath->CheckedItems->Contains("Cube"))
	{
		if (typeMath->CheckedItems->Contains("Volume"))
		{
			answer->Text = length * height * width + "";
		}
		else if (typeMath->CheckedItems->Contains("Surface Area"))
		{
			answer->Text = (pow(length, 2))*6 + "";
		}
		else
		{
			answer->Text = "Cant do that for cube ma boi";
		}
	}
	else if (choiceMath->CheckedItems->Contains("Circle"))
	{
		if (typeMath->CheckedItems->Contains("Area"))
		{
			answer->Text = pow(length, 2) * pi + "";
		}
		else if (typeMath->CheckedItems->Contains("Primeter"))
		{
			answer->Text = 2 * length * pi + "";
		}
		else
		{
			answer->Text = "Cant do that for circle ma boi";
		}
	}
	else if (choiceMath->CheckedItems->Contains("Sphere"))
	{
		if (typeMath->CheckedItems->Contains("Volume"))
		{
			answer->Text = pow(length, 3) * pi * 4 / 3 + "";
		}
		else if (typeMath->CheckedItems->Contains("Surface Area"))
		{
			answer->Text = (pow(length, 2)) * 4 * pi + "";
		}
		else
		{
			answer->Text = "Cant do that for sphere ma boi";
		}
	}
	else if (choiceMath->CheckedItems->Contains("Triangle"))
	{
		if (typeMath->CheckedItems->Contains("Area"))
		{
			answer->Text = length * height / 2 + "";
		}
		else
		{
			answer->Text = "Cant do that for triangle ma boi";
		}
	}
	else if (choiceMath->CheckedItems->Contains("Pyramid"))
	{
		if (typeMath->CheckedItems->Contains("Volume"))
		{
			answer->Text = length * height * width / 3 + "";
		}
		else if (typeMath->CheckedItems->Contains("Surface Area"))
		{
			answer->Text = length * width + length * sqrt(pow((width / 2), 2) + pow(height, 2)) + width * sqrt(pow(length / 2, 2) + pow(height, 2)) + "";
		}
		else
		{
			answer->Text = "Cant do that for cube ma boi";
		}
	}
	else if (choiceMath->CheckedItems->Contains("Cylinder"))
	{
		if (typeMath->CheckedItems->Contains("Volume"))
		{
			answer->Text = pi * pow(length, 2) * height + "";
		}
		else if (typeMath->CheckedItems->Contains("Surface Area"))
		{
			answer->Text = 2 * pi * length * height + 2 * pi * pow(length, 2) + "";
		}
		else
		{
			answer->Text = "Cant do that for cylinder ma boi";
		}
	}
	
	else if (choiceMath->CheckedItems->Contains("Rectangle"))
	{
		if (typeMath->CheckedItems->Contains("Area"))
		{
			answer->Text = length * width + "";
		}
		else
		{
			answer->Text = "Cant do that for rectangle ma boi";
		}
	}
	else if (choiceMath->CheckedItems->Contains("Rectangular Prism"))
	{
		if (typeMath->CheckedItems->Contains("Volume"))
		{
			answer->Text = length * height * width + "";
		}
		else if (typeMath->CheckedItems->Contains("Surface Area"))
		{
			answer->Text = 2 * (width * length + height * length + height * width) + "";
		}
		else
		{
			answer->Text = "Cant do that for Rectangular Prism ma boi";
		}
	}

}
};
}
