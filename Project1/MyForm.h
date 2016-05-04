#pragma once
#include <string>
#include <iostream>;

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::IO;

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

	protected:

	private: System::Windows::Forms::Button^  btnFwd;
	private: System::Windows::Forms::Button^  btnTLeft;
	private: System::Windows::Forms::Button^  btnTRight;
	private: System::Windows::Forms::Button^  btnRev;
	protected:




	private: System::Windows::Forms::Button^  btnStop;
	private: System::Windows::Forms::Button^  btnSLeft;
	private: System::Windows::Forms::Button^  btnSRight;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::RichTextBox^  output;
	private: System::IO::Ports::SerialPort^  port;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::ComponentModel::IContainer^  components;





	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnFwd = (gcnew System::Windows::Forms::Button());
			this->btnTLeft = (gcnew System::Windows::Forms::Button());
			this->btnTRight = (gcnew System::Windows::Forms::Button());
			this->btnRev = (gcnew System::Windows::Forms::Button());
			this->btnStop = (gcnew System::Windows::Forms::Button());
			this->btnSLeft = (gcnew System::Windows::Forms::Button());
			this->btnSRight = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->output = (gcnew System::Windows::Forms::RichTextBox());
			this->port = (gcnew System::IO::Ports::SerialPort(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// btnFwd
			// 
			this->btnFwd->BackColor = System::Drawing::Color::LimeGreen;
			this->btnFwd->Location = System::Drawing::Point(325, 141);
			this->btnFwd->Name = L"btnFwd";
			this->btnFwd->Size = System::Drawing::Size(75, 23);
			this->btnFwd->TabIndex = 1;
			this->btnFwd->Text = L"Forward";
			this->btnFwd->UseVisualStyleBackColor = false;
			this->btnFwd->Click += gcnew System::EventHandler(this, &MyForm::btnFwd_Click);
			// 
			// btnTLeft
			// 
			this->btnTLeft->BackColor = System::Drawing::Color::Goldenrod;
			this->btnTLeft->Location = System::Drawing::Point(273, 170);
			this->btnTLeft->Name = L"btnTLeft";
			this->btnTLeft->Size = System::Drawing::Size(64, 23);
			this->btnTLeft->TabIndex = 2;
			this->btnTLeft->Text = L"Left Turn";
			this->btnTLeft->UseVisualStyleBackColor = false;
			this->btnTLeft->Click += gcnew System::EventHandler(this, &MyForm::btnTLeft_Click);
			// 
			// btnTRight
			// 
			this->btnTRight->BackColor = System::Drawing::Color::Goldenrod;
			this->btnTRight->Location = System::Drawing::Point(387, 170);
			this->btnTRight->Name = L"btnTRight";
			this->btnTRight->Size = System::Drawing::Size(67, 23);
			this->btnTRight->TabIndex = 3;
			this->btnTRight->Text = L"Right Turn";
			this->btnTRight->UseVisualStyleBackColor = false;
			this->btnTRight->Click += gcnew System::EventHandler(this, &MyForm::btnTRight_Click);
			// 
			// btnRev
			// 
			this->btnRev->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnRev->Location = System::Drawing::Point(325, 199);
			this->btnRev->Name = L"btnRev";
			this->btnRev->Size = System::Drawing::Size(75, 23);
			this->btnRev->TabIndex = 4;
			this->btnRev->Text = L"Reverse";
			this->btnRev->UseVisualStyleBackColor = false;
			this->btnRev->Click += gcnew System::EventHandler(this, &MyForm::btnRev_Click);
			// 
			// btnStop
			// 
			this->btnStop->BackColor = System::Drawing::Color::Red;
			this->btnStop->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnStop->Location = System::Drawing::Point(343, 170);
			this->btnStop->Name = L"btnStop";
			this->btnStop->Size = System::Drawing::Size(38, 23);
			this->btnStop->TabIndex = 5;
			this->btnStop->Text = L"Stop";
			this->btnStop->UseVisualStyleBackColor = false;
			this->btnStop->Click += gcnew System::EventHandler(this, &MyForm::btnStop_Click);
			// 
			// btnSLeft
			// 
			this->btnSLeft->Location = System::Drawing::Point(273, 228);
			this->btnSLeft->Name = L"btnSLeft";
			this->btnSLeft->Size = System::Drawing::Size(64, 23);
			this->btnSLeft->TabIndex = 6;
			this->btnSLeft->Text = L"Spin Left";
			this->btnSLeft->UseVisualStyleBackColor = true;
			this->btnSLeft->Click += gcnew System::EventHandler(this, &MyForm::btnSLeft_Click);
			// 
			// btnSRight
			// 
			this->btnSRight->Location = System::Drawing::Point(387, 228);
			this->btnSRight->Name = L"btnSRight";
			this->btnSRight->Size = System::Drawing::Size(67, 23);
			this->btnSRight->TabIndex = 7;
			this->btnSRight->Text = L"Spin Right";
			this->btnSRight->UseVisualStyleBackColor = true;
			this->btnSRight->Click += gcnew System::EventHandler(this, &MyForm::btnSRight_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(325, 257);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 8;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// output
			// 
			this->output->BackColor = System::Drawing::Color::Silver;
			this->output->Location = System::Drawing::Point(13, 13);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(227, 267);
			this->output->TabIndex = 0;
			this->output->Text = L"";
			this->output->TextChanged += gcnew System::EventHandler(this, &MyForm::output_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Location = System::Drawing::Point(267, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 93);
			this->panel1->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(479, 292);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnSRight);
			this->Controls->Add(this->btnSLeft);
			this->Controls->Add(this->btnStop);
			this->Controls->Add(this->btnRev);
			this->Controls->Add(this->btnTRight);
			this->Controls->Add(this->btnTLeft);
			this->Controls->Add(this->btnFwd);
			this->Controls->Add(this->output);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		void appendOut(String ^s,bool nline) {
			if(nline)this->output->AppendText(s+"\n");
			else this->output->AppendText(s);
		}
	private: System::Void btnFwd_Click(System::Object^  sender, System::EventArgs^  e) {
		appendOut("-Moving Forward",true);
	}
private: System::Void output_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnTLeft_Click(System::Object^  sender, System::EventArgs^  e) {
	appendOut("-Turning Left", true);

}
private: System::Void btnStop_Click(System::Object^  sender, System::EventArgs^  e) {
	appendOut("-Stoping", true);

}
private: System::Void btnTRight_Click(System::Object^  sender, System::EventArgs^  e) {
	appendOut("-Turning Right", true);

}
private: System::Void btnRev_Click(System::Object^  sender, System::EventArgs^  e) {
	appendOut("-Reversing", true);

}
private: System::Void btnSLeft_Click(System::Object^  sender, System::EventArgs^  e) {
	appendOut("-Spinning Left", true);
}
private: System::Void btnSRight_Click(System::Object^  sender, System::EventArgs^  e) {
	appendOut("-Spinning Right", true);

}

private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
	appendOut("-Ending Communication", true);
	appendOut("-Exiting", true);
	MessageBox::Show("prnid","Fucking errors", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
}

private: System::Void sendCommand(String ^ s) {
	int index;
	int MAXELEMENTS = 100;
	String^ one;
	array<String^>^ Fields;
	unsigned char oneByte;
	cli::array<unsigned char, 1>^ buffer = gcnew cli::array<unsigned char>(MAXELEMENTS);
	for (index = 0; index < MAXELEMENTS; index++) {
		buffer[index] = '\0';
	}
	try {
		s = s->Trim();
		if ((s == String::Empty) || (s == " ")) {
			return;
		}
		index = 0;
		Fields = s->Split(' ');
		for each (one in Fields) {
			oneByte = Convert::ToByte(one);
			buffer[index] = oneByte;
			if (this->port->IsOpen == true) {
				this->port->Write(buffer, index, 1);
				MessageBox::Show("Byte :" + buffer[index].ToString());

			}
			index++;
		}
	}
	catch (IOException^ e) {
		String^ s1 = e->GetType()->ToString();
		MessageBox::Show("IO Error in sendCommand():" + e->Message + "\n\n" +s1 + "\n" + e->StackTrace, "Exception", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ e2) {
		String^ s1 = e2->GetType()->ToString();
		MessageBox::Show("General Error in sendCommand():" + e2->Message + "\n\n" + s1 + "\n" + e2->StackTrace, "Exception", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void Wait(int sec) {
	String^ c = "155" + (sec * 10).ToString();
	sendCommand(c);
	appendOut("Waiting For " + sec.ToString() + " seconds...",true);
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	this->port = gcnew SerialPort;
	appendOut("Initalizing COMM Port", true);
	this->port->PortName = "COM3";
	this->port->BaudRate = 57600;
	this->port->Parity = Parity::None;
	this->port->DataBits = 8;
	this->port->StopBits = StopBits::One;
	bool isOpen = false;
	appendOut("Opening Port", true);
	//this->port->Open();
	if (!this->port->IsOpen) {

	}

}
};
}
