#pragma once

namespace JustTattooCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ DateToday;
	private: System::Windows::Forms::TextBox^ DateCreate;
	private: System::Windows::Forms::TextBox^ DateExp;
	private: System::Windows::Forms::TextBox^ Result;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->DateToday = (gcnew System::Windows::Forms::TextBox());
			this->DateCreate = (gcnew System::Windows::Forms::TextBox());
			this->DateExp = (gcnew System::Windows::Forms::TextBox());
			this->Result = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// DateToday
			// 
			this->DateToday->Location = System::Drawing::Point(12, 12);
			this->DateToday->Name = L"DateToday";
			this->DateToday->Size = System::Drawing::Size(100, 20);
			this->DateToday->TabIndex = 0;
			// 
			// DateCreate
			// 
			this->DateCreate->Location = System::Drawing::Point(12, 38);
			this->DateCreate->Name = L"DateCreate";
			this->DateCreate->Size = System::Drawing::Size(100, 20);
			this->DateCreate->TabIndex = 1;
			// 
			// DateExp
			// 
			this->DateExp->Location = System::Drawing::Point(12, 64);
			this->DateExp->Name = L"DateExp";
			this->DateExp->Size = System::Drawing::Size(100, 20);
			this->DateExp->TabIndex = 2;
			// 
			// Result
			// 
			this->Result->Location = System::Drawing::Point(12, 90);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(100, 20);
			this->Result->TabIndex = 3;
			this->Result->Text = L"0%";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(391, 278);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->DateExp);
			this->Controls->Add(this->DateCreate);
			this->Controls->Add(this->DateToday);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"JustTattooCalc";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->DateToday->Text = "Today";
	}
	};
}
