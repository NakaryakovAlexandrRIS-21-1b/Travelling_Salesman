#pragma once
#include <vector>
#include "Voy.h"
struct Vector2f
{
	float x;
	float y;
	Vector2f() { x = 0; y = 0; };
	Vector2f(const double& a, const double& b) : x(a), y(b) {};
	friend Vector2f operator- (const Vector2f& start, const Vector2f& end);
	friend Vector2f operator+ (const Vector2f& first, const Vector2f& second);
	friend Vector2f operator* (const Vector2f& first, const float& second);
	friend Vector2f operator* (const float& second, const Vector2f& first);
	float getLen() {
		return sqrt(pow(x, 2) + pow(y, 2));
	}
	Vector2f getOrtVect() {
		float len = this->getLen();
		Vector2f c;
		c.x = x / len;
		c.y = y / len;
		return c;
	}
};
Vector2f operator- (const Vector2f& start, const Vector2f& end) {
	Vector2f c;
	c.x = end.x - start.x;
	c.y = end.y - start.y;
	return c;
}
Vector2f operator+ (const Vector2f& first, const Vector2f& second) {
	Vector2f c;
	c.x = first.x + second.x;
	c.y = first.y + second.y;
	return c;
}
Vector2f operator* (const Vector2f& first, const float& second) {
	Vector2f c;
	c.x = first.x * second;
	c.y = first.y * second;
	return c;
}
Vector2f operator* (const float& second, const Vector2f& first) {
	Vector2f c;
	c.x = first.x * second;
	c.y = first.y * second;
	return c;
}
namespace KomivoyachForms {

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown74;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown75;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown76;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown77;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown78;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown79;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown80;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown81;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown82;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown83;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown84;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown85;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown86;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown87;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown88;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown89;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown90;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown91;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown72;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown73;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown37;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown38;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown39;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown40;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown41;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown42;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown43;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown44;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown45;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown46;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown47;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown48;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown49;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown50;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown51;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown52;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown53;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown54;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown55;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown56;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown57;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown58;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown59;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown60;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown61;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown62;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown63;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown64;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown65;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown66;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown67;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown68;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown69;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown70;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown71;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown30;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown31;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown32;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown33;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown34;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown35;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown36;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown16;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown17;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown18;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown19;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown20;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown21;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown22;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown23;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown24;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown25;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown26;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown27;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown28;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown29;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown10;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown11;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown12;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown13;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown14;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown15;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label21;

private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;








	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown74 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown75 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown76 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown77 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown78 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown79 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown80 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown81 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown82 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown83 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown84 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown85 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown86 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown87 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown88 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown89 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown90 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown91 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown72 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown73 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown37 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown38 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown39 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown40 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown41 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown42 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown43 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown44 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown45 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown46 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown47 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown48 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown49 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown50 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown51 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown52 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown53 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown54 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown55 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown56 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown57 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown58 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown59 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown60 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown61 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown62 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown63 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown64 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown65 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown66 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown67 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown68 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown69 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown70 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown71 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown30 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown31 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown32 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown33 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown34 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown35 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown36 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown16 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown17 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown18 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown19 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown20 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown21 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown22 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown23 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown24 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown25 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown26 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown27 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown28 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown29 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown14 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown78))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown79))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown80))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown81))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown82))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown83))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown84))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown85))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown86))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown87))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown88))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown89))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown90))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown91))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown70))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->numericUpDown74);
			this->groupBox1->Controls->Add(this->numericUpDown75);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->numericUpDown76);
			this->groupBox1->Controls->Add(this->numericUpDown77);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->numericUpDown78);
			this->groupBox1->Controls->Add(this->numericUpDown79);
			this->groupBox1->Controls->Add(this->numericUpDown80);
			this->groupBox1->Controls->Add(this->numericUpDown81);
			this->groupBox1->Controls->Add(this->numericUpDown82);
			this->groupBox1->Controls->Add(this->numericUpDown83);
			this->groupBox1->Controls->Add(this->numericUpDown84);
			this->groupBox1->Controls->Add(this->numericUpDown85);
			this->groupBox1->Controls->Add(this->numericUpDown86);
			this->groupBox1->Controls->Add(this->numericUpDown87);
			this->groupBox1->Controls->Add(this->numericUpDown88);
			this->groupBox1->Controls->Add(this->numericUpDown89);
			this->groupBox1->Controls->Add(this->numericUpDown90);
			this->groupBox1->Controls->Add(this->numericUpDown91);
			this->groupBox1->Controls->Add(this->numericUpDown72);
			this->groupBox1->Controls->Add(this->numericUpDown73);
			this->groupBox1->Controls->Add(this->numericUpDown37);
			this->groupBox1->Controls->Add(this->numericUpDown38);
			this->groupBox1->Controls->Add(this->numericUpDown39);
			this->groupBox1->Controls->Add(this->numericUpDown40);
			this->groupBox1->Controls->Add(this->numericUpDown41);
			this->groupBox1->Controls->Add(this->numericUpDown42);
			this->groupBox1->Controls->Add(this->numericUpDown43);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->numericUpDown44);
			this->groupBox1->Controls->Add(this->numericUpDown45);
			this->groupBox1->Controls->Add(this->numericUpDown46);
			this->groupBox1->Controls->Add(this->numericUpDown47);
			this->groupBox1->Controls->Add(this->numericUpDown48);
			this->groupBox1->Controls->Add(this->numericUpDown49);
			this->groupBox1->Controls->Add(this->numericUpDown50);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->numericUpDown51);
			this->groupBox1->Controls->Add(this->numericUpDown52);
			this->groupBox1->Controls->Add(this->numericUpDown53);
			this->groupBox1->Controls->Add(this->numericUpDown54);
			this->groupBox1->Controls->Add(this->numericUpDown55);
			this->groupBox1->Controls->Add(this->numericUpDown56);
			this->groupBox1->Controls->Add(this->numericUpDown57);
			this->groupBox1->Controls->Add(this->numericUpDown58);
			this->groupBox1->Controls->Add(this->numericUpDown59);
			this->groupBox1->Controls->Add(this->numericUpDown60);
			this->groupBox1->Controls->Add(this->numericUpDown61);
			this->groupBox1->Controls->Add(this->numericUpDown62);
			this->groupBox1->Controls->Add(this->numericUpDown63);
			this->groupBox1->Controls->Add(this->numericUpDown64);
			this->groupBox1->Controls->Add(this->numericUpDown65);
			this->groupBox1->Controls->Add(this->numericUpDown66);
			this->groupBox1->Controls->Add(this->numericUpDown67);
			this->groupBox1->Controls->Add(this->numericUpDown68);
			this->groupBox1->Controls->Add(this->numericUpDown69);
			this->groupBox1->Controls->Add(this->numericUpDown70);
			this->groupBox1->Controls->Add(this->numericUpDown71);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->numericUpDown30);
			this->groupBox1->Controls->Add(this->numericUpDown31);
			this->groupBox1->Controls->Add(this->numericUpDown32);
			this->groupBox1->Controls->Add(this->numericUpDown33);
			this->groupBox1->Controls->Add(this->numericUpDown34);
			this->groupBox1->Controls->Add(this->numericUpDown35);
			this->groupBox1->Controls->Add(this->numericUpDown36);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->numericUpDown16);
			this->groupBox1->Controls->Add(this->numericUpDown17);
			this->groupBox1->Controls->Add(this->numericUpDown18);
			this->groupBox1->Controls->Add(this->numericUpDown19);
			this->groupBox1->Controls->Add(this->numericUpDown20);
			this->groupBox1->Controls->Add(this->numericUpDown21);
			this->groupBox1->Controls->Add(this->numericUpDown22);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->numericUpDown23);
			this->groupBox1->Controls->Add(this->numericUpDown24);
			this->groupBox1->Controls->Add(this->numericUpDown25);
			this->groupBox1->Controls->Add(this->numericUpDown26);
			this->groupBox1->Controls->Add(this->numericUpDown27);
			this->groupBox1->Controls->Add(this->numericUpDown28);
			this->groupBox1->Controls->Add(this->numericUpDown29);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->numericUpDown9);
			this->groupBox1->Controls->Add(this->numericUpDown10);
			this->groupBox1->Controls->Add(this->numericUpDown11);
			this->groupBox1->Controls->Add(this->numericUpDown12);
			this->groupBox1->Controls->Add(this->numericUpDown13);
			this->groupBox1->Controls->Add(this->numericUpDown14);
			this->groupBox1->Controls->Add(this->numericUpDown15);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->numericUpDown8);
			this->groupBox1->Controls->Add(this->numericUpDown7);
			this->groupBox1->Controls->Add(this->numericUpDown6);
			this->groupBox1->Controls->Add(this->numericUpDown5);
			this->groupBox1->Controls->Add(this->numericUpDown4);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(343, 536);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Configure";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(86, 371);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(20, 22);
			this->label23->TabIndex = 148;
			this->label23->Text = L"|";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(110, 371);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(120, 22);
			this->label22->TabIndex = 147;
			this->label22->Text = L"Road Lenght";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(30, 371);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(50, 22);
			this->label21->TabIndex = 146;
			this->label21->Text = L"Road";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(24, 395);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(301, 30);
			this->textBox11->TabIndex = 144;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(114, 316);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 36);
			this->button1->TabIndex = 143;
			this->button1->Text = L"Result";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(3, 276);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(30, 22);
			this->label20->TabIndex = 142;
			this->label20->Text = L"10";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(5, 257);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(20, 22);
			this->label19->TabIndex = 141;
			this->label19->Text = L"9";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(5, 238);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(20, 22);
			this->label18->TabIndex = 140;
			this->label18->Text = L"8";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(5, 220);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 22);
			this->label17->TabIndex = 139;
			this->label17->Text = L"7";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(5, 200);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(20, 22);
			this->label16->TabIndex = 138;
			this->label16->Text = L"6";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(5, 181);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 22);
			this->label15->TabIndex = 137;
			this->label15->Text = L"5";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(5, 162);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 22);
			this->label14->TabIndex = 136;
			this->label14->Text = L"4";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(5, 143);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(20, 22);
			this->label13->TabIndex = 135;
			this->label13->Text = L"3";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(5, 124);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 22);
			this->label12->TabIndex = 134;
			this->label12->Text = L"2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(5, 105);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(20, 22);
			this->label11->TabIndex = 133;
			this->label11->Text = L"1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(304, 83);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(30, 22);
			this->label10->TabIndex = 132;
			this->label10->Text = L"10";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(274, 83);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 22);
			this->label9->TabIndex = 131;
			this->label9->Text = L"9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(244, 83);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 22);
			this->label8->TabIndex = 130;
			this->label8->Text = L"8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(214, 83);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 22);
			this->label7->TabIndex = 129;
			this->label7->Text = L"7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(184, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 22);
			this->label6->TabIndex = 128;
			this->label6->Text = L"6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(154, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 22);
			this->label5->TabIndex = 127;
			this->label5->Text = L"5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(124, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 22);
			this->label4->TabIndex = 126;
			this->label4->Text = L"4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(94, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 22);
			this->label3->TabIndex = 125;
			this->label3->Text = L"3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(64, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 22);
			this->label2->TabIndex = 124;
			this->label2->Text = L"2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(34, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 22);
			this->label1->TabIndex = 123;
			this->label1->Text = L"1";
			// 
			// numericUpDown74
			// 
			this->numericUpDown74->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown74->Location = System::Drawing::Point(302, 240);
			this->numericUpDown74->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown74->Name = L"numericUpDown74";
			this->numericUpDown74->Size = System::Drawing::Size(31, 20);
			this->numericUpDown74->TabIndex = 122;
			this->numericUpDown74->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown74->Visible = false;
			this->numericUpDown74->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown75
			// 
			this->numericUpDown75->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown75->Location = System::Drawing::Point(272, 278);
			this->numericUpDown75->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown75->Name = L"numericUpDown75";
			this->numericUpDown75->Size = System::Drawing::Size(31, 20);
			this->numericUpDown75->TabIndex = 121;
			this->numericUpDown75->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown75->Visible = false;
			this->numericUpDown75->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(272, 259);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(31, 20);
			this->textBox8->TabIndex = 120;
			this->textBox8->Text = L"-1";
			this->textBox8->Visible = false;
			// 
			// numericUpDown76
			// 
			this->numericUpDown76->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown76->Location = System::Drawing::Point(302, 259);
			this->numericUpDown76->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown76->Name = L"numericUpDown76";
			this->numericUpDown76->Size = System::Drawing::Size(31, 20);
			this->numericUpDown76->TabIndex = 119;
			this->numericUpDown76->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown76->Visible = false;
			this->numericUpDown76->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown77
			// 
			this->numericUpDown77->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown77->Location = System::Drawing::Point(272, 221);
			this->numericUpDown77->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown77->Name = L"numericUpDown77";
			this->numericUpDown77->Size = System::Drawing::Size(31, 20);
			this->numericUpDown77->TabIndex = 118;
			this->numericUpDown77->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown77->Visible = false;
			this->numericUpDown77->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(302, 278);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(31, 20);
			this->textBox9->TabIndex = 117;
			this->textBox9->Text = L"-1";
			this->textBox9->Visible = false;
			// 
			// numericUpDown78
			// 
			this->numericUpDown78->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown78->Location = System::Drawing::Point(272, 240);
			this->numericUpDown78->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown78->Name = L"numericUpDown78";
			this->numericUpDown78->Size = System::Drawing::Size(31, 20);
			this->numericUpDown78->TabIndex = 116;
			this->numericUpDown78->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown78->Visible = false;
			this->numericUpDown78->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown79
			// 
			this->numericUpDown79->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown79->Location = System::Drawing::Point(302, 221);
			this->numericUpDown79->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown79->Name = L"numericUpDown79";
			this->numericUpDown79->Size = System::Drawing::Size(31, 20);
			this->numericUpDown79->TabIndex = 115;
			this->numericUpDown79->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown79->Visible = false;
			this->numericUpDown79->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown80
			// 
			this->numericUpDown80->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown80->Location = System::Drawing::Point(302, 202);
			this->numericUpDown80->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown80->Name = L"numericUpDown80";
			this->numericUpDown80->Size = System::Drawing::Size(31, 20);
			this->numericUpDown80->TabIndex = 114;
			this->numericUpDown80->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown80->Visible = false;
			this->numericUpDown80->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown81
			// 
			this->numericUpDown81->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown81->Location = System::Drawing::Point(272, 202);
			this->numericUpDown81->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown81->Name = L"numericUpDown81";
			this->numericUpDown81->Size = System::Drawing::Size(31, 20);
			this->numericUpDown81->TabIndex = 113;
			this->numericUpDown81->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown81->Visible = false;
			this->numericUpDown81->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown82
			// 
			this->numericUpDown82->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown82->Location = System::Drawing::Point(302, 183);
			this->numericUpDown82->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown82->Name = L"numericUpDown82";
			this->numericUpDown82->Size = System::Drawing::Size(31, 20);
			this->numericUpDown82->TabIndex = 112;
			this->numericUpDown82->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown82->Visible = false;
			this->numericUpDown82->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown83
			// 
			this->numericUpDown83->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown83->Location = System::Drawing::Point(272, 183);
			this->numericUpDown83->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown83->Name = L"numericUpDown83";
			this->numericUpDown83->Size = System::Drawing::Size(31, 20);
			this->numericUpDown83->TabIndex = 111;
			this->numericUpDown83->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown83->Visible = false;
			this->numericUpDown83->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown84
			// 
			this->numericUpDown84->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown84->Location = System::Drawing::Point(302, 164);
			this->numericUpDown84->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown84->Name = L"numericUpDown84";
			this->numericUpDown84->Size = System::Drawing::Size(31, 20);
			this->numericUpDown84->TabIndex = 110;
			this->numericUpDown84->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown84->Visible = false;
			this->numericUpDown84->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown85
			// 
			this->numericUpDown85->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown85->Location = System::Drawing::Point(272, 164);
			this->numericUpDown85->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown85->Name = L"numericUpDown85";
			this->numericUpDown85->Size = System::Drawing::Size(31, 20);
			this->numericUpDown85->TabIndex = 109;
			this->numericUpDown85->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown85->Visible = false;
			this->numericUpDown85->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown86
			// 
			this->numericUpDown86->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown86->Location = System::Drawing::Point(302, 145);
			this->numericUpDown86->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown86->Name = L"numericUpDown86";
			this->numericUpDown86->Size = System::Drawing::Size(31, 20);
			this->numericUpDown86->TabIndex = 108;
			this->numericUpDown86->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown86->Visible = false;
			this->numericUpDown86->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown87
			// 
			this->numericUpDown87->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown87->Location = System::Drawing::Point(272, 145);
			this->numericUpDown87->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown87->Name = L"numericUpDown87";
			this->numericUpDown87->Size = System::Drawing::Size(31, 20);
			this->numericUpDown87->TabIndex = 107;
			this->numericUpDown87->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown87->Visible = false;
			this->numericUpDown87->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown88
			// 
			this->numericUpDown88->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown88->Location = System::Drawing::Point(302, 126);
			this->numericUpDown88->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown88->Name = L"numericUpDown88";
			this->numericUpDown88->Size = System::Drawing::Size(31, 20);
			this->numericUpDown88->TabIndex = 106;
			this->numericUpDown88->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown88->Visible = false;
			this->numericUpDown88->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown89
			// 
			this->numericUpDown89->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown89->Location = System::Drawing::Point(272, 126);
			this->numericUpDown89->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown89->Name = L"numericUpDown89";
			this->numericUpDown89->Size = System::Drawing::Size(31, 20);
			this->numericUpDown89->TabIndex = 105;
			this->numericUpDown89->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown89->Visible = false;
			this->numericUpDown89->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown90
			// 
			this->numericUpDown90->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown90->Location = System::Drawing::Point(302, 107);
			this->numericUpDown90->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown90->Name = L"numericUpDown90";
			this->numericUpDown90->Size = System::Drawing::Size(31, 20);
			this->numericUpDown90->TabIndex = 104;
			this->numericUpDown90->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown90->Visible = false;
			this->numericUpDown90->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown91
			// 
			this->numericUpDown91->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown91->Location = System::Drawing::Point(272, 107);
			this->numericUpDown91->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown91->Name = L"numericUpDown91";
			this->numericUpDown91->Size = System::Drawing::Size(31, 20);
			this->numericUpDown91->TabIndex = 103;
			this->numericUpDown91->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown91->Visible = false;
			this->numericUpDown91->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown72
			// 
			this->numericUpDown72->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown72->Location = System::Drawing::Point(122, 278);
			this->numericUpDown72->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown72->Name = L"numericUpDown72";
			this->numericUpDown72->Size = System::Drawing::Size(31, 20);
			this->numericUpDown72->TabIndex = 102;
			this->numericUpDown72->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown72->Visible = false;
			this->numericUpDown72->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown73
			// 
			this->numericUpDown73->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown73->Location = System::Drawing::Point(122, 259);
			this->numericUpDown73->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown73->Name = L"numericUpDown73";
			this->numericUpDown73->Size = System::Drawing::Size(31, 20);
			this->numericUpDown73->TabIndex = 101;
			this->numericUpDown73->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown73->Visible = false;
			this->numericUpDown73->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown37
			// 
			this->numericUpDown37->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown37->Location = System::Drawing::Point(242, 278);
			this->numericUpDown37->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown37->Name = L"numericUpDown37";
			this->numericUpDown37->Size = System::Drawing::Size(31, 20);
			this->numericUpDown37->TabIndex = 100;
			this->numericUpDown37->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown37->Visible = false;
			this->numericUpDown37->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown38
			// 
			this->numericUpDown38->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown38->Location = System::Drawing::Point(212, 278);
			this->numericUpDown38->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown38->Name = L"numericUpDown38";
			this->numericUpDown38->Size = System::Drawing::Size(31, 20);
			this->numericUpDown38->TabIndex = 99;
			this->numericUpDown38->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown38->Visible = false;
			this->numericUpDown38->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown39
			// 
			this->numericUpDown39->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown39->Location = System::Drawing::Point(182, 278);
			this->numericUpDown39->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown39->Name = L"numericUpDown39";
			this->numericUpDown39->Size = System::Drawing::Size(31, 20);
			this->numericUpDown39->TabIndex = 98;
			this->numericUpDown39->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown39->Visible = false;
			this->numericUpDown39->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown40
			// 
			this->numericUpDown40->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown40->Location = System::Drawing::Point(152, 278);
			this->numericUpDown40->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown40->Name = L"numericUpDown40";
			this->numericUpDown40->Size = System::Drawing::Size(31, 20);
			this->numericUpDown40->TabIndex = 97;
			this->numericUpDown40->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown40->Visible = false;
			this->numericUpDown40->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown41
			// 
			this->numericUpDown41->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown41->Location = System::Drawing::Point(62, 278);
			this->numericUpDown41->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown41->Name = L"numericUpDown41";
			this->numericUpDown41->Size = System::Drawing::Size(31, 20);
			this->numericUpDown41->TabIndex = 96;
			this->numericUpDown41->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown41->Visible = false;
			this->numericUpDown41->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown42
			// 
			this->numericUpDown42->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown42->Location = System::Drawing::Point(92, 278);
			this->numericUpDown42->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown42->Name = L"numericUpDown42";
			this->numericUpDown42->Size = System::Drawing::Size(31, 20);
			this->numericUpDown42->TabIndex = 95;
			this->numericUpDown42->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown42->Visible = false;
			this->numericUpDown42->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown43
			// 
			this->numericUpDown43->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown43->Location = System::Drawing::Point(32, 278);
			this->numericUpDown43->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown43->Name = L"numericUpDown43";
			this->numericUpDown43->Size = System::Drawing::Size(31, 20);
			this->numericUpDown43->TabIndex = 94;
			this->numericUpDown43->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown43->Visible = false;
			this->numericUpDown43->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(212, 221);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(31, 20);
			this->textBox6->TabIndex = 93;
			this->textBox6->Text = L"-1";
			this->textBox6->Visible = false;
			// 
			// numericUpDown44
			// 
			this->numericUpDown44->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown44->Location = System::Drawing::Point(242, 259);
			this->numericUpDown44->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown44->Name = L"numericUpDown44";
			this->numericUpDown44->Size = System::Drawing::Size(31, 20);
			this->numericUpDown44->TabIndex = 92;
			this->numericUpDown44->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown44->Visible = false;
			this->numericUpDown44->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown45
			// 
			this->numericUpDown45->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown45->Location = System::Drawing::Point(212, 259);
			this->numericUpDown45->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown45->Name = L"numericUpDown45";
			this->numericUpDown45->Size = System::Drawing::Size(31, 20);
			this->numericUpDown45->TabIndex = 91;
			this->numericUpDown45->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown45->Visible = false;
			this->numericUpDown45->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown46
			// 
			this->numericUpDown46->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown46->Location = System::Drawing::Point(182, 259);
			this->numericUpDown46->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown46->Name = L"numericUpDown46";
			this->numericUpDown46->Size = System::Drawing::Size(31, 20);
			this->numericUpDown46->TabIndex = 90;
			this->numericUpDown46->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown46->Visible = false;
			this->numericUpDown46->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown47
			// 
			this->numericUpDown47->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown47->Location = System::Drawing::Point(152, 259);
			this->numericUpDown47->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown47->Name = L"numericUpDown47";
			this->numericUpDown47->Size = System::Drawing::Size(31, 20);
			this->numericUpDown47->TabIndex = 89;
			this->numericUpDown47->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown47->Visible = false;
			this->numericUpDown47->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown48
			// 
			this->numericUpDown48->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown48->Location = System::Drawing::Point(62, 259);
			this->numericUpDown48->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown48->Name = L"numericUpDown48";
			this->numericUpDown48->Size = System::Drawing::Size(31, 20);
			this->numericUpDown48->TabIndex = 88;
			this->numericUpDown48->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown48->Visible = false;
			this->numericUpDown48->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown49
			// 
			this->numericUpDown49->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown49->Location = System::Drawing::Point(92, 259);
			this->numericUpDown49->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown49->Name = L"numericUpDown49";
			this->numericUpDown49->Size = System::Drawing::Size(31, 20);
			this->numericUpDown49->TabIndex = 87;
			this->numericUpDown49->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown49->Visible = false;
			this->numericUpDown49->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown50
			// 
			this->numericUpDown50->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown50->Location = System::Drawing::Point(32, 259);
			this->numericUpDown50->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown50->Name = L"numericUpDown50";
			this->numericUpDown50->Size = System::Drawing::Size(31, 20);
			this->numericUpDown50->TabIndex = 86;
			this->numericUpDown50->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown50->Visible = false;
			this->numericUpDown50->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(242, 240);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(31, 20);
			this->textBox7->TabIndex = 85;
			this->textBox7->Text = L"-1";
			this->textBox7->Visible = false;
			// 
			// numericUpDown51
			// 
			this->numericUpDown51->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown51->Location = System::Drawing::Point(62, 222);
			this->numericUpDown51->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown51->Name = L"numericUpDown51";
			this->numericUpDown51->Size = System::Drawing::Size(31, 20);
			this->numericUpDown51->TabIndex = 84;
			this->numericUpDown51->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown51->Visible = false;
			this->numericUpDown51->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown52
			// 
			this->numericUpDown52->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown52->Location = System::Drawing::Point(212, 240);
			this->numericUpDown52->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown52->Name = L"numericUpDown52";
			this->numericUpDown52->Size = System::Drawing::Size(31, 20);
			this->numericUpDown52->TabIndex = 83;
			this->numericUpDown52->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown52->Visible = false;
			this->numericUpDown52->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown53
			// 
			this->numericUpDown53->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown53->Location = System::Drawing::Point(182, 240);
			this->numericUpDown53->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown53->Name = L"numericUpDown53";
			this->numericUpDown53->Size = System::Drawing::Size(31, 20);
			this->numericUpDown53->TabIndex = 82;
			this->numericUpDown53->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown53->Visible = false;
			this->numericUpDown53->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown54
			// 
			this->numericUpDown54->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown54->Location = System::Drawing::Point(152, 240);
			this->numericUpDown54->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown54->Name = L"numericUpDown54";
			this->numericUpDown54->Size = System::Drawing::Size(31, 20);
			this->numericUpDown54->TabIndex = 81;
			this->numericUpDown54->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown54->Visible = false;
			this->numericUpDown54->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown55
			// 
			this->numericUpDown55->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown55->Location = System::Drawing::Point(122, 240);
			this->numericUpDown55->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown55->Name = L"numericUpDown55";
			this->numericUpDown55->Size = System::Drawing::Size(31, 20);
			this->numericUpDown55->TabIndex = 80;
			this->numericUpDown55->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown55->Visible = false;
			this->numericUpDown55->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown56
			// 
			this->numericUpDown56->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown56->Location = System::Drawing::Point(32, 240);
			this->numericUpDown56->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown56->Name = L"numericUpDown56";
			this->numericUpDown56->Size = System::Drawing::Size(31, 20);
			this->numericUpDown56->TabIndex = 79;
			this->numericUpDown56->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown56->Visible = false;
			this->numericUpDown56->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown57
			// 
			this->numericUpDown57->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown57->Location = System::Drawing::Point(62, 240);
			this->numericUpDown57->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown57->Name = L"numericUpDown57";
			this->numericUpDown57->Size = System::Drawing::Size(31, 20);
			this->numericUpDown57->TabIndex = 78;
			this->numericUpDown57->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown57->Visible = false;
			this->numericUpDown57->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown58
			// 
			this->numericUpDown58->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown58->Location = System::Drawing::Point(242, 221);
			this->numericUpDown58->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown58->Name = L"numericUpDown58";
			this->numericUpDown58->Size = System::Drawing::Size(31, 20);
			this->numericUpDown58->TabIndex = 76;
			this->numericUpDown58->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown58->Visible = false;
			this->numericUpDown58->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown59
			// 
			this->numericUpDown59->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown59->Location = System::Drawing::Point(92, 240);
			this->numericUpDown59->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown59->Name = L"numericUpDown59";
			this->numericUpDown59->Size = System::Drawing::Size(31, 20);
			this->numericUpDown59->TabIndex = 75;
			this->numericUpDown59->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown59->Visible = false;
			this->numericUpDown59->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown60
			// 
			this->numericUpDown60->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown60->Location = System::Drawing::Point(182, 221);
			this->numericUpDown60->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown60->Name = L"numericUpDown60";
			this->numericUpDown60->Size = System::Drawing::Size(31, 20);
			this->numericUpDown60->TabIndex = 74;
			this->numericUpDown60->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown60->Visible = false;
			this->numericUpDown60->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown61
			// 
			this->numericUpDown61->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown61->Location = System::Drawing::Point(152, 221);
			this->numericUpDown61->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown61->Name = L"numericUpDown61";
			this->numericUpDown61->Size = System::Drawing::Size(31, 20);
			this->numericUpDown61->TabIndex = 73;
			this->numericUpDown61->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown61->Visible = false;
			this->numericUpDown61->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown62
			// 
			this->numericUpDown62->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown62->Location = System::Drawing::Point(122, 221);
			this->numericUpDown62->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown62->Name = L"numericUpDown62";
			this->numericUpDown62->Size = System::Drawing::Size(31, 20);
			this->numericUpDown62->TabIndex = 72;
			this->numericUpDown62->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown62->Visible = false;
			this->numericUpDown62->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown63
			// 
			this->numericUpDown63->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown63->Location = System::Drawing::Point(92, 221);
			this->numericUpDown63->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown63->Name = L"numericUpDown63";
			this->numericUpDown63->Size = System::Drawing::Size(31, 20);
			this->numericUpDown63->TabIndex = 71;
			this->numericUpDown63->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown63->Visible = false;
			this->numericUpDown63->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown64
			// 
			this->numericUpDown64->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown64->Location = System::Drawing::Point(32, 221);
			this->numericUpDown64->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown64->Name = L"numericUpDown64";
			this->numericUpDown64->Size = System::Drawing::Size(31, 20);
			this->numericUpDown64->TabIndex = 70;
			this->numericUpDown64->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown64->Visible = false;
			this->numericUpDown64->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown65
			// 
			this->numericUpDown65->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown65->Location = System::Drawing::Point(242, 202);
			this->numericUpDown65->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown65->Name = L"numericUpDown65";
			this->numericUpDown65->Size = System::Drawing::Size(31, 20);
			this->numericUpDown65->TabIndex = 68;
			this->numericUpDown65->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown65->Visible = false;
			this->numericUpDown65->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown66
			// 
			this->numericUpDown66->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown66->Location = System::Drawing::Point(212, 202);
			this->numericUpDown66->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown66->Name = L"numericUpDown66";
			this->numericUpDown66->Size = System::Drawing::Size(31, 20);
			this->numericUpDown66->TabIndex = 67;
			this->numericUpDown66->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown66->Visible = false;
			this->numericUpDown66->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown67
			// 
			this->numericUpDown67->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown67->Location = System::Drawing::Point(32, 202);
			this->numericUpDown67->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown67->Name = L"numericUpDown67";
			this->numericUpDown67->Size = System::Drawing::Size(31, 20);
			this->numericUpDown67->TabIndex = 66;
			this->numericUpDown67->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown67->Visible = false;
			this->numericUpDown67->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown68
			// 
			this->numericUpDown68->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown68->Location = System::Drawing::Point(152, 202);
			this->numericUpDown68->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown68->Name = L"numericUpDown68";
			this->numericUpDown68->Size = System::Drawing::Size(31, 20);
			this->numericUpDown68->TabIndex = 65;
			this->numericUpDown68->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown68->Visible = false;
			this->numericUpDown68->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown69
			// 
			this->numericUpDown69->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown69->Location = System::Drawing::Point(122, 202);
			this->numericUpDown69->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown69->Name = L"numericUpDown69";
			this->numericUpDown69->Size = System::Drawing::Size(31, 20);
			this->numericUpDown69->TabIndex = 64;
			this->numericUpDown69->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown69->Visible = false;
			this->numericUpDown69->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown70
			// 
			this->numericUpDown70->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown70->Location = System::Drawing::Point(92, 202);
			this->numericUpDown70->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown70->Name = L"numericUpDown70";
			this->numericUpDown70->Size = System::Drawing::Size(31, 20);
			this->numericUpDown70->TabIndex = 63;
			this->numericUpDown70->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown70->Visible = false;
			this->numericUpDown70->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown71
			// 
			this->numericUpDown71->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown71->Location = System::Drawing::Point(62, 202);
			this->numericUpDown71->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown71->Name = L"numericUpDown71";
			this->numericUpDown71->Size = System::Drawing::Size(31, 20);
			this->numericUpDown71->TabIndex = 62;
			this->numericUpDown71->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown71->Visible = false;
			this->numericUpDown71->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(182, 202);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(31, 20);
			this->textBox10->TabIndex = 61;
			this->textBox10->Text = L"-1";
			this->textBox10->Visible = false;
			// 
			// numericUpDown30
			// 
			this->numericUpDown30->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown30->Location = System::Drawing::Point(242, 183);
			this->numericUpDown30->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown30->Name = L"numericUpDown30";
			this->numericUpDown30->Size = System::Drawing::Size(31, 20);
			this->numericUpDown30->TabIndex = 60;
			this->numericUpDown30->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown30->Visible = false;
			this->numericUpDown30->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown31
			// 
			this->numericUpDown31->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown31->Location = System::Drawing::Point(212, 183);
			this->numericUpDown31->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown31->Name = L"numericUpDown31";
			this->numericUpDown31->Size = System::Drawing::Size(31, 20);
			this->numericUpDown31->TabIndex = 59;
			this->numericUpDown31->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown31->Visible = false;
			this->numericUpDown31->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown32
			// 
			this->numericUpDown32->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown32->Location = System::Drawing::Point(182, 183);
			this->numericUpDown32->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown32->Name = L"numericUpDown32";
			this->numericUpDown32->Size = System::Drawing::Size(31, 20);
			this->numericUpDown32->TabIndex = 58;
			this->numericUpDown32->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown32->Visible = false;
			this->numericUpDown32->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown33
			// 
			this->numericUpDown33->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown33->Location = System::Drawing::Point(122, 183);
			this->numericUpDown33->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown33->Name = L"numericUpDown33";
			this->numericUpDown33->Size = System::Drawing::Size(31, 20);
			this->numericUpDown33->TabIndex = 57;
			this->numericUpDown33->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown33->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown34
			// 
			this->numericUpDown34->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown34->Location = System::Drawing::Point(62, 183);
			this->numericUpDown34->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown34->Name = L"numericUpDown34";
			this->numericUpDown34->Size = System::Drawing::Size(31, 20);
			this->numericUpDown34->TabIndex = 56;
			this->numericUpDown34->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown34->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown35
			// 
			this->numericUpDown35->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown35->Location = System::Drawing::Point(92, 183);
			this->numericUpDown35->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown35->Name = L"numericUpDown35";
			this->numericUpDown35->Size = System::Drawing::Size(31, 20);
			this->numericUpDown35->TabIndex = 55;
			this->numericUpDown35->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown35->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown36
			// 
			this->numericUpDown36->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown36->Location = System::Drawing::Point(32, 183);
			this->numericUpDown36->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown36->Name = L"numericUpDown36";
			this->numericUpDown36->Size = System::Drawing::Size(31, 20);
			this->numericUpDown36->TabIndex = 54;
			this->numericUpDown36->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown36->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(152, 183);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(31, 20);
			this->textBox5->TabIndex = 53;
			this->textBox5->Text = L"-1";
			this->textBox5->Visible = false;
			// 
			// numericUpDown16
			// 
			this->numericUpDown16->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown16->Location = System::Drawing::Point(242, 164);
			this->numericUpDown16->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown16->Name = L"numericUpDown16";
			this->numericUpDown16->Size = System::Drawing::Size(31, 20);
			this->numericUpDown16->TabIndex = 52;
			this->numericUpDown16->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown16->Visible = false;
			this->numericUpDown16->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown17
			// 
			this->numericUpDown17->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown17->Location = System::Drawing::Point(212, 164);
			this->numericUpDown17->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown17->Name = L"numericUpDown17";
			this->numericUpDown17->Size = System::Drawing::Size(31, 20);
			this->numericUpDown17->TabIndex = 51;
			this->numericUpDown17->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown17->Visible = false;
			this->numericUpDown17->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown18
			// 
			this->numericUpDown18->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown18->Location = System::Drawing::Point(182, 164);
			this->numericUpDown18->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown18->Name = L"numericUpDown18";
			this->numericUpDown18->Size = System::Drawing::Size(31, 20);
			this->numericUpDown18->TabIndex = 50;
			this->numericUpDown18->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown18->Visible = false;
			this->numericUpDown18->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown19
			// 
			this->numericUpDown19->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown19->Location = System::Drawing::Point(152, 164);
			this->numericUpDown19->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown19->Name = L"numericUpDown19";
			this->numericUpDown19->Size = System::Drawing::Size(31, 20);
			this->numericUpDown19->TabIndex = 49;
			this->numericUpDown19->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown19->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown20
			// 
			this->numericUpDown20->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown20->Location = System::Drawing::Point(62, 164);
			this->numericUpDown20->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown20->Name = L"numericUpDown20";
			this->numericUpDown20->Size = System::Drawing::Size(31, 20);
			this->numericUpDown20->TabIndex = 48;
			this->numericUpDown20->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown20->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown21
			// 
			this->numericUpDown21->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown21->Location = System::Drawing::Point(92, 164);
			this->numericUpDown21->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown21->Name = L"numericUpDown21";
			this->numericUpDown21->Size = System::Drawing::Size(31, 20);
			this->numericUpDown21->TabIndex = 47;
			this->numericUpDown21->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown21->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown22
			// 
			this->numericUpDown22->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown22->Location = System::Drawing::Point(32, 164);
			this->numericUpDown22->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown22->Name = L"numericUpDown22";
			this->numericUpDown22->Size = System::Drawing::Size(31, 20);
			this->numericUpDown22->TabIndex = 46;
			this->numericUpDown22->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown22->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(122, 164);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(31, 20);
			this->textBox3->TabIndex = 45;
			this->textBox3->Text = L"-1";
			this->textBox3->Visible = false;
			// 
			// numericUpDown23
			// 
			this->numericUpDown23->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown23->Location = System::Drawing::Point(242, 145);
			this->numericUpDown23->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown23->Name = L"numericUpDown23";
			this->numericUpDown23->Size = System::Drawing::Size(31, 20);
			this->numericUpDown23->TabIndex = 44;
			this->numericUpDown23->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown23->Visible = false;
			this->numericUpDown23->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown24
			// 
			this->numericUpDown24->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown24->Location = System::Drawing::Point(212, 145);
			this->numericUpDown24->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown24->Name = L"numericUpDown24";
			this->numericUpDown24->Size = System::Drawing::Size(31, 20);
			this->numericUpDown24->TabIndex = 43;
			this->numericUpDown24->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown24->Visible = false;
			this->numericUpDown24->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown25
			// 
			this->numericUpDown25->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown25->Location = System::Drawing::Point(182, 145);
			this->numericUpDown25->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown25->Name = L"numericUpDown25";
			this->numericUpDown25->Size = System::Drawing::Size(31, 20);
			this->numericUpDown25->TabIndex = 42;
			this->numericUpDown25->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown25->Visible = false;
			this->numericUpDown25->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown26
			// 
			this->numericUpDown26->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown26->Location = System::Drawing::Point(152, 145);
			this->numericUpDown26->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown26->Name = L"numericUpDown26";
			this->numericUpDown26->Size = System::Drawing::Size(31, 20);
			this->numericUpDown26->TabIndex = 41;
			this->numericUpDown26->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown26->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown27
			// 
			this->numericUpDown27->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown27->Location = System::Drawing::Point(122, 145);
			this->numericUpDown27->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown27->Name = L"numericUpDown27";
			this->numericUpDown27->Size = System::Drawing::Size(31, 20);
			this->numericUpDown27->TabIndex = 40;
			this->numericUpDown27->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown27->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown28
			// 
			this->numericUpDown28->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown28->Location = System::Drawing::Point(32, 145);
			this->numericUpDown28->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown28->Name = L"numericUpDown28";
			this->numericUpDown28->Size = System::Drawing::Size(31, 20);
			this->numericUpDown28->TabIndex = 39;
			this->numericUpDown28->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown28->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown29
			// 
			this->numericUpDown29->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown29->Location = System::Drawing::Point(62, 145);
			this->numericUpDown29->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown29->Name = L"numericUpDown29";
			this->numericUpDown29->Size = System::Drawing::Size(31, 20);
			this->numericUpDown29->TabIndex = 38;
			this->numericUpDown29->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown29->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(92, 145);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(31, 20);
			this->textBox4->TabIndex = 37;
			this->textBox4->Text = L"-1";
			this->textBox4->Visible = false;
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown9->Location = System::Drawing::Point(242, 126);
			this->numericUpDown9->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(31, 20);
			this->numericUpDown9->TabIndex = 36;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown9->Visible = false;
			this->numericUpDown9->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown10->Location = System::Drawing::Point(212, 126);
			this->numericUpDown10->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(31, 20);
			this->numericUpDown10->TabIndex = 35;
			this->numericUpDown10->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown10->Visible = false;
			this->numericUpDown10->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown11->Location = System::Drawing::Point(182, 126);
			this->numericUpDown11->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(31, 20);
			this->numericUpDown11->TabIndex = 34;
			this->numericUpDown11->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown11->Visible = false;
			this->numericUpDown11->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown12->Location = System::Drawing::Point(152, 126);
			this->numericUpDown12->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(31, 20);
			this->numericUpDown12->TabIndex = 33;
			this->numericUpDown12->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown12->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown13->Location = System::Drawing::Point(122, 126);
			this->numericUpDown13->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(31, 20);
			this->numericUpDown13->TabIndex = 32;
			this->numericUpDown13->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown13->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown14
			// 
			this->numericUpDown14->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown14->Location = System::Drawing::Point(92, 126);
			this->numericUpDown14->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown14->Name = L"numericUpDown14";
			this->numericUpDown14->Size = System::Drawing::Size(31, 20);
			this->numericUpDown14->TabIndex = 31;
			this->numericUpDown14->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown14->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown15->Location = System::Drawing::Point(32, 126);
			this->numericUpDown15->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size(31, 20);
			this->numericUpDown15->TabIndex = 30;
			this->numericUpDown15->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown15->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(62, 126);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(31, 20);
			this->textBox2->TabIndex = 29;
			this->textBox2->Text = L"-1";
			this->textBox2->Visible = false;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown8->Location = System::Drawing::Point(242, 107);
			this->numericUpDown8->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(31, 20);
			this->numericUpDown8->TabIndex = 28;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown8->Visible = false;
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown7->Location = System::Drawing::Point(212, 107);
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(31, 20);
			this->numericUpDown7->TabIndex = 27;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown7->Visible = false;
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown6->Location = System::Drawing::Point(182, 107);
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(31, 20);
			this->numericUpDown6->TabIndex = 26;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown6->Visible = false;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown5->Location = System::Drawing::Point(152, 107);
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(31, 20);
			this->numericUpDown5->TabIndex = 25;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown4->Location = System::Drawing::Point(122, 107);
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(31, 20);
			this->numericUpDown4->TabIndex = 24;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown3->Location = System::Drawing::Point(92, 107);
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(31, 20);
			this->numericUpDown3->TabIndex = 23;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown2->Location = System::Drawing::Point(62, 107);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(31, 20);
			this->numericUpDown2->TabIndex = 22;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown74_ValueChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(32, 107);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(31, 20);
			this->textBox1->TabIndex = 21;
			this->textBox1->Text = L"-1";
			this->textBox1->Visible = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(10, 47);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 30);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(362, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(610, 536);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Graph";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(7, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(597, 511);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(6, 22);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(140, 22);
			this->label24->TabIndex = 149;
			this->label24->Text = L"Cities count:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)));
			this->ClientSize = System::Drawing::Size(984, 561);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown78))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown79))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown80))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown81))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown82))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown83))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown84))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown85))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown86))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown87))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown88))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown89))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown90))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown91))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown70))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		std::vector<Vector2f> getPos(const Vector2f& pos, const int& radius, const int& n)
		{
			std::vector<Vector2f> result(n);
			const float pi = 3.14159265358979323846264;
			for (int i = 0; i < n; ++i)
			{

				double angle = (pi/180)*((360 / double(n)) * double(i)) - (pi/2);
				result[i] = Vector2f(pos.x + radius * cos(angle), pos.y + radius * sin(angle));
			}
			return result;
		};
		
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Vector2f center((double)(this->pictureBox1->Width) / 2, (double)(this->pictureBox1->Height) / 2);
		
		int d = std::min(this->pictureBox1->Height - 80, this->pictureBox1->Width - 80);
		int n = (int)(this->numericUpDown1->Value);
		std::vector<Vector2f> Positions = getPos(center, d/2, n);
		Pen^ b = gcnew Pen(Brushes::CornflowerBlue);
		b->Width = 2.0F;
		Pen^ a = gcnew Pen(Brushes::White);
		a->EndCap = System::Drawing::Drawing2D::LineCap::ArrowAnchor;
		a->Width = 4.0F;
		a->LineJoin = System::Drawing::Drawing2D::LineJoin::Bevel;
		System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 16);
		System::Drawing::SolidBrush^ drawBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::DarkSlateBlue);
		System::Drawing::SolidBrush^ drawfont = gcnew System::Drawing::SolidBrush(System::Drawing::Color::White);
		float x = 150.0F;
		float y = 50.0F;
		System::Drawing::StringFormat^ drawFormat = gcnew System::Drawing::StringFormat();
		System::Drawing::Font^ DrawFont = gcnew System::Drawing::Font("Arial", 10);
		System::Drawing::SolidBrush^ Drawfont = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Black);
		//1
		if (this->numericUpDown2->Value > 0) {
			Vector2f start1 = Positions[0];
			Vector2f finish = Positions[1];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown15->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown2->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown2->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown3->Value > 0) {
			Vector2f start1 = Positions[0];
			Vector2f finish = Positions[2];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown28->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown3->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown3->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown4->Value > 0) {
			Vector2f start1 = Positions[0];
			Vector2f finish = Positions[3];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown22->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown4->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown4->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown5->Value > 0) {
			Vector2f start1 = Positions[0];
			Vector2f finish = Positions[4];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown36->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown5->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown5->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown6->Value > 0) {
			if (n > 5) {
				Vector2f start1 = Positions[0];
				Vector2f finish = Positions[5];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown67->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown6->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown6->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown7->Value > 0) {
			if (n > 6) {
				Vector2f start1 = Positions[0];
				Vector2f finish = Positions[6];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown64->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown7->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown7->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown8->Value > 0) {
			if (n > 7) {
				Vector2f start1 = Positions[0];
				Vector2f finish = Positions[7];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown56->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown8->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown8->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown91->Value > 0) {
			if (n > 8) {
				Vector2f start1 = Positions[0];
				Vector2f finish = Positions[8];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown50->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown91->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown2->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown90->Value > 0) {
			if (n > 9) {
				Vector2f start1 = Positions[0];
				Vector2f finish = Positions[9];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown43->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown90->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown90->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		//2
		if (this->numericUpDown15->Value > 0) {
			Vector2f start1 = Positions[1];
			Vector2f finish = Positions[0];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown2->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown15->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown15->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown14->Value > 0) {
			Vector2f start1 = Positions[1];
			Vector2f finish = Positions[2];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown29->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown14->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown14->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown13->Value > 0) {
			Vector2f start1 = Positions[1];
			Vector2f finish = Positions[3];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown20->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown13->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown13->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown12->Value > 0) {
			Vector2f start1 = Positions[1];
			Vector2f finish = Positions[4];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown34->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown12->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown12->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown11->Value > 0) {
			if (n > 5) {
				Vector2f start1 = Positions[1];
				Vector2f finish = Positions[5];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown71->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown11->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown11->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown10->Value > 0) {
			if (n > 6) {
				Vector2f start1 = Positions[1];
				Vector2f finish = Positions[6];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown51->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown10->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown10->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown9->Value > 0) {
			if (n > 7) {
				Vector2f start1 = Positions[1];
				Vector2f finish = Positions[7];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown57->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown9->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown9->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown89->Value > 0) {
			if (n > 8) {
				Vector2f start1 = Positions[1];
				Vector2f finish = Positions[8];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown48->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown89->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown89->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown88->Value > 0) {
			if (n > 9) {
				Vector2f start1 = Positions[1];
				Vector2f finish = Positions[9];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown41->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown88->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown88->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		//3
		if (this->numericUpDown28->Value > 0) {
			Vector2f start1 = Positions[2];
			Vector2f finish = Positions[0];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown3->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown28->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown28->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown29->Value > 0) {
			Vector2f start1 = Positions[2];
			Vector2f finish = Positions[1];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown14->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown29->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown29->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown27->Value > 0) {
			Vector2f start1 = Positions[2];
			Vector2f finish = Positions[3];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown21->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown27->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown27->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown26->Value > 0) {
			Vector2f start1 = Positions[2];
			Vector2f finish = Positions[4];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown35->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown26->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown26->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown25->Value > 0) {
			if (n > 5) {
				Vector2f start1 = Positions[2];
				Vector2f finish = Positions[5];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown70->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown25->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown25->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown24->Value > 0) {
			if (n > 6) {
				Vector2f start1 = Positions[2];
				Vector2f finish = Positions[6];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown63->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown24->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown24->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown23->Value > 0) {
			if (n > 7) {
				Vector2f start1 = Positions[2];
				Vector2f finish = Positions[7];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown59->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown23->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown23->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown87->Value > 0) {
			if (n > 8) {
				Vector2f start1 = Positions[2];
				Vector2f finish = Positions[8];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown49->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown87->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown87->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown86->Value > 0) {
			if (n > 9) {
				Vector2f start1 = Positions[2];
				Vector2f finish = Positions[9];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown42->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown86->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown86->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		//4
		if (this->numericUpDown22->Value > 0) {
			Vector2f start1 = Positions[3];
			Vector2f finish = Positions[0];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown4->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown22->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown22->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown20->Value > 0) {
			Vector2f start1 = Positions[3];
			Vector2f finish = Positions[1];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown13->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown20->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown20->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown21->Value > 0) {
			Vector2f start1 = Positions[3];
			Vector2f finish = Positions[2];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown27->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown21->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown21->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown19->Value > 0) {
			Vector2f start1 = Positions[3];
			Vector2f finish = Positions[4];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown33->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown19->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown19->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown18->Value > 0) {
			if (n > 5) {
				Vector2f start1 = Positions[3];
				Vector2f finish = Positions[5];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown69->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown18->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown18->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown17->Value > 0) {
			if (n > 6) {
				Vector2f start1 = Positions[3];
				Vector2f finish = Positions[6];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown62->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown17->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown17->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown16->Value > 0) {
			if (n > 7) {
				Vector2f start1 = Positions[3];
				Vector2f finish = Positions[7];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown55->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown16->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown16->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown85->Value > 0) {
			if (n > 8) {
				Vector2f start1 = Positions[3];
				Vector2f finish = Positions[8];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown73->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown85->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown85->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown84->Value > 0) {
			if (n > 9) {
				Vector2f start1 = Positions[3];
				Vector2f finish = Positions[9];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown72->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown84->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown84->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		//5
		if (this->numericUpDown36->Value > 0) {
			Vector2f start1 = Positions[4];
			Vector2f finish = Positions[0];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown5->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown36->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown36->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown34->Value > 0) {
			Vector2f start1 = Positions[4];
			Vector2f finish = Positions[1];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown12->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown34->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown34->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown35->Value > 0) {
			Vector2f start1 = Positions[4];
			Vector2f finish = Positions[2];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown26->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown35->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown35->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown33->Value > 0) {
			Vector2f start1 = Positions[4];
			Vector2f finish = Positions[3];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown19->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown33->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown33->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown32->Value > 0) {
			Vector2f start1 = Positions[4];
			Vector2f finish = Positions[5];
			Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
			Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
			if (this->numericUpDown68->Value > 0)
			{

				e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown32->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
			}
			else
			{
				Vector2f V = (finish - start).getOrtVect() * 25 + finish;
				e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
				e->Graphics->DrawString(Convert::ToString(this->numericUpDown32->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
			}
		}
		if (this->numericUpDown31->Value > 0) {
			if (n > 6) {
				Vector2f start1 = Positions[4];
				Vector2f finish = Positions[6];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown61->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown31->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown31->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown30->Value > 0) {
			if (n > 7) {
				Vector2f start1 = Positions[4];
				Vector2f finish = Positions[7];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown54->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown30->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown30->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown83->Value > 0) {
			if (n > 8) {
				Vector2f start1 = Positions[4];
				Vector2f finish = Positions[8];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown47->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown83->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown83->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		if (this->numericUpDown82->Value > 0) {
			if (n > 9) {
				Vector2f start1 = Positions[4];
				Vector2f finish = Positions[9];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown40->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		}
		//6
		if(this->numericUpDown67->Value > 0)
			if (n > 5) {
				Vector2f start1 = Positions[5];
				Vector2f finish = Positions[0];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown6->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown71->Value > 0)
			if (n > 5) {
				Vector2f start1 = Positions[5];
				Vector2f finish = Positions[1];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown11->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown70->Value > 0)
			if (n > 5) {
				Vector2f start1 = Positions[5];
				Vector2f finish = Positions[2];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown25->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown69->Value > 0)
			if (n > 5) {
				Vector2f start1 = Positions[5];
				Vector2f finish = Positions[3];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown18->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown68->Value > 0)
			if (n > 5) {
				Vector2f start1 = Positions[5];
				Vector2f finish = Positions[4];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown32->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown66->Value > 0)
			if (n > 6) {
				Vector2f start1 = Positions[5];
				Vector2f finish = Positions[6];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown60->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown65->Value > 0)
			if (n > 7) {
				Vector2f start1 = Positions[5];
				Vector2f finish = Positions[7];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown53->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown81->Value > 0)
			if (n > 8) {
				Vector2f start1 = Positions[5];
				Vector2f finish = Positions[8];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown46->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown80->Value > 0)
			if (n > 9) {
				Vector2f start1 = Positions[5];
				Vector2f finish = Positions[9];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown39->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown82->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		//7
		if (this->numericUpDown64->Value > 0)
			if (n > 6) {
				Vector2f start1 = Positions[6];
				Vector2f finish = Positions[0];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown7->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown64->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown64->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown51->Value > 0)
			if (n > 6) {
				Vector2f start1 = Positions[6];
				Vector2f finish = Positions[1];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown10->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown51->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown51->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown63->Value > 0)
			if (n > 6) {
				Vector2f start1 = Positions[6];
				Vector2f finish = Positions[2];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown24->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown63->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown63->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown62->Value > 0)
			if (n > 6) {
				Vector2f start1 = Positions[6];
				Vector2f finish = Positions[3];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown17->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown62->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown62->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown61->Value > 0)
			if (n > 6) {
				Vector2f start1 = Positions[6];
				Vector2f finish = Positions[4];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown31->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown61->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown61->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown60->Value > 0)
			if (n > 6) {
				Vector2f start1 = Positions[6];
				Vector2f finish = Positions[5];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown66->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown60->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown60->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown58->Value > 0)
			if (n > 7) {
				Vector2f start1 = Positions[6];
				Vector2f finish = Positions[7];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown52->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown58->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown58->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown77->Value > 0)
			if (n > 8) {
				Vector2f start1 = Positions[6];
				Vector2f finish = Positions[8];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown45->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown77->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown77->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown79->Value > 0)
			if (n > 9) {
				Vector2f start1 = Positions[6];
				Vector2f finish = Positions[9];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown38->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown79->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown79->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		//8
		if (this->numericUpDown56->Value > 0)
			if (n > 7) {
				Vector2f start1 = Positions[7];
				Vector2f finish = Positions[0];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown8->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown8->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown8->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown57->Value > 0)
			if (n > 7) {
				Vector2f start1 = Positions[7];
				Vector2f finish = Positions[1];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown9->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown57->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown57->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown59->Value > 0)
			if (n > 7) {
				Vector2f start1 = Positions[7];
				Vector2f finish = Positions[2];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown23->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown59->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown59->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown55->Value > 0)
			if (n > 7) {
				Vector2f start1 = Positions[7];
				Vector2f finish = Positions[3];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown16->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown55->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown55->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown54->Value > 0)
			if (n > 7) {
				Vector2f start1 = Positions[7];
				Vector2f finish = Positions[4];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown30->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown54->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown54->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown53->Value > 0)
			if (n > 7) {
				Vector2f start1 = Positions[7];
				Vector2f finish = Positions[5];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown65->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown53->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown53->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown52->Value > 0)
			if (n > 7) {
				Vector2f start1 = Positions[7];
				Vector2f finish = Positions[6];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown58->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown52->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown52->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown78->Value > 0)
			if (n > 8) {
				Vector2f start1 = Positions[7];
				Vector2f finish = Positions[8];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown44->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown78->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown78->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown74->Value > 0)
			if (n > 9) {
				Vector2f start1 = Positions[7];
				Vector2f finish = Positions[9];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown37->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown74->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown74->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		//9
		if (this->numericUpDown50->Value > 0)
			if (n > 8) {
				Vector2f start1 = Positions[8];
				Vector2f finish = Positions[0];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown91->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown50->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown50->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown48->Value > 0)
			if (n > 8) {
				Vector2f start1 = Positions[8];
				Vector2f finish = Positions[1];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown89->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown48->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown48->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown49->Value > 0)
			if (n > 8) {
				Vector2f start1 = Positions[8];
				Vector2f finish = Positions[2];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown87->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown49->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown49->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown73->Value > 0)
			if (n > 8) {
				Vector2f start1 = Positions[8];
				Vector2f finish = Positions[3];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown85->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown73->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown73->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown47->Value > 0)
			if (n > 8) {
				Vector2f start1 = Positions[8];
				Vector2f finish = Positions[4];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown83->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown47->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown47->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown46->Value > 0)
			if (n > 8) {
				Vector2f start1 = Positions[8];
				Vector2f finish = Positions[5];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown81->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown46->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown46->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown45->Value > 0)
			if (n > 8) {
				Vector2f start1 = Positions[8];
				Vector2f finish = Positions[6];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown77->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown45->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown45->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown44->Value > 0)
			if (n > 8) {
				Vector2f start1 = Positions[8];
				Vector2f finish = Positions[7];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown78->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown44->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown44->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown76->Value > 0)
			if (n > 9) {
				Vector2f start1 = Positions[8];
				Vector2f finish = Positions[9];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown75->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown76->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown76->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		//10
		if (this->numericUpDown43->Value > 0)
			if (n > 9) {
				Vector2f start1 = Positions[9];
				Vector2f finish = Positions[0];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown90->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown43->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown43->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown41->Value > 0)
			if (n > 9) {
				Vector2f start1 = Positions[9];
				Vector2f finish = Positions[1];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown88->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown41->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown41->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown42->Value > 0)
			if (n > 9) {
				Vector2f start1 = Positions[9];
				Vector2f finish = Positions[2];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown86->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown42->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown42->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown72->Value > 0)
			if (n > 9) {
				Vector2f start1 = Positions[9];
				Vector2f finish = Positions[3];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown84->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown72->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown72->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown40->Value > 0)
			if (n > 9) {
				Vector2f start1 = Positions[9];
				Vector2f finish = Positions[4];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown82->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown40->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown40->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown39->Value > 0)
			if (n > 9) {
				Vector2f start1 = Positions[9];
				Vector2f finish = Positions[5];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown80->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown39->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown39->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown38->Value > 0)
			if (n > 9) {
				Vector2f start1 = Positions[9];
				Vector2f finish = Positions[6];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown79->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown38->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown38->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown37->Value > 0)
			if (n > 9) {
				Vector2f start1 = Positions[9];
				Vector2f finish = Positions[7];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown74->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown37->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown37->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		if (this->numericUpDown75->Value > 0)
			if (n > 9) {
				Vector2f start1 = Positions[9];
				Vector2f finish = Positions[8];
				Vector2f start = (start1 - finish).getOrtVect() * 25 + start1;
				Vector2f midle((finish.x + start1.x) / 2, (finish.y + start1.y) / 2);
				if (this->numericUpDown76->Value > 0)
				{

					e->Graphics->DrawLine(a, start.x, start.y, midle.x, midle.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown75->Value), DrawFont, Drawfont, (midle.x + start.x) / 2, (midle.y + start.y) / 2, drawFormat);
				}
				else
				{
					Vector2f V = (finish - start).getOrtVect() * 25 + finish;
					e->Graphics->DrawLine(a, start.x, start.y, V.x, V.y);
					e->Graphics->DrawString(Convert::ToString(this->numericUpDown75->Value), DrawFont, Drawfont, midle.x, midle.y, drawFormat);
				}
			}
		
		for (int i = 0; i < n; i++)
		{
			e->Graphics->DrawEllipse(b, Rectangle(Positions[i].x - 25, Positions[i].y - 25, 50, 50));
			e->Graphics->FillEllipse(drawBrush, Rectangle(Positions[i].x - 25, Positions[i].y - 25, 50, 50));
			if (i < 9) e->Graphics->DrawString(Convert::ToString(i+1), drawFont, drawfont, Positions[i].x-10, Positions[i].y-12, drawFormat);
			else e->Graphics->DrawString(Convert::ToString(i + 1), drawFont, drawfont, Positions[i].x - 17, Positions[i].y - 12, drawFormat);
			
		}
		
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox1->Refresh();
	if (this->numericUpDown1->Value > 5) {
		this->numericUpDown6->Visible = true;
		this->numericUpDown11->Visible = true;
		this->numericUpDown25->Visible = true;
		this->numericUpDown18->Visible = true;
		this->numericUpDown32->Visible = true;
		this->numericUpDown67->Visible = true;
		this->numericUpDown71->Visible = true;
		this->numericUpDown70->Visible = true;
		this->numericUpDown69->Visible = true;
		this->numericUpDown68->Visible = true;

	}
	else {
		this->numericUpDown6->Visible = false;
		this->numericUpDown11->Visible = false;
		this->numericUpDown25->Visible = false;
		this->numericUpDown18->Visible = false;
		this->numericUpDown32->Visible = false;
		this->numericUpDown67->Visible = false;
		this->numericUpDown71->Visible = false;
		this->numericUpDown70->Visible = false;
		this->numericUpDown69->Visible = false;
		this->numericUpDown68->Visible = false;
	}
	if (this->numericUpDown1->Value > 6) {
		this->numericUpDown7->Visible = true;
		this->numericUpDown10->Visible = true;
		this->numericUpDown24->Visible = true;
		this->numericUpDown17->Visible = true;
		this->numericUpDown31->Visible = true;
		this->numericUpDown66->Visible = true;
		this->numericUpDown60->Visible = true;
		this->numericUpDown61->Visible = true;
		this->numericUpDown63->Visible = true;
		this->numericUpDown51->Visible = true;
		this->numericUpDown64->Visible = true;
		this->numericUpDown62->Visible = true;
	}
	else {
		this->numericUpDown7->Visible = false;
		this->numericUpDown10->Visible = false;
		this->numericUpDown24->Visible = false;
		this->numericUpDown17->Visible = false;
		this->numericUpDown31->Visible = false;
		this->numericUpDown66->Visible = false;
		this->numericUpDown60->Visible = false;
		this->numericUpDown61->Visible = false;
		this->numericUpDown63->Visible = false;
		this->numericUpDown51->Visible = false;
		this->numericUpDown64->Visible = false;
		this->numericUpDown62->Visible = false;
	}
	if (this->numericUpDown1->Value > 7) {
		this->numericUpDown8->Visible = true;
		this->numericUpDown9->Visible = true;
		this->numericUpDown23->Visible = true;
		this->numericUpDown16->Visible = true;
		this->numericUpDown30->Visible = true;
		this->numericUpDown65->Visible = true;
		this->numericUpDown58->Visible = true;
		this->numericUpDown56->Visible = true;
		this->numericUpDown57->Visible = true;
		this->numericUpDown59->Visible = true;
		this->numericUpDown55->Visible = true;
		this->numericUpDown54->Visible = true;
		this->numericUpDown53->Visible = true;
		this->numericUpDown52->Visible = true;
	}
	else {
		this->numericUpDown8->Visible = false;
		this->numericUpDown9->Visible = false;
		this->numericUpDown23->Visible = false;
		this->numericUpDown16->Visible = false;
		this->numericUpDown30->Visible = false;
		this->numericUpDown65->Visible = false;
		this->numericUpDown58->Visible = false;
		this->numericUpDown56->Visible = false;
		this->numericUpDown57->Visible = false;
		this->numericUpDown59->Visible = false;
		this->numericUpDown55->Visible = false;
		this->numericUpDown54->Visible = false;
		this->numericUpDown53->Visible = false;
		this->numericUpDown52->Visible = false;
	}
	if (this->numericUpDown1->Value > 8) {
		this->numericUpDown91->Visible = true;
		this->numericUpDown89->Visible = true;
		this->numericUpDown87->Visible = true;
		this->numericUpDown85->Visible = true;
		this->numericUpDown83->Visible = true;
		this->numericUpDown81->Visible = true;
		this->numericUpDown77->Visible = true;
		this->numericUpDown78->Visible = true;
		this->numericUpDown50->Visible = true;
		this->numericUpDown48->Visible = true;
		this->numericUpDown49->Visible = true;
		this->numericUpDown47->Visible = true;
		this->numericUpDown46->Visible = true;
		this->numericUpDown45->Visible = true;
		this->numericUpDown44->Visible = true;
		this->numericUpDown73->Visible = true;
	}
	else {
		this->numericUpDown91->Visible = false;
		this->numericUpDown89->Visible = false;
		this->numericUpDown87->Visible = false;
		this->numericUpDown85->Visible = false;
		this->numericUpDown83->Visible = false;
		this->numericUpDown81->Visible = false;
		this->numericUpDown77->Visible = false;
		this->numericUpDown78->Visible = false;
		this->numericUpDown50->Visible = false;
		this->numericUpDown48->Visible = false;
		this->numericUpDown49->Visible = false;
		this->numericUpDown47->Visible = false;
		this->numericUpDown46->Visible = false;
		this->numericUpDown45->Visible = false;
		this->numericUpDown44->Visible = false;
		this->numericUpDown73->Visible = false;
	}
	if (this->numericUpDown1->Value > 9) {
		this->numericUpDown90->Visible = true;
		this->numericUpDown88->Visible = true;
		this->numericUpDown86->Visible = true;
		this->numericUpDown84->Visible = true;
		this->numericUpDown82->Visible = true;
		this->numericUpDown80->Visible = true;
		this->numericUpDown79->Visible = true;
		this->numericUpDown74->Visible = true;
		this->numericUpDown76->Visible = true;
		this->numericUpDown43->Visible = true;
		this->numericUpDown41->Visible = true;
		this->numericUpDown42->Visible = true;
		this->numericUpDown72->Visible = true;
		this->numericUpDown40->Visible = true;
		this->numericUpDown39->Visible = true;
		this->numericUpDown38->Visible = true;
		this->numericUpDown37->Visible = true;
		this->numericUpDown75->Visible = true;
	}
	else {
		this->numericUpDown90->Visible = false;
		this->numericUpDown88->Visible = false;
		this->numericUpDown86->Visible = false;
		this->numericUpDown84->Visible = false;
		this->numericUpDown82->Visible = false;
		this->numericUpDown80->Visible = false;
		this->numericUpDown79->Visible = false;
		this->numericUpDown74->Visible = false;
		this->numericUpDown76->Visible = false;
		this->numericUpDown43->Visible = false;
		this->numericUpDown41->Visible = false;
		this->numericUpDown42->Visible = false;
		this->numericUpDown72->Visible = false;
		this->numericUpDown40->Visible = false;
		this->numericUpDown39->Visible = false;
		this->numericUpDown38->Visible = false;
		this->numericUpDown37->Visible = false;
		this->numericUpDown75->Visible = false;
	}
}

private: System::Void numericUpDown74_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox1->Refresh();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	std::vector<std::vector<int>> a = matrix(10);
	//1
	a[0][0] = Convert::ToInt32(this->textBox1->Text);
	a[0][1] = Convert::ToInt32(this->numericUpDown2->Value);
	a[0][2] = Convert::ToInt32(this->numericUpDown3->Value);
	a[0][3] = Convert::ToInt32(this->numericUpDown4->Value);
	a[0][4] = Convert::ToInt32(this->numericUpDown5->Value);
	a[0][5] = Convert::ToInt32(this->numericUpDown6->Value);
	a[0][6] = Convert::ToInt32(this->numericUpDown7->Value);
	a[0][7] = Convert::ToInt32(this->numericUpDown8->Value);
	a[0][8] = Convert::ToInt32(this->numericUpDown91->Value);
	a[0][9] = Convert::ToInt32(this->numericUpDown90->Value);
	//2
	a[1][0] = Convert::ToInt32(this->numericUpDown15->Value);
	a[1][1] = -1;
	a[1][2] = Convert::ToInt32(this->numericUpDown14->Value);
	a[1][3] = Convert::ToInt32(this->numericUpDown13->Value);
	a[1][4] = Convert::ToInt32(this->numericUpDown12->Value);
	a[1][5] = Convert::ToInt32(this->numericUpDown11->Value);
	a[1][6] = Convert::ToInt32(this->numericUpDown10->Value);
	a[1][7] = Convert::ToInt32(this->numericUpDown9->Value);
	a[1][8] = Convert::ToInt32(this->numericUpDown89->Value);
	a[1][9] = Convert::ToInt32(this->numericUpDown88->Value);
	//3
	a[2][0] = Convert::ToInt32(this->numericUpDown28->Value);
	a[2][1] = Convert::ToInt32(this->numericUpDown29->Value);
	a[2][2] = -1;
	a[2][3] = Convert::ToInt32(this->numericUpDown27->Value);
	a[2][4] = Convert::ToInt32(this->numericUpDown26->Value);
	a[2][5] = Convert::ToInt32(this->numericUpDown25->Value);
	a[2][6] = Convert::ToInt32(this->numericUpDown24->Value);
	a[2][7] = Convert::ToInt32(this->numericUpDown23->Value);
	a[2][8] = Convert::ToInt32(this->numericUpDown87->Value);
	a[2][9] = Convert::ToInt32(this->numericUpDown86->Value);
	//4
	a[3][0] = Convert::ToInt32(this->numericUpDown22->Value);
	a[3][1] = Convert::ToInt32(this->numericUpDown20->Value);
	a[3][2] = Convert::ToInt32(this->numericUpDown21->Value);
	a[3][3] = -1;
	a[3][4] = Convert::ToInt32(this->numericUpDown19->Value);
	a[3][5] = Convert::ToInt32(this->numericUpDown18->Value);
	a[3][6] = Convert::ToInt32(this->numericUpDown17->Value);
	a[3][7] = Convert::ToInt32(this->numericUpDown16->Value);
	a[3][8] = Convert::ToInt32(this->numericUpDown85->Value);
	a[3][9] = Convert::ToInt32(this->numericUpDown84->Value);
	//5
	a[4][0] = Convert::ToInt32(this->numericUpDown36->Value);
	a[4][1] = Convert::ToInt32(this->numericUpDown34->Value);
	a[4][2] = Convert::ToInt32(this->numericUpDown35->Value);
	a[4][3] = Convert::ToInt32(this->numericUpDown33->Value);
	a[4][4] = -1;
	a[4][5] = Convert::ToInt32(this->numericUpDown32->Value);
	a[4][6] = Convert::ToInt32(this->numericUpDown31->Value);
	a[4][7] = Convert::ToInt32(this->numericUpDown30->Value);
	a[4][8] = Convert::ToInt32(this->numericUpDown83->Value);
	a[4][9] = Convert::ToInt32(this->numericUpDown82->Value);
	//6
	a[5][0] = Convert::ToInt32(this->numericUpDown67->Value);
	a[5][1] = Convert::ToInt32(this->numericUpDown71->Value);
	a[5][2] = Convert::ToInt32(this->numericUpDown70->Value);
	a[5][3] = Convert::ToInt32(this->numericUpDown69->Value);
	a[5][4] = Convert::ToInt32(this->numericUpDown68->Value);
	a[5][5] = -1;
	a[5][6] = Convert::ToInt32(this->numericUpDown66->Value);
	a[5][7] = Convert::ToInt32(this->numericUpDown65->Value);
	a[5][8] = Convert::ToInt32(this->numericUpDown81->Value);
	a[5][9] = Convert::ToInt32(this->numericUpDown80->Value);
	//7
	a[6][0] = Convert::ToInt32(this->numericUpDown64->Value);
	a[6][1] = Convert::ToInt32(this->numericUpDown51->Value);
	a[6][2] = Convert::ToInt32(this->numericUpDown63->Value);
	a[6][3] = Convert::ToInt32(this->numericUpDown62->Value);
	a[6][4] = Convert::ToInt32(this->numericUpDown61->Value);
	a[6][5] = Convert::ToInt32(this->numericUpDown60->Value);
	a[6][6] = -1;
	a[6][7] = Convert::ToInt32(this->numericUpDown58->Value);
	a[6][8] = Convert::ToInt32(this->numericUpDown77->Value);
	a[6][9] = Convert::ToInt32(this->numericUpDown79->Value);
	//8
	a[7][0] = Convert::ToInt32(this->numericUpDown56->Value);
	a[7][1] = Convert::ToInt32(this->numericUpDown57->Value);
	a[7][2] = Convert::ToInt32(this->numericUpDown59->Value);
	a[7][3] = Convert::ToInt32(this->numericUpDown55->Value);
	a[7][4] = Convert::ToInt32(this->numericUpDown54->Value);
	a[7][5] = Convert::ToInt32(this->numericUpDown53->Value);
	a[7][6] = Convert::ToInt32(this->numericUpDown52->Value);
	a[7][7] = -1;
	a[7][8] = Convert::ToInt32(this->numericUpDown78->Value);
	a[7][9] = Convert::ToInt32(this->numericUpDown74->Value);
	//9
	a[8][0] = Convert::ToInt32(this->numericUpDown50->Value);
	a[8][1] = Convert::ToInt32(this->numericUpDown48->Value);
	a[8][2] = Convert::ToInt32(this->numericUpDown49->Value);
	a[8][3] = Convert::ToInt32(this->numericUpDown73->Value);
	a[8][4] = Convert::ToInt32(this->numericUpDown47->Value);
	a[8][5] = Convert::ToInt32(this->numericUpDown46->Value);
	a[8][6] = Convert::ToInt32(this->numericUpDown45->Value);
	a[8][7] = Convert::ToInt32(this->numericUpDown44->Value);
	a[8][8] = -1;
	a[8][9] = Convert::ToInt32(this->numericUpDown76->Value);
	//10
	a[9][0] = Convert::ToInt32(this->numericUpDown43->Value);
	a[9][1] = Convert::ToInt32(this->numericUpDown41->Value);
	a[9][2] = Convert::ToInt32(this->numericUpDown42->Value);
	a[9][3] = Convert::ToInt32(this->numericUpDown72->Value);
	a[9][4] = Convert::ToInt32(this->numericUpDown40->Value);
	a[9][5] = Convert::ToInt32(this->numericUpDown39->Value);
	a[9][6] = Convert::ToInt32(this->numericUpDown38->Value);
	a[9][7] = Convert::ToInt32(this->numericUpDown37->Value);
	a[9][8] = Convert::ToInt32(this->numericUpDown75->Value);
	a[9][9] = -1;
	clear_s();
	graph(a);
	reduct(a);
	String^ msg = gcnew String(result());
	this->textBox11->Text = msg;
	delete msg;
}
};
}