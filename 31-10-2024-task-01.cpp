#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"
#include "DataManager.h"

namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;
  using namespace System::IO;

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
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::Label^ label3;


  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::TextBox^ textBox1;
  private: System::Windows::Forms::TextBox^ textBox2;
  private: System::Windows::Forms::TextBox^ textBox3;
  private: System::Windows::Forms::Button^ button3;
  private: System::Windows::Forms::Button^ button1;


  protected:

  protected:






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
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->textBox3 = (gcnew System::Windows::Forms::TextBox());
        this->button3 = (gcnew System::Windows::Forms::Button());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
        this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
        this->label1->Location = System::Drawing::Point(172, 104);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(526, 46);
        this->label1->TabIndex = 1;
        this->label1->Text = L"Doctor Management System";
        this->label1->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
        this->label2->Location = System::Drawing::Point(176, 210);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(61, 24);
        this->label2->TabIndex = 2;
        this->label2->Text = L"Name";
        this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click_1);
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
        this->label3->Location = System::Drawing::Point(173, 286);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(66, 24);
        this->label3->TabIndex = 3;
        this->label3->Text = L"Phone";
        this->label3->Click += gcnew System::EventHandler(this, &Form1::Phone_Click);
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
        this->label4->Location = System::Drawing::Point(176, 354);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(89, 24);
        this->label4->TabIndex = 4;
        this->label4->Text = L"Speciality";
        // 
        // textBox1
        // 
        this->textBox1->BackColor = System::Drawing::SystemColors::MenuBar;
        this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
        this->textBox1->Location = System::Drawing::Point(290, 210);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(574, 29);
        this->textBox1->TabIndex = 5;
        // 
        // textBox2
        // 
        this->textBox2->BackColor = System::Drawing::SystemColors::MenuBar;
        this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
        this->textBox2->Location = System::Drawing::Point(290, 283);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(574, 29);
        this->textBox2->TabIndex = 6;
        // 
        // textBox3
        // 
        this->textBox3->BackColor = System::Drawing::SystemColors::MenuBar;
        this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
        this->textBox3->Location = System::Drawing::Point(290, 354);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(574, 29);
        this->textBox3->TabIndex = 7;
        // 
        // button3
        // 
        this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
        this->button3->Location = System::Drawing::Point(290, 416);
        this->button3->Name = L"button3";
        this->button3->Size = System::Drawing::Size(95, 33);
        this->button3->TabIndex = 10;
        this->button3->Text = L"Cancel";
        this->button3->UseVisualStyleBackColor = true;
        this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
        // 
        // button1
        // 
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
        this->button1->Location = System::Drawing::Point(391, 416);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(137, 33);
        this->button1->TabIndex = 11;
        this->button1->Text = L"Add Doctor";
        this->button1->UseVisualStyleBackColor = true;
        this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::Azure;
        this->ClientSize = System::Drawing::Size(970, 544);
        this->Controls->Add(this->button1);
        this->Controls->Add(this->button3);
        this->Controls->Add(this->textBox3);
        this->Controls->Add(this->textBox2);
        this->Controls->Add(this->textBox1);
        this->Controls->Add(this->label4);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->label1);
        this->ForeColor = System::Drawing::SystemColors::ControlText;
        this->Name = L"Form1";
        this->Text = L"DMS";
        this->TransparencyKey = System::Drawing::Color::Snow;
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion

   // You can call the functions at a button click. If you prefer, 
    // you can call them by clicking a menu item.

 
  private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
  }
private: System::Void Phone_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ filePath = "C:\\Users\\sp24-bsse-0087\\Desktop\\dms.txt";
    DataManager^ manage = gcnew DataManager(filePath);
    manage->Cancel();

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
   /* MessageBox::Show(
        "Name : " + textBox1->Text +
        "\nPhone Number : " + textBox2->Text +
        "\nSpecialiity : " + textBox3->Text,
        "Doctor Information", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);*/

    String^ content = "Name : " + textBox1->Text + 
        ",\n" + "\nPhone Number : " + textBox2->Text +
        ",\n" + "\nSpecialiity : " + textBox3->Text + ",";
    String^ pfilePath = "C:\\Users\\sp24-bsse-0087\\Desktop\\dms.txt";
    File::WriteAllText(pfilePath, content);

     MessageBox::Show("Data Enter Successfully  " ,"Doctor Information", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
     textBox1->Clear(); textBox2->Clear(); textBox3->Clear();
}

}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

