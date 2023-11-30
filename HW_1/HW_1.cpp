#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>



int trapezoid_area(int b1, int b2, int h) { 
	int S; // ��������� ����������
	S = round((b1 + b2) * h / float(2)); //����������� ���������� S ����������� �������
	return S; // ���������� S
}
int circumference_length(int r) { 
	float C; // ��������� ����������
	C = 2 * M_PI * r; // ����������� ���������� � ������������ (������� ����� ����������)
	return round(C); // ���������� ����������� �
}
int area_of_the_circle(int r) { 
	float S; // ��������� ����������
	S =  M_PI * r * r; // ����������� ���������� S ������������ (������� ������� �����)
	return round(S); // ���������� ����������� S
}
int the_area_of_a_right_triangle(int k1, int k2) {
	float S; // ��������� ����������
	S = k1 * k2 / float(2); // ����������� ���������� S ������� (������� ������� �������������� ������������)
	return round(S); // ���������� ����������� S
}
int hypotenuse(int k1, int k2) { 
	float c; // ��������� ����������
	c = sqrt((k1 * k1) + (k2 * k2)); // ����������� ���������� � �������� (������� ���������� ���������� �� ���� �������)
	return round(c); // ���������� ����������� c
}
void sum_of_digits(int a) { 
	int sum = 0; // �������������� ���������� ��������� 0
	if (a / 10000 == 0) { // ���������, ��� ��������� ����� �� ������ ���������������
		if (a / 1000 != 0) { // ���������, ��� ��������� ����� �� ������ ���������������
			sum += (a / 1000); // � ����� ���������� ������ �����
			a = a % 1000; // ������� ������ ����� �� �����
			sum += (a / 100); // � ����� ���������� ������ �����
			a = a % 100; // ������� ������ ����� �� �����
			sum += (a / 10); // � ����� ���������� ������ �����
			a = a % 10; // ������� ������ ����� �� �����
			sum += a; // � ����� ���������� ��������� �����
			std::cout << std::endl << "Answer: " << sum << std::endl << std::endl; //������� �����
		}
		else {
			std::cout << std::endl << "Answer: " << "the number is less than four digits" << std::endl << std::endl; // ��������, ��� ��������� ����� ������ ���������������
		}
	}
	else{
		std::cout << std::endl << "Answer: " << "the number is more than four digits" << std::endl << std::endl; // ��������, ��� ��������� ����� ������ ���������������
	}
}
void cartesian_to_polar(int x, int y) {
	float p; // ��������� ���������� p
	float q; // ��������� ����������  q
	p = sqrt(x * x + y * y); //  ����������� ���������� p �������� ( �� ������� )
	q = (atan(y / float(x)))*180/M_PI; //  ����������� ���������� q �������� ( �� ������� )
	std::cout << std::endl << "Answer: " << "A(" << round(p) << "," << round(q) << ")" << std::endl << std::endl; // ������� ����� � ������������ ����������
}
void polar_to_cartesian(int p, int q) {
	float x; // ��������� ���������� x
	float y; // ��������� ���������� y
	x = p * cos(q); //  ����������� ���������� x �������� ( �� ������� )
	y = p * sin(q); //  ����������� ���������� y �������� ( �� ������� )
	std::cout << std::endl << "Answer: " << "A(" << round(x) << "," << round(y) << ")" << std::endl << std::endl; // ������� ����� � ������������ ����������
}
void roots_of_the_quadratic_equation(int a, int b, int c) {
	if ((b > 0) && (c > 0)) { // ��������� ��������� ����� �� ��������������� � ���������������, ����� ������� ������� ������������ ���������� ���������
		std::cout << std::endl << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
	}
	if ((b < 0) && (c > 0)) {
		std::cout << std::endl << a << "x^2 - " << b * (-1) << "x + " << c << " = 0" << std::endl;
	}
	if ((b > 0) && (c < 0)) {
		std::cout << std::endl << a << "x^2 + " << b << "x - " << c * (-1) << " = 0" << std::endl;
	}
	if ((b < 0) && (c < 0)) {
		std::cout << std::endl << a << "x^2 - " << b * (-1) << "x - " << c * (-1) << " = 0" << std::endl;
	}
	int D; // ��������� ���������� D
	float x1; // ��������� ���������� x1 ������������� ����, ��� ��� ����� ����� ���� �� ������ �������
	float x2; // ��������� ���������� x2 ������������� ����, ��� ��� ����� ����� ���� �� ������ �������
	D = b * b - 4 * a * c; // ����������� ���������� D �������� �� ������� �������������
	if (D > 0) { // ���������, �������������, ������������� ��� ������ ���� ����� ������������, ��� ��� ������� ������� ��� ���� �����������
		x1 = (b * (-1) + sqrt(D)) / (2 * a);
		x2 = (b * (-1) - sqrt(D)) / (2 * a);
		std::cout << std::endl << "Answer: x1 = " << round(x1) << ", x2 = " << round(x2) << std::endl << std::endl; // ������� ���������, ���� ������������ ������������� (����������� ��� �����)
	}
	else if (D == 0) {
		x1 = b * (-1) / (2 * static_cast<float>(a)); // ����� �� ������ � ���������� � ���
		std::cout << std::endl << "Answer: x1 = " << round(x1) << std::endl << std::endl; // ������� ���������, ���� ������������ ����� 0 (����������� ���� ������)
	}
	else {
		std::cout << std::endl << "Answer: no roots" << std::endl << std::endl; // ������� ���������, ���� ������������ ������������� (��� ������)
	}
}
void triangle_medians(int a, int b, int c) {
	if ((a + b > c) && (a + c > b) && (c + b > a)) { // ���������, ����� �� ��������� ����� ���� ��������� ������������
		float M1 = sqrt((2 * a * a + 2 * b * b - c * c) / 4); // �������������� ���������� �1, �2, �3 ����� ������� ���������� �������
		float M2 = sqrt((2 * c * c + 2 * b * b - a * a) / 4);
		float M3 = sqrt((2 * a * a + 2 * c * c - b * b) / 4);
		M1 = round(M1); // ��������� ������������ ��������
		M2 = round(M2);
		M3 = round(M3);
		if ((M1 + M2 > M3) && (M1 + M3 > M2) && (M2 + M3 > M1)) { // ���������, ����� �� ������������ ������� ���� ��������� ������������
			float m1 = sqrt((2 * M1 * M1 + 2 * M2 * M2 - M3 * M3) / 4); // �������������� ���������� m1, m2, m3 ����� ������� ���������� �������
			float m2 = sqrt((2 * M1 * M1 + 2 * M3 * M3 - M2 * M2) / 4);
			float m3 = sqrt((2 * M2 * M2 + 2 * M3 * M3 - M1 * M1) / 4);
			std::cout << std::endl << "Answer: " << "median 1 = " << round(m1) << ", median 2 = " << round(m2) << ", median 3 = " << round(m3) << std::endl << std::endl; // ������� ��������� ����������� ������
		}
		else {
			std::cout << std::endl << "Answer: the medians of this triangle cannot be the sides of a triangle" << std::endl << std::endl; // ��������, ��� ����������� ������� �� ����� ���� ��������� ������������
		}
	}
	else {
		std::cout << std::endl << "Answer: there is no such triangle" << std::endl << std::endl; // ��������, ��� ��������� ����� �� ����� ���� ��������� ������������
	}
}
void hours_and_minutes(int k) {
	int hours = k / 3600; // �������������� ���������� ��������� (���������� �����)
	int minets = (k - (hours * 3600)) / 60; // �������������� ���������� ��������� (���������� �����)
	std::cout << std::endl << "Answer: " << hours << " hours and " << minets << " minets" << std::endl << std::endl; // ������� �����
}
void checking_for_isosceles(int a, int b, int c) {
	if ((a == b) && (a == c) && (c == b)) { // ��������� �� �������� �� ����������� ��������������
		std::cout << std::endl << "Answer: the triangle is not isosceles" << std::endl << std::endl;
	}
	else if ((a == b) || (a == c) || (b == c)) { // ��������� �������� �� ����������� ��������������
			std::cout << std::endl << "Answer: the triangle is isosceles" << std::endl << std::endl; // ������� �����, ���� ��������
	}
	else { 
		std::cout << std::endl << "Answer: the triangle is not isosceles" << std::endl << std::endl; // ������� �����, ���� �� ��������
	}
}
int calculation_of_the_discount(int purchase) {
	if (purchase > 1000) { // ���������, ��������� �� ����� ������� 1000 
		float discount = static_cast<float>(purchase) * 0.1; // �������������� ���������� ��������� (��������� ������)
		int result = round(purchase - discount); // �������������� ���������� ��������� (��������� �������� ����������� �����)
		return result; // ���������� �������� �����
	}
	else {
		return purchase; // ���������� ����������� ����� �������, ���� ����� ������ 1000
	}
}
void lose_weight_or_gain_weight(int height, float weight) {
	int ideal_weight = height - 100; // �������������� ���������� ��������� (��������� ���)
	if (ideal_weight == weight) { // ��������� ��� ������������ � ��������� �����
		std::cout << std::endl << "Answer: you have the ideal weight" << std::endl << std::endl; // �������� ������������, ��� � ���� ��������� ���
	}
	else if (ideal_weight >= weight){ 
		std::cout << std::endl << "Answer: you need to gain weight" << std::endl << std::endl;  // �������� ������������. ��� ��� ����� ������� ���
	}
	else {
		std::cout << std::endl << "Answer: you need to lose weight" << std::endl << std::endl; // �������� ������������, ��� ��� ����� ��������
	}
}
void composition(int a1, int a2, int comp) {
	if (comp == a1 * a2) { // ��������� ����� �� ��������� ������������ �������� ����������� ������
		std::cout << std::endl << "Answer: your answer is correct" << std::endl << std::endl; // ��������, ��� ����� ������������ ������
	}
	else {
		std::cout << std::endl << "Answer: your answer is not correct" << std::endl << std::endl; // ��������, ��� ������������ ������
	}
}
void the_price_of_negotiation(int day, int time) { 
	int min_price = 20; // �������������� ���������� ��������� (������ ���� ����� ������)
	int result; // ��������� ����������
	std::cout << std::endl << "A minute costs 20 rubles" << std::endl; // �������� ������������ ��������� ����� ������
	if ((day == 6) || (day == 7)) { // ���������, ���� �� ������������ ������� ��� �����������
		result = (time * min_price) - (time * min_price * 0.2); // ���� ����, �� ����������� ���������� result ���� � ������ ������
		std::cout << std::endl << "Answer: the prise of your negotiation = " << result << " rubles" << std::endl << std::endl; // �������� ������������ ����
	}
	else {
		result = (time * min_price); // ���� ���, �� ����������� ���������� result ���� ��� ������
		std::cout << std::endl << "Answer: the prise of your negotiation = " << result << " rubles" << std::endl << std::endl; // �������� ������������ ����
	}
}
void name_of_the_month(int month, std::string period) {
	switch (month) { // ������������� ����� ����� ���� ������������� ������
	case 12:
		std::cout << std::endl << "Answer: month = december" << ", period = " << period << std::endl << std::endl; // ������� � ����� � ����� ���� ������������
		break;
	case 1:
		std::cout << std::endl << "Answer: month = january" << ", period = " << period << std::endl << std::endl;
		break;
	case 2:
		std::cout << std::endl << "Answer: month = february" << ", period = " << period << std::endl << std::endl;
		break;
	case 3:
		std::cout << std::endl << "Answer: month = march" << ", period = " << period << std::endl << std::endl;
		break;
	case 4:
		std::cout << std::endl << "Answer: month = april" << ", period = " << period << std::endl << std::endl;
		break;
	case 5:
		std::cout << std::endl << "Answer: month = may" << ", period = " << period << std::endl << std::endl;
		break;
	case 6:
		std::cout << std::endl << "Answer: month = june" << ", period = " << period << std::endl << std::endl;
		break;
	case 7:
		std::cout << std::endl << "Answer: month = july" << ", period = " << period << std::endl << std::endl;
		break;
	case 8:
		std::cout << std::endl << "Answer: month = august" << ", period = " << period << std::endl << std::endl;
		break;
	case 9:
		std::cout << std::endl << "Answer: month = september" << ", period = " << period << std::endl << std::endl;
		break;
	case 10:
		std::cout << std::endl << "Answer: month = october" << ", period = " << period << std::endl << std::endl;
		break;
	case 11:
		std::cout << std::endl << "Answer: month = november" << ", period = " << period << std::endl << std::endl;
		break;
	}
}
void time_of_year(int month) {
	std::string period; // ��������� ���������� 
	if ((month == 12) || (month == 1) || (month == 2)) { // ��������� ����� ����� ���� ������������
		period = "winter";
		name_of_the_month(month, period); // �������� �������, ����� ���������� ����� ���� � ������� ������������ �����
	}
	else if ((month == 3) || (month == 4) || (month == 5)) {
		period = "spring";
		name_of_the_month(month, period);
	}
	else if ((month == 6) || (month == 7) || (month == 8)) {
		period = "summer";
		name_of_the_month(month, period);
	}
	else {
		period = "autumn";
		name_of_the_month(month, period);
	}
}
void lucky_number(int number) {
	int a1 = number / 100000; // �������������� ���������� ������ ������ �����
	int a2 = (number % 100000) / 10000; // �������������� ���������� ������ ������ �����
	int a3 = (number % 10000) / 1000; // �������������� ���������� ������� ������ �����
	int a4 = (number % 1000) / 100; // �������������� ���������� ��������� ������ �����
	int a5 = (number % 100) / 10; // �������������� ���������� ����� ������ �����
	int a6 = number % 10; // �������������� ���������� ������ ������ �����
	if (a1 + a2 + a3 == a4 + a5 + a6) { // ��������� ����� �� ����� ������ ���� ���� ����� ������ ���� ����
		std::cout << std::endl << "Answer: your number is lucky" << std::endl << std::endl; // ������� �����
	}
	else {
		std::cout << std::endl << "Answer: your number is not lucky" << std::endl << std::endl; // ������� �����
	}
}
void declination(int a, int b, int number) {
	if (b == 1) { // ��������� ����� �� ������ ����� �������
		std::cout << std::endl << "Answer: " << number << " ������" << std::endl << std::endl; // ������� ��������������� �����
	}
	else if (a == 1) { // ��������� ����� �� ������ ����� �������
		std::cout << std::endl << "Answer: " << number << " �������" << std::endl << std::endl; // ������� ��������������� �����
	}
	else if ((a == 2) || (a == 3) || (a == 4)) { // ��������� ����� �� ������ ����� 2, 3, 4
		std::cout << std::endl << "Answer: " << number << " �������" << std::endl << std::endl; // ������� ��������������� �����
	}
	else {
		std::cout << std::endl << "Answer: " << number << " ������" << std::endl << std::endl; // ������� ��������������� �����
	}
}
void penny(int number) {
	if ((number >= 1) && (number <= 99)) { // ��������� ������ �� ��������� ����� � ��������
		int b = number / 10; // �������������� ���������� ������ ������ �����
		int a = number % 10; // �������������� ���������� ������ ������ �����
		declination(a, b, number); // �������� �������, ����� ���� ������������ �����
	}
	else {
		std::cout << std::endl << "Answer: your number is out of range" << std::endl << std::endl; // ��������, ��� ����� �� ������ � ��������
	}
}
void checking_for_a_polydrome(int number) {
	if ((number >= 1000) && (number <= 9999)) { // ���������, ������ �� ����� � ������ ��������
		int a1 = number / 1000; // �������������� ���������� ������ ������ �����
		int a2 = (number % 1000) / 100; // �������������� ���������� ������ ������ �����
		int a3 = (number % 100) / 10; // �������������� ���������� ������� ������ �����
		int a4 = number % 10; // �������������� ���������� ��������� ������ �����
		if ((a1 == a4) && (a2 == a3)) { // ��������� ����� �� ����� ����� ���������, � ����� �������
			std::cout << std::endl << "Answer: your number is polydrome" << std::endl << std::endl; // ������� ��������������� �����
		}
		else {
			std::cout << std::endl << "Answer: your number is not polydrome" << std::endl << std::endl; // ������� ��������������� �����
		}
	}
	else {
		std::cout << std::endl << "Answer: your number is out of range" << std::endl << std::endl; // ��������, ��� ����� �� ������ � ������ ��������
	}
}
void multiplication_comparison(int number_1, int number_2) {
	if ((number_1 >= 100) && (number_1 <= 999)) { // ���������, ��� ��������� ����� ������ � ������ ��������
		int a1 = number_1 / 100; // �������������� ���������� ������ ������ ����� 
		int a2 = (number_1 % 100) / 10; // �������������� ���������� ������ ������ �����
		int a3 = number_1 % 10; // �������������� ���������� ������ ������� �����
		if ((a1 * a2 * a3) > number_2) { // ���������, ��� ������������ ���� ����� ������ ������� �����
			std::cout << std::endl << "Answer 1: multiplication of digits of a three-digit number greater than the second number"<< std::endl; // ������� ��������������� �����
		}
		else if ((a1 * a2 * a3) == number_2) { // ���������, �� ����� �� ������������ ���� ����� ������� �����
			std::cout << std::endl << "Answer 1: multiplication of digits of a three-digit number is equal to the second number" << std::endl; // ������� ��������������� �����
		}
		else {
			std::cout << std::endl << "Answer 1: multiplication of digits of a three-digit number less than the second number" << std::endl; // ������� ��������������� �����
		}
	}
	else {
		std::cout << std::endl << "Answer 1: your number is out of range" << std::endl; // ��������, ��� ����� �� ������ � ������ ��������
	}
}
void multiplicity(int number_1) {
	if ((number_1 >= 100) && (number_1 <= 999)) { // ���������, ��� ��������� ����� ������ � ������ ��������
		int a1 = number_1 / 100; // �������������� ���������� ������ ������ ����� 
		int a2 = (number_1 % 100) / 10; // �������������� ���������� ������ ������ �����
		int a3 = number_1 % 10; // �������������� ���������� ������ ������� �����
		if (((a1 + a2 + a3) % 7) == 0) { // ��������� ������ �� ����� ���� ����� ����
			std::cout << std::endl << "Answer 2: the sum of digits of a three-digit number is a multiple of 7" << std::endl << std::endl; // ������� ��������������� �����
		}
		else {
			std::cout << std::endl << "Answer 2: the sum of digits of a three-digit number is not a multiple of 7" << std::endl << std::endl; // ������� ��������������� �����
		}
	}
	else {
		std::cout << std::endl << "Answer 2: your number is out of range" << std::endl << std::endl; // ��������, ��� ����� �� ������ � ������ ��������
	}
}
void comparion_of_sides_of_rectangles(float a, float b, float c, float d) { 
	(((a > c) && (b > d)) || ((a > d) && (b > c))) ? std::cout << std::endl << "Answer: possible" << std::endl << std::endl : std::cout << std::endl << "Answer: impossible" << std::endl << std::endl; // ���������, ����� �� ������� � ������ �������������� ����������� � ������, ����� �������
}


int main() {
	setlocale(LC_ALL, "RUS"); // ��������� ������������� �������� �����
	//Task 1
	std::cout << "#Task 1#" << std::endl;
	int b1; // ��������� ����������
	int b2; // ��������� ����������
	int h; // ��������� ����������
	std::cout << "Enter the first base of the trapezoid (integer): ";
	std::cin >> b1; // ������������ ������ ��������
	std::cout << std::endl << "Enter the second base of the trapezoid (integer): ";
	std::cin >> b2; // ������������ ������ ��������
	std::cout << std::endl << "Enter the height of the trapezoid (integer): ";
	std::cin >> h; // ������������ ������ ��������
	std::cout << std::endl << "Answer: " << trapezoid_area(b1, b2, h) << std::endl << std::endl; //������� ����� � �������� �������
	//Task 2
	std::cout << "#Task 2#" << std::endl;
	int r; // ��������� ����������
	std::cout << "Enter the radius of the circle (integer): ";
	std::cin >> r; // ������������ ������ ��������
	std::cout << std::endl << "Answer: " << "area of the circle = " << area_of_the_circle(r) << ", circumference length = " << circumference_length(r) << std::endl << std::endl; //������� ����� � �������� �������
	//Task 3
	std::cout << "#Task 3#" << std::endl;
	int k1; // ��������� ����������
	int k2; // ��������� ����������
	std::cout << "Enter the first cathet of the triangle (integer): ";
	std::cin >> k1; // ������������ ������ ��������
	std::cout << std::endl << "Enter the second cathet of the triangle (integer): ";
	std::cin >> k2; // ������������ ������ ��������
	std::cout << std::endl << "Answer: " << "the area of a right triangle = " << the_area_of_a_right_triangle(k1, k2) << ", hypotenuse = " << hypotenuse(k1, k2) << std::endl << std::endl; //������� ����� � �������� �������
	//Task 4
	std::cout << "#Task 4#" << std::endl;
	int a; // ��������� ����������
	std::cout << "Enter a decimal four digit number: ";
	std::cin >> a; // ������������ ������ ��������
	sum_of_digits(a); //�������� �������
	//Task 5
	std::cout << "#Task 5#" << std::endl;
	int x; // ��������� ����������
	int y; // ��������� ����������
	std::cout << "Enter x (integer): ";
	std::cin >> x; // ������������ ������ ��������
	std::cout << std::endl << "Enter y (integer): ";
	std::cin >> y; // ������������ ������ ��������
	std::cout << std::endl << "A(" << x << "," << y << ")" << std::endl;
	cartesian_to_polar(x, y); //�������� �������
	//Task 6 ????
	std::cout << "#Task 6#" << std::endl;
	int p; // ��������� ����������
	int q; // ��������� ����������
	std::cout << "Enter p (integer): ";
	std::cin >> p; // ������������ ������ ��������
	std::cout << std::endl << "Enter q (integer): ";
	std::cin >> q; // ������������ ������ ��������
	std::cout << std::endl << "A(" << p << "," << q << ")" << std::endl;
	polar_to_cartesian(p, q); //�������� �������
	//Task 7
	std::cout << "#Task 7#" << std::endl;
	a = 0;
	int b; // ��������� ����������
	int c; // ��������� ����������
	std::cout << "Enter a (integer): ";
	std::cin >> a; // ������������ ������ ��������
	std::cout << std::endl << "Enter b (integer): ";
	std::cin >> b; // ������������ ������ ��������
	std::cout << std::endl << "Enter c (integer): ";
	std::cin >> c; // ������������ ������ ��������
	roots_of_the_quadratic_equation(a, b, c); //�������� �������
	//Task 8
	std::cout << "#Task 8#" << std::endl;
	a = 0; // ����������� ������������ ���������� �������� 0
	b = 0; // ����������� ������������ ���������� �������� 0
	c = 0; // ����������� ������������ ���������� �������� 0
	std::cout << "Enter the first side of the triangle (integer): ";
	std::cin >> a; // ������������ ������ ��������
	std::cout << std::endl << "Enter the second side of the triangle (integer): ";
	std::cin >> b; // ������������ ������ ��������
	std::cout << std::endl << "Enter the third side of the triangle(integer): ";
	std::cin >> c; // ������������ ������ ��������
	triangle_medians(a, b, c); //�������� �������
	//Task 9
	std::cout << "#Task 9#" << std::endl;
	int k; // ��������� ����������
	std::cout << "Enter the second of the day that is coming (integer): ";
	std::cin >> k; // ������������ ������ ��������
	hours_and_minutes(k); //�������� �������
	//Task 10
	std::cout << "#Task 10#" << std::endl;
	a = 0; // ����������� ������������ ���������� �������� 0
	b = 0; // ����������� ������������ ���������� �������� 0
	c = 0; // ����������� ������������ ���������� �������� 0
	std::cout << "Enter the first side of the triangle (integer): ";
	std::cin >> a; // ������������ ������ ��������
	std::cout << std::endl << "Enter the second side of the triangle (integer): ";
	std::cin >> b; // ������������ ������ ��������
	std::cout << std::endl << "Enter the third side of the triangle(integer): ";
	std::cin >> c; // ������������ ������ ��������
	checking_for_isosceles(a, b, c); //�������� �������
	//Task 11
	std::cout << "#Task 11#" << std::endl;
	int purchase; // ��������� ����������
	std::cout << "Enter the purchase amount (integer): ";
	std::cin >> purchase;  // ������������ ������ ��������
	std::cout << std::endl << "Answer: " << calculation_of_the_discount(purchase) << std::endl << std::endl; // ������� ����� � �������� �������
	//Task 12
	std::cout << "#Task 12#" << std::endl;
	int height; // ��������� ����������
	float weight; // ��������� ����������
	std::cout << "Enter a height (integer): ";
	std::cin >> height; // ������������ ������ ��������
	std::cout << std::endl << "Enter a weight (float, maximum of two decimal places): ";
	std::cin >> weight; // ������������ ������ ��������
	lose_weight_or_gain_weight(height, weight); //�������� �������
	//Task 13
	std::cout << "#Task 13#" << std::endl;
	std::srand(std::time(nullptr)); // ������������ ������� ����� � �������� ���������� �������� ��� ���������� ��������� �����
	std::cout << "Your two numbers: ";
	int a1 = 10; // �������������� ���������� ��������� 10
	while (a1 > 9) { // ���� ���������� ������ 9 ���������
		a1 = 1 + std::rand() / ((RAND_MAX + 1u) / 9); // ���������� ��������� ����� � ��������� �� 1 �� 9
	}
	std::cout << a1 << " "; // ������� ��������������� �����
	int a2 = 10; // �������������� ���������� ��������� 10
	while (a2 > 9) { // ���� ���������� ������ 9 ���������
		a2 = 1 + std::rand() / ((RAND_MAX + 1u) / 9); // ���������� ��������� ����� � ��������� �� 1 �� 9
	}
	std::cout << a2 << std::endl; // ������� ��������������� �����
	int comp; // ��������� ����������
	std::cout << "Enter the product of these numbers (integer): ";
	std::cin >> comp; // ������������ ������ ��������
	composition(a1 , a2, comp); //�������� �������
	//Task 14
	std::cout << "#Task 14#" << std::endl;
	int day; // ��������� ����������
	int time; // ��������� ����������
	std::cout << "Enter the day of the week (1 - 7): ";
	std::cin >> day; // ������������ ������ ��������
	std::cout << std::endl << "Enter the duration of negotiation in minutes (integer): ";
	std::cin >> time; // ������������ ������ ��������
	the_price_of_negotiation(day, time); //�������� �������
	//Task 15
	std::cout << "#Task 15#" << std::endl;
	int month; // ��������� ����������
	std::cout << "Enter the month number (integer): ";
	std::cin >> month; // ������������ ������ ��������
	time_of_year(month); //�������� �������
	//Task 16
	std::cout << "#Task 16#" << std::endl;
	int number; // ��������� ����������
	std::cout << "Enter a six-digit number (integer): ";
	std::cin >> number; // ������������ ������ ��������
	lucky_number(number); //�������� �������
	//Task 17
	std::cout << "#Task 17#" << std::endl;
	number = 0; // ����������� ������������ ���������� �������� 0
	std::cout << "Enter a number from 1 to 99 (integer): ";
	std::cin >> number; // ������������ ������ ��������
	penny(number); //�������� �������
	//Task 18
	std::cout << "#Task 18#" << std::endl;
	number = 0; // ����������� ������������ ���������� �������� 0
	std::cout << "Enter a four-digit number (integer): ";
	std::cin >> number; // ������������ ������ ��������
	checking_for_a_polydrome(number); //�������� �������
	//Task 19
	std::cout << "#Task 19#" << std::endl;
	int number_1; // ��������� ����������
	int number_2; // ��������� ����������
	std::cout << "Enter a three-digit number (integer): ";
	std::cin >> number_1; // ������������ ������ ��������
	std::cout << std::endl << "Enter any number (integer): ";
	std::cin >> number_2; // ������������ ������ ��������
	multiplication_comparison(number_1, number_2); //�������� �������
	multiplicity(number_1); //�������� �������
	//Task 20
	std::cout << "#Task 20#" << std::endl;
	static_cast<float>(a = 0); // �������� ��� ������������ ���������� � ����������� �� �������� 0
	static_cast<float>(b = 0); // �������� ��� ������������ ���������� � ����������� �� �������� 0
	static_cast<float>(c = 0); // �������� ��� ������������ ���������� � ����������� �� �������� 0
	float d; // ��������� ����������
	std::cout << "Enter a (float): ";
	std::cin >> a; // ������������ ������ ��������
	std::cout << "Enter b (float): ";
	std::cin >> b; // ������������ ������ ��������
	std::cout << "Enter c (float): ";
	std::cin >> c; // ������������ ������ ��������
	std::cout << "Enter d (float): ";
	std::cin >> d; // ������������ ������ ��������
	comparion_of_sides_of_rectangles(a, b, c, d); //�������� �������
	//Task 21
	std::cout << "#Task 21#" << std::endl;
	std::cout << "bool:" << "\t\t" << sizeof(bool) << " bytes" << std::endl; // ������� �� ����� � ���� ������� �������� ������� ���� ������
	std::cout << "char:" << "\t\t" << sizeof(char) << " bytes" << std::endl;
	std::cout << "wchar_t:" << "\t" << sizeof(wchar_t) << " bytes" << std::endl;
	std::cout << "char16_t:" << "\t" << sizeof(char16_t) << " bytes" << std::endl;
	std::cout << "char32_t:" << "\t" << sizeof(char32_t) << " bytes" << std::endl;
	std::cout << "short:" << "\t\t" << sizeof(short) << " bytes" << std::endl;
	std::cout << "int:" << "\t\t" << sizeof(int) << " bytes" << std::endl;
	std::cout << "long:" << "\t\t" << sizeof(long) << " bytes" << std::endl;
	std::cout << "long long:" << "\t" << sizeof(long long) << " bytes" << std::endl;
	std::cout << "float:" << "\t\t" << sizeof(float) << " bytes" << std::endl;
	std::cout << "double:" << "\t\t" << sizeof(double) << " bytes" << std::endl;
	std::cout << "long double:" << "\t" << sizeof(long double) << " bytes" << std::endl;
	return 0;
}