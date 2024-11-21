#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"
#include "Doctor.h"
#include "Mapper.h"
#include "DataManager.h"

namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  /// <summary>
  /// Summary for Form1
  /// </summary>
  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
    Form1(void)
    {
      InitializeComponent();
      //
      //TODO: Add the constructor code here
      //

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

    }

  protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }
  private: System::Windows::Forms::TabControl^ tabControl1;
  protected:

  protected:

  protected:
  private: System::Windows::Forms::TabPage^ tabPage1;
  private: System::Windows::Forms::TabPage^ tabPage2;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::TextBox^ textBox1;
  private: System::Windows::Forms::Button^ button6;
  private: System::Windows::Forms::Button^ button5;
  private: System::Windows::Forms::Button^ button4;
  private: System::Windows::Forms::Button^ button3;
  private: System::Windows::Forms::Button^ button2;
  private: System::Windows::Forms::Button^ button1;
  private: System::Windows::Forms::TextBox^ textBox3;
  private: System::Windows::Forms::TextBox^ textBox2;
  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::Label^ label5;
  private: System::Windows::Forms::DataGridView^ dataGridView1;





  protected:

  private:
    /// <summary>
    /// Required designer variable.
    /// </summary>
    System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
        this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
        this->button6 = (gcnew System::Windows::Forms::Button());
        this->button5 = (gcnew System::Windows::Forms::Button());
        this->button4 = (gcnew System::Windows::Forms::Button());
        this->button3 = (gcnew System::Windows::Forms::Button());
        this->button2 = (gcnew System::Windows::Forms::Button());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->textBox3 = (gcnew System::Windows::Forms::TextBox());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
        this->label5 = (gcnew System::Windows::Forms::Label());
        this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->tabControl1->SuspendLayout();
        this->tabPage1->SuspendLayout();
        this->tabPage2->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
        this->SuspendLayout();
        // 
        // tabControl1
        // 
        this->tabControl1->Controls->Add(this->tabPage1);
        this->tabControl1->Controls->Add(this->tabPage2);
        this->tabControl1->Location = System::Drawing::Point(12, 99);
        this->tabControl1->Name = L"tabControl1";
        this->tabControl1->SelectedIndex = 0;
        this->tabControl1->Size = System::Drawing::Size(921, 345);
        this->tabControl1->TabIndex = 0;
        // 
        // tabPage1
        // 
        this->tabPage1->BackColor = System::Drawing::Color::White;
        this->tabPage1->Controls->Add(this->button6);
        this->tabPage1->Controls->Add(this->button5);
        this->tabPage1->Controls->Add(this->button4);
        this->tabPage1->Controls->Add(this->button3);
        this->tabPage1->Controls->Add(this->button2);
        this->tabPage1->Controls->Add(this->button1);
        this->tabPage1->Controls->Add(this->textBox3);
        this->tabPage1->Controls->Add(this->textBox2);
        this->tabPage1->Controls->Add(this->textBox1);
        this->tabPage1->Controls->Add(this->label3);
        this->tabPage1->Controls->Add(this->label2);
        this->tabPage1->Controls->Add(this->label1);
        this->tabPage1->Location = System::Drawing::Point(4, 22);
        this->tabPage1->Name = L"tabPage1";
        this->tabPage1->Padding = System::Windows::Forms::Padding(3);
        this->tabPage1->Size = System::Drawing::Size(913, 319);
        this->tabPage1->TabIndex = 0;
        this->tabPage1->Text = L"tabPage1";
        this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
        // 
        // button6
        // 
        this->button6->BackColor = System::Drawing::Color::SeaShell;
        this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
        this->button6->Location = System::Drawing::Point(618, 243);
        this->button6->Name = L"button6";
        this->button6->Size = System::Drawing::Size(134, 45);
        this->button6->TabIndex = 11;
        this->button6->Text = L"Delete Doctor";
        this->button6->UseVisualStyleBackColor = false;
        // 
        // button5
        // 
        this->button5->BackColor = System::Drawing::Color::SeaShell;
        this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
        this->button5->Location = System::Drawing::Point(618, 182);
        this->button5->Name = L"button5";
        this->button5->Size = System::Drawing::Size(134, 45);
        this->button5->TabIndex = 10;
        this->button5->Text = L"Update Doctor";
        this->button5->UseVisualStyleBackColor = false;
        // 
        // button4
        // 
        this->button4->BackColor = System::Drawing::Color::SeaShell;
        this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
        this->button4->Location = System::Drawing::Point(417, 243);
        this->button4->Name = L"button4";
        this->button4->Size = System::Drawing::Size(134, 45);
        this->button4->TabIndex = 9;
        this->button4->Text = L"Search Doctor";
        this->button4->UseVisualStyleBackColor = false;
        // 
        // button3
        // 
        this->button3->BackColor = System::Drawing::Color::SeaShell;
        this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
        this->button3->Location = System::Drawing::Point(417, 182);
        this->button3->Name = L"button3";
        this->button3->Size = System::Drawing::Size(134, 45);
        this->button3->TabIndex = 8;
        this->button3->Text = L"View Doctor";
        this->button3->UseVisualStyleBackColor = false;
        this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
        // 
        // button2
        // 
        this->button2->BackColor = System::Drawing::Color::SeaShell;
        this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
        this->button2->Location = System::Drawing::Point(219, 243);
        this->button2->Name = L"button2";
        this->button2->Size = System::Drawing::Size(134, 45);
        this->button2->TabIndex = 7;
        this->button2->Text = L"Cancel";
        this->button2->UseVisualStyleBackColor = false;
        this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::SeaShell;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
        this->button1->Location = System::Drawing::Point(219, 182);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(134, 45);
        this->button1->TabIndex = 6;
        this->button1->Text = L"Add Doctor";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
        // 
        // textBox3
        // 
        this->textBox3->BackColor = System::Drawing::Color::AntiqueWhite;
        this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->textBox3->Location = System::Drawing::Point(219, 128);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(533, 26);
        this->textBox3->TabIndex = 5;
        // 
        // textBox2
        // 
        this->textBox2->BackColor = System::Drawing::Color::AntiqueWhite;
        this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->textBox2->Location = System::Drawing::Point(219, 70);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(533, 26);
        this->textBox2->TabIndex = 4;
        // 
        // textBox1
        // 
        this->textBox1->BackColor = System::Drawing::Color::AntiqueWhite;
        this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->textBox1->Location = System::Drawing::Point(219, 16);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(533, 26);
        this->textBox1->TabIndex = 3;
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label3->Location = System::Drawing::Point(133, 128);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(89, 24);
        this->label3->TabIndex = 2;
        this->label3->Text = L"Speciality";
        this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label2->Location = System::Drawing::Point(133, 73);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(66, 24);
        this->label2->TabIndex = 1;
        this->label2->Text = L"Phone";
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label1->Location = System::Drawing::Point(133, 19);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(61, 24);
        this->label1->TabIndex = 0;
        this->label1->Text = L"Name";
        this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
        // 
        // tabPage2
        // 
        this->tabPage2->Controls->Add(this->label5);
        this->tabPage2->Controls->Add(this->dataGridView1);
        this->tabPage2->Location = System::Drawing::Point(4, 22);
        this->tabPage2->Name = L"tabPage2";
        this->tabPage2->Padding = System::Windows::Forms::Padding(3);
        this->tabPage2->Size = System::Drawing::Size(913, 319);
        this->tabPage2->TabIndex = 1;
        this->tabPage2->Text = L"tabPage2";
        this->tabPage2->UseVisualStyleBackColor = true;
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->Font = (gcnew System::Drawing::Font(L"Clarendon Blk BT", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label5->Location = System::Drawing::Point(156, 14);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(333, 57);
        this->label5->TabIndex = 2;
        this->label5->Text = L"Doctor Data";
        this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
        // 
        // dataGridView1
        // 
        this->dataGridView1->BackgroundColor = System::Drawing::Color::Beige;
        this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView1->Location = System::Drawing::Point(166, 74);
        this->dataGridView1->Name = L"dataGridView1";
        this->dataGridView1->Size = System::Drawing::Size(661, 239);
        this->dataGridView1->TabIndex = 13;
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Font = (gcnew System::Drawing::Font(L"Clarendon Blk BT", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label4->Location = System::Drawing::Point(172, 39);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(685, 57);
        this->label4->TabIndex = 1;
        this->label4->Text = L"Doctor Mangment System";
        // 
        // Form1
        // 
        this->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::SystemColors::HighlightText;
        this->ClientSize = System::Drawing::Size(998, 456);
        this->Controls->Add(this->label4);
        this->Controls->Add(this->tabControl1);
        this->Name = L"Form1";
        this->Text = L"Form1";
        this->TransparencyKey = System::Drawing::Color::White;
        this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
        this->tabControl1->ResumeLayout(false);
        this->tabPage1->ResumeLayout(false);
        this->tabPage1->PerformLayout();
        this->tabPage2->ResumeLayout(false);
        this->tabPage2->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion

   // You can call the functions at a button click. If you prefer, 
    // you can call them by clicking a menu item.



  private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
  }
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    DataManager db;
    String^ file = "C:\\Users\\sp24-bsse-0087\\Desktop\\myfile.txt";
    array<Doctor^>^ docs = Mapper::mapdoctor(db.read(file));

    dataGridView1->Rows->Clear();
    dataGridView1->Columns->Clear();

    dataGridView1->Columns->Add("c1", "Name");
    dataGridView1->Columns->Add("c2", "Phone");
    dataGridView1->Columns->Add("c3","Speciality");

    for (int i = 0; i < docs->Length; i++) {
        dataGridView1->Rows->Add(docs[i]->name, docs[i]->phone, docs[i]->spec);
    }

    tabControl1->SelectedTab = tabControl1->TabPages[1];

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    DataManager manage;
    String^ datarow = textBox1->Text + " , " + textBox2->Text + " , " + textBox3->Text;
    String^ filename = "C:\\Users\\sp24-bsse-0087\\Desktop\\myfile.txt";
    manage.insert(filename, datarow);
    textBox1->Clear(); textBox2->Clear(); textBox3->Clear();
    MessageBox::Show("Data Inserted Successfully", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

