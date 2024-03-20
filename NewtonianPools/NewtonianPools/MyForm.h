#pragma once
#include <complex>


namespace NewtonianPools {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ saveBtn;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(29, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(561, 517);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mulish Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(596, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Бассейны ньютона";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(596, 62);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 76);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Построить график";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(593, 212);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(195, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Степень бассейна (1 - 10)";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(596, 243);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(201, 26);
			this->numericUpDown1->TabIndex = 7;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// saveBtn
			// 
			this->saveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->saveBtn->Location = System::Drawing::Point(596, 493);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(198, 66);
			this->saveBtn->TabIndex = 8;
			this->saveBtn->Text = L"Сохранить";
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &MyForm::saveBtn_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DisplayMember = L"1";
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"1 Классическая", L"2 Уровни (серая)", L"3 Уровни (красная)",
					L"4 Уровни (Синяя)", L"5 Уровни (Зеленая)", L"6 Зебра"
			});
			this->comboBox1->Location = System::Drawing::Point(596, 176);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(201, 24);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->Text = L"1 Классическая";
			this->comboBox1->ValueMember = L"1";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(598, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Тип раскраски";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(593, 291);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Кол-во итераций (20-100)";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown2->Location = System::Drawing::Point(596, 319);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(201, 26);
			this->numericUpDown2->TabIndex = 12;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 670);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->saveBtn);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Функция, для которой мы будем строить бассейны Ньютона
		std::complex<double> f(const std::complex<double>& z, int grade) {
			return  std::pow(z, grade) - 1.0;
		}

		// Производная функции f
		std::complex<double> df(const std::complex<double>& z, int grade) {
			return static_cast<double>(grade) * std::pow(z, grade - 1);
		}

		// Определение бассейна Ньютона для заданной точки
		int newtonPool(const std::complex<double>& z,int grade, int maxIterations) {
			std::complex<double> current = z;
			for (int i = 0; i < maxIterations; ++i) {
				std::complex<double> f_val = f(current, grade);
				std::complex<double> df_val = df(current, grade);
				current -= f_val / df_val;
				if (abs(f_val) < 1e-6) {
					// Точка сходится к корню
					return i;
				}
			}
			// Точка не сходится
			return -1;
		}
		// Функция для выбора текущей раскраск
		Color Сoloring(int iterations, int coloringType)
		{
			int checkIter = iterations * 10 > 255 ? 255 : iterations * 10;
			int hue = iterations % 3;
			Color color;
			switch (coloringType)
			{
			case 1:
				switch (hue) {
				case 0: color = Color::Red; break;
				case 1: color = Color::Green; break;
				case 2: color = Color::Blue; break;
				}
				return color;
			case 2:
				return iterations == -1 ? Color::Black : Color::FromArgb(checkIter, checkIter, checkIter);

			case 3:
				return iterations == -1 ? Color::Black : Color::FromArgb(checkIter, 0, 0);

			case 4:
				return iterations == -1 ? Color::Black : Color::FromArgb(0, 0, checkIter);

			case 5:
				return iterations == -1 ? Color::Black : Color::FromArgb(0, checkIter, 0);

			case 6:
				return iterations % 2 == 0 ? Color::Black : Color::White;
			}

		}
		// Функция для визуализации бассейна Ньютона
		void VisualizeNewtonPool(Graphics^ g, int width, int height, double xmin, double xmax, double ymin, double ymax, int maxIterations) {
			Bitmap^ bmp = gcnew Bitmap(width, height);
			for (int x = 0; x < width; ++x) {
				for (int y = 0; y < height; ++y) {
					double real = xmin + (xmax - xmin) * x / width;
					double imag = ymin + (ymax - ymin) * y / height;
					std::complex<double> z(real, imag);
					int iterations = newtonPool(z,grade, maxIterations);

					Color color = Сoloring(iterations, coloringType); 
					bmp->SetPixel(x, y, color);
				}
			}
			g->DrawImage(bmp, 0, 0);

			this->pictureBox1->Image = bmp; // вывод изображения на экран
		}
		
		int grade = 1; // степень
		int maxIterations = 50; // Максимальное количество итераций
		int coloringType = 1; // тип раскраски
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int pW = pictureBox1->Width, pH = pictureBox1->Height;
		Bitmap^ bitmap = gcnew Bitmap(pW, pH);
		//создаем поверхность для рисования (изображение) с размером элемента управления PictureBox
		Graphics^ g = Graphics::FromImage(bitmap); //создаем устройство для рисования на поверхности

		//находим середину и рисуем линии осей:
		int mX = int(pW - pW / 2);
		int mY = int(pH - pH / 2);
		g->DrawLine(Pens::Black, mX, 0, mX, pH);
		g->DrawLine(Pens::Black, 0, mY, pW, mY);
		g->ScaleTransform(1, -1); //переворачиваем ось Y для удобства восприятия
		g->TranslateTransform((float)mX, -(float)mY); //смещаем нулевую координату на пересечение осей


		VisualizeNewtonPool(g, pW, pH, -2.0, 2.0, -2.0, 2.0, maxIterations); // рисуем бассейн ньютона

		delete g;
		
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) { // меняем степень бассейна ньютона
	grade = (int)numericUpDown1->Value;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) { // меняем тип раскраски
	coloringType = comboBox1->SelectedIndex + 1;
}
private: System::Void saveBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	if (pictureBox1 == nullptr) return;
	/* Создаем указатель на тип SaveFileDialog для реализации сохранения */
	SaveFileDialog^ sfd = gcnew SaveFileDialog();

	/* Название окна, которое появится при нажатии кнопки */
	sfd->Title = "Сохранить картинку как...";

	/* Активация функции перезаписи файла, если файл с таким именем уже существует */
	sfd->OverwritePrompt = true;

	/* Активация функции проверки пути для сохранения файла (Если пути, указанного для сохранения не существует, то выдаст ошибку) */
	sfd->CheckPathExists = true;

	/* Описываем форматы сохранения файла */
	sfd->Filter = "Image Files(*.png)|*.png|Image Files(*.jpg)|*.jpg|All Files(*.*)|*.*";

	/* Активируем помощь для пользователя */
	sfd->ShowHelp = true;
	Bitmap^ bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height); // Новый Bitmap, куда копируется текущее изображение
	Graphics^ g = Graphics::FromImage(bmp);
	pictureBox1->DrawToBitmap(bmp, pictureBox1->ClientRectangle);

	Color^ clr = gcnew Color();
	Brush^ br = gcnew SolidBrush(clr->Black);
	System::Drawing::Font^ fnt = gcnew System::Drawing::Font("Alef", 10, FontStyle::Bold);
	g->DrawString("Степень бассейна: " + numericUpDown1->Value, fnt, br, 0, 0); // рисуем текст поверх картинки
	/* Если пользователь ввел имя файла, указал путь сохранения и нажал кнопку ОК, то файл сохраняется, иначе просто закрывается окно */
	if (sfd->ShowDialog() == Windows::Forms::DialogResult::OK)
		bmp->Save(sfd->FileName);
}
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) { // меняем кол-во итераций
	maxIterations = (int)numericUpDown2->Value;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) { // выполняется, когда запускаем программу
	grade = (int)numericUpDown1->Value; 
	coloringType = comboBox1->SelectedIndex + 1;
	maxIterations = (int)numericUpDown2->Value;
}
};
}
