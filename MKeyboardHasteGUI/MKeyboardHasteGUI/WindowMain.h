#pragma once

namespace MKeyboardHasteGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WindowMain
	/// </summary>
	public ref class WindowMain : public System::Windows::Forms::Form
	{
	public:
		WindowMain(void)
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
		~WindowMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  checkBoxEnabled;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TrackBar^  trackBarDelay;
	private: System::Windows::Forms::TrackBar^  trackBarRepeat;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxTestArea;

	private: System::Windows::Forms::TextBox^  textBoxDelay;
	private: System::Windows::Forms::TextBox^  textBoxRepeat;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBoxError;
	private: System::Windows::Forms::Button^  buttonClear;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBoxLogo;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(WindowMain::typeid));
			this->checkBoxEnabled = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->trackBarDelay = (gcnew System::Windows::Forms::TrackBar());
			this->trackBarRepeat = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTestArea = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDelay = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRepeat = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxError = (gcnew System::Windows::Forms::TextBox());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxLogo = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarDelay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarRepeat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBoxEnabled
			// 
			this->checkBoxEnabled->AutoSize = true;
			this->checkBoxEnabled->Location = System::Drawing::Point(15, 142);
			this->checkBoxEnabled->Name = L"checkBoxEnabled";
			this->checkBoxEnabled->Size = System::Drawing::Size(65, 17);
			this->checkBoxEnabled->TabIndex = 0;
			this->checkBoxEnabled->Text = L"Enabled";
			this->checkBoxEnabled->UseVisualStyleBackColor = true;
			this->checkBoxEnabled->CheckedChanged += gcnew System::EventHandler(this, &WindowMain::checkBoxEnabled_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 178);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Delay [ms]:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 242);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Repeat [ms]:";
			// 
			// trackBarDelay
			// 
			this->trackBarDelay->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBarDelay->Location = System::Drawing::Point(12, 194);
			this->trackBarDelay->Maximum = 1000;
			this->trackBarDelay->Name = L"trackBarDelay";
			this->trackBarDelay->Size = System::Drawing::Size(538, 45);
			this->trackBarDelay->TabIndex = 2;
			this->trackBarDelay->Value = 250;
			this->trackBarDelay->ValueChanged += gcnew System::EventHandler(this, &WindowMain::trackBarDelay_ValueChanged);
			// 
			// trackBarRepeat
			// 
			this->trackBarRepeat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBarRepeat->Location = System::Drawing::Point(12, 258);
			this->trackBarRepeat->Maximum = 1000;
			this->trackBarRepeat->Name = L"trackBarRepeat";
			this->trackBarRepeat->Size = System::Drawing::Size(538, 45);
			this->trackBarRepeat->TabIndex = 4;
			this->trackBarRepeat->Value = 15;
			this->trackBarRepeat->ValueChanged += gcnew System::EventHandler(this, &WindowMain::trackBarRepeat_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 336);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Test Area:";
			// 
			// textBoxTestArea
			// 
			this->textBoxTestArea->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxTestArea->Location = System::Drawing::Point(12, 352);
			this->textBoxTestArea->Multiline = true;
			this->textBoxTestArea->Name = L"textBoxTestArea";
			this->textBoxTestArea->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxTestArea->Size = System::Drawing::Size(538, 136);
			this->textBoxTestArea->TabIndex = 6;
			// 
			// textBoxDelay
			// 
			this->textBoxDelay->Location = System::Drawing::Point(85, 175);
			this->textBoxDelay->Name = L"textBoxDelay";
			this->textBoxDelay->Size = System::Drawing::Size(59, 20);
			this->textBoxDelay->TabIndex = 1;
			this->textBoxDelay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxDelay->TextChanged += gcnew System::EventHandler(this, &WindowMain::textBoxDelay_TextChanged);
			// 
			// textBoxRepeat
			// 
			this->textBoxRepeat->Location = System::Drawing::Point(85, 239);
			this->textBoxRepeat->Name = L"textBoxRepeat";
			this->textBoxRepeat->Size = System::Drawing::Size(59, 20);
			this->textBoxRepeat->TabIndex = 3;
			this->textBoxRepeat->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxRepeat->TextChanged += gcnew System::EventHandler(this, &WindowMain::textBoxRepeat_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 306);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Error:";
			// 
			// textBoxError
			// 
			this->textBoxError->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxError->Location = System::Drawing::Point(50, 303);
			this->textBoxError->Name = L"textBoxError";
			this->textBoxError->ReadOnly = true;
			this->textBoxError->Size = System::Drawing::Size(500, 20);
			this->textBoxError->TabIndex = 0;
			this->textBoxError->TabStop = false;
			this->textBoxError->Text = L"-";
			// 
			// buttonClear
			// 
			this->buttonClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonClear->Location = System::Drawing::Point(475, 329);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(75, 23);
			this->buttonClear->TabIndex = 5;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &WindowMain::buttonClear_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(396, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Allows you to set your keyboard speed more flexible than windows\' system settings" 
				L".";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 108);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(398, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Note: You have to set this again after a reboot. I suggest putting it in your aut" 
				L"ostart.";
			// 
			// pictureBoxLogo
			// 
			this->pictureBoxLogo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBoxLogo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxLogo.Image")));
			this->pictureBoxLogo->Location = System::Drawing::Point(0, -7);
			this->pictureBoxLogo->Name = L"pictureBoxLogo";
			this->pictureBoxLogo->Size = System::Drawing::Size(563, 90);
			this->pictureBoxLogo->TabIndex = 14;
			this->pictureBoxLogo->TabStop = false;
			// 
			// WindowMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(562, 500);
			this->Controls->Add(this->pictureBoxLogo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->textBoxError);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxRepeat);
			this->Controls->Add(this->textBoxDelay);
			this->Controls->Add(this->textBoxTestArea);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->trackBarRepeat);
			this->Controls->Add(this->trackBarDelay);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBoxEnabled);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"WindowMain";
			this->Text = L"MKeyboardHaste    (c) 2012 M. Rochel";
			this->Load += gcnew System::EventHandler(this, &WindowMain::WindowMain_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarDelay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarRepeat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public:
			int delay;
			int repeat;
			
			bool guibusy;

			int SetSpeed(const bool enabled, int delay, int repeat);

	private: System::Void WindowMain_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBoxEnabled_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void trackBarDelay_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void trackBarRepeat_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBoxDelay_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBoxRepeat_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void buttonClear_Click(System::Object^  sender, System::EventArgs^  e);
};
}
