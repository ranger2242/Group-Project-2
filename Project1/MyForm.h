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

	//Prototype
	System::Void sendCommand(String ^ s);

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnFwd
			// 
			this->btnFwd->BackColor = System::Drawing::Color::LimeGreen;
			this->btnFwd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->btnTLeft->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
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
			this->btnTRight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->btnRev->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->btnStop->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->btnSLeft->BackColor = System::Drawing::Color::DarkCyan;
			this->btnSLeft->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSLeft->Location = System::Drawing::Point(255, 228);
			this->btnSLeft->Name = L"btnSLeft";
			this->btnSLeft->Size = System::Drawing::Size(75, 23);
			this->btnSLeft->TabIndex = 6;
			this->btnSLeft->Text = L"Spin Left";
			this->btnSLeft->UseVisualStyleBackColor = false;
			this->btnSLeft->Click += gcnew System::EventHandler(this, &MyForm::btnSLeft_Click);
			// 
			// btnSRight
			// 
			this->btnSRight->BackColor = System::Drawing::Color::DarkCyan;
			this->btnSRight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSRight->Location = System::Drawing::Point(398, 228);
			this->btnSRight->Name = L"btnSRight";
			this->btnSRight->Size = System::Drawing::Size(75, 23);
			this->btnSRight->TabIndex = 7;
			this->btnSRight->Text = L"Spin Right";
			this->btnSRight->UseVisualStyleBackColor = false;
			this->btnSRight->Click += gcnew System::EventHandler(this, &MyForm::btnSRight_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Gray;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnExit->Location = System::Drawing::Point(255, 257);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 8;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// output
			// 
			this->output->BackColor = System::Drawing::Color::Silver;
			this->output->Location = System::Drawing::Point(12, 40);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(227, 253);
			this->output->TabIndex = 0;
			this->output->Text = L"";
			this->output->TextChanged += gcnew System::EventHandler(this, &MyForm::output_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->Location = System::Drawing::Point(267, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 93);
			this->panel1->TabIndex = 9;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(398, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"DEMO";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(479, 24);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(37, 20);
			this->toolStripMenuItem1->Text = L"File";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(479, 307);
			this->Controls->Add(this->button1);
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
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void appendOut(String ^s,bool nline) {
			if(nline)this->output->AppendText(s+"\n");
			else this->output->AppendText(s);
		}
private: System::Void btnFwd_Click(System::Object^  sender, System::EventArgs^  e) {
		appendOut("-Moving Forward",true);
		sendCommand("137 1 44 128 0");
		
	}
private: System::Void output_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnTLeft_Click(System::Object^  sender, System::EventArgs^  e) {
	appendOut("-Turning Left", true);
	sendCommand("137 1 44 1 244");
}
private: System::Void btnStop_Click(System::Object^  sender, System::EventArgs^  e) {
	appendOut("-Stoping", true);
	sendCommand("137 0 0 0 0");
}
private: System::Void btnTRight_Click(System::Object^  sender, System::EventArgs^  e) {
	appendOut("-Turning Right", true);
	sendCommand("137 1 44 255 56");
}
private: System::Void btnRev_Click(System::Object^  sender, System::EventArgs^  e) {
	appendOut("-Reversing", true);
	sendCommand("137 255 56 128 0"); 
}
private: System::Void btnSLeft_Click(System::Object^  sender, System::EventArgs^  e) {
	appendOut("-Spinning Left", true);
	sendCommand("137 1 44 0 1 157 0 90");
}
private: System::Void btnSRight_Click(System::Object^  sender, System::EventArgs^  e) {
	appendOut("-Spinning Right", true);
	sendCommand("137 1 44 255 255 157 0 90");

}

//Script: sendCommand( 152 BYTES_NUMBER );

private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
	appendOut("-Ending Communication", true);
	appendOut("-Exiting", true);
	MessageBox::Show("Are you sure you want to exit?","EXIT", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
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
	sendCommand("128");	//Sends Start command
	appendOut("Starting robot...", true);
	sendCommand("131"); //Sets robot to safe mode
	appendOut("Setting to Safe Mode...", true);

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

}
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("TEAM AWESOME 2016 \nChris Cavazos\nJacob Gibson", "Exception", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Are you sure you want to exit?", "EXIT", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);

}
};
}
