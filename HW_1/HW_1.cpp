#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>



int trapezoid_area(int b1, int b2, int h) { 
	int S; // объявляем переменную
	S = round((b1 + b2) * h / float(2)); //присваиваем переменной S округленное частное
	return S; // возвращаем S
}
int circumference_length(int r) { 
	float C; // объявляем переменную
	C = 2 * M_PI * r; // присваиваем переменной С произведение (формула длины окружности)
	return round(C); // возвращаем округленную С
}
int area_of_the_circle(int r) { 
	float S; // объявляем переменную
	S =  M_PI * r * r; // присваиваем переменной S произведение (формула площади круга)
	return round(S); // возвращаем округленную S
}
int the_area_of_a_right_triangle(int k1, int k2) {
	float S; // объявляем переменную
	S = k1 * k2 / float(2); // присваиваем переменной S частное (формула площади прямоугольного треугольника)
	return round(S); // возвращаем округленную S
}
int hypotenuse(int k1, int k2) { 
	float c; // объявляем переменную
	c = sqrt((k1 * k1) + (k2 * k2)); // присваиваем переменной с значение (формула нахождения гипотенузы по двум катетам)
	return round(c); // возвращаем округленную c
}
void sum_of_digits(int a) { 
	int sum = 0; // инициализируюм переменную значением 0
	if (a / 10000 == 0) { // проверяем, что введенное число не больше четырехзначного
		if (a / 1000 != 0) { // проверяем, что введенное число не меньше четырехзначного
			sum += (a / 1000); // к сумме прибавляем первую цифру
			a = a % 1000; // убираем первую цифру из числа
			sum += (a / 100); // к сумме прибавляем вторую цифру
			a = a % 100; // убираем вторую цифру из числа
			sum += (a / 10); // к сумме прибавляем третью цифру
			a = a % 10; // убираем третью цифру из числа
			sum += a; // к сумме прибавляем последнюю цифру
			std::cout << std::endl << "Answer: " << sum << std::endl << std::endl; //выводим ответ
		}
		else {
			std::cout << std::endl << "Answer: " << "the number is less than four digits" << std::endl << std::endl; // сообщаем, что введенное число меньше четырехзначного
		}
	}
	else{
		std::cout << std::endl << "Answer: " << "the number is more than four digits" << std::endl << std::endl; // сообщаем, что введенное число больше четырехзначного
	}
}
void cartesian_to_polar(int x, int y) {
	float p; // объявляем переменную p
	float q; // объявляем переменную  q
	p = sqrt(x * x + y * y); //  присваиваем переменной p значение ( по формуле )
	q = (atan(y / float(x)))*180/M_PI; //  присваиваем переменной q значение ( по формуле )
	std::cout << std::endl << "Answer: " << "A(" << round(p) << "," << round(q) << ")" << std::endl << std::endl; // выводим ответ с округленными значениями
}
void polar_to_cartesian(int p, int q) {
	float x; // объявляем переменную x
	float y; // объявляем переменную y
	x = p * cos(q); //  присваиваем переменной x значение ( по формуле )
	y = p * sin(q); //  присваиваем переменной y значение ( по формуле )
	std::cout << std::endl << "Answer: " << "A(" << round(x) << "," << round(y) << ")" << std::endl << std::endl; // выводим ответ с округленными значениями
}
void roots_of_the_quadratic_equation(int a, int b, int c) {
	if ((b > 0) && (c > 0)) { // проверяем введенные числа на положительность и отрицательность, чтобы красиво вывести пользователю квадратное уравнение
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
	int D; // объявляем переменную D
	float x1; // объявляем переменную x1 вещественного типа, так как корни могут быть не целыми числами
	float x2; // объявляем переменную x2 вещественного типа, так как корни могут быть не целыми числами
	D = b * b - 4 * a * c; // присваиваем переменной D значение по формуле дискриминанта
	if (D > 0) { // проверяем, положительный, отрицательный или равный нулю вышел дискриминант, так как формулы расчета при этом различаются
		x1 = (b * (-1) + sqrt(D)) / (2 * a);
		x2 = (b * (-1) - sqrt(D)) / (2 * a);
		std::cout << std::endl << "Answer: x1 = " << round(x1) << ", x2 = " << round(x2) << std::endl << std::endl; // выводим результат, если дискриминант положительные (округленные два корня)
	}
	else if (D == 0) {
		x1 = b * (-1) / (2 * static_cast<float>(a)); // здесь мы меняем у переменной а тип
		std::cout << std::endl << "Answer: x1 = " << round(x1) << std::endl << std::endl; // выводим результат, если дискриминант равен 0 (округленный один корень)
	}
	else {
		std::cout << std::endl << "Answer: no roots" << std::endl << std::endl; // выводим результат, если дискриминант отрицательный (нет корней)
	}
}
void triangle_medians(int a, int b, int c) {
	if ((a + b > c) && (a + c > b) && (c + b > a)) { // проверяем, могут ли введенные числа быть сторонами треугольника
		float M1 = sqrt((2 * a * a + 2 * b * b - c * c) / 4); // инициализируем переменные М1, М2, М3 через формулу нахождения медианы
		float M2 = sqrt((2 * c * c + 2 * b * b - a * a) / 4);
		float M3 = sqrt((2 * a * a + 2 * c * c - b * b) / 4);
		M1 = round(M1); // округляем получившиеся значения
		M2 = round(M2);
		M3 = round(M3);
		if ((M1 + M2 > M3) && (M1 + M3 > M2) && (M2 + M3 > M1)) { // проверяем, могут ли получившиеся медианы бвть сторонами треугольника
			float m1 = sqrt((2 * M1 * M1 + 2 * M2 * M2 - M3 * M3) / 4); // инициализируем переменные m1, m2, m3 через формулу нахождения медианы
			float m2 = sqrt((2 * M1 * M1 + 2 * M3 * M3 - M2 * M2) / 4);
			float m3 = sqrt((2 * M2 * M2 + 2 * M3 * M3 - M1 * M1) / 4);
			std::cout << std::endl << "Answer: " << "median 1 = " << round(m1) << ", median 2 = " << round(m2) << ", median 3 = " << round(m3) << std::endl << std::endl; // выводим результат округленных медиан
		}
		else {
			std::cout << std::endl << "Answer: the medians of this triangle cannot be the sides of a triangle" << std::endl << std::endl; // сообщаем, что вычисленные медианы не могут быть сторонами треугольника
		}
	}
	else {
		std::cout << std::endl << "Answer: there is no such triangle" << std::endl << std::endl; // сообщаем, что введенные числа не богут быть сторонами треугольника
	}
}
void hours_and_minutes(int k) {
	int hours = k / 3600; // инициализируем переменную значением (количество часов)
	int minets = (k - (hours * 3600)) / 60; // инициализируем переменную значением (количество минут)
	std::cout << std::endl << "Answer: " << hours << " hours and " << minets << " minets" << std::endl << std::endl; // выводим ответ
}
void checking_for_isosceles(int a, int b, int c) {
	if ((a == b) && (a == c) && (c == b)) { // проверяем не является ли треугольник равносторонним
		std::cout << std::endl << "Answer: the triangle is not isosceles" << std::endl << std::endl;
	}
	else if ((a == b) || (a == c) || (b == c)) { // проверяем является ли треугольник равнобедренным
			std::cout << std::endl << "Answer: the triangle is isosceles" << std::endl << std::endl; // выводим ответ, если является
	}
	else { 
		std::cout << std::endl << "Answer: the triangle is not isosceles" << std::endl << std::endl; // выводим ответ, если не является
	}
}
int calculation_of_the_discount(int purchase) {
	if (purchase > 1000) { // проверяем, привышает ли сумма покупки 1000 
		float discount = static_cast<float>(purchase) * 0.1; // инициализируем переменную значением (вычисляем скидку)
		int result = round(purchase - discount); // инициализируем переменную значением (вычисляем итоговую округленную сумму)
		return result; // возвращаем итоговую сумму
	}
	else {
		return purchase; // возвращаем изначальную сумму покупки, если сумма меньше 1000
	}
}
void lose_weight_or_gain_weight(int height, float weight) {
	int ideal_weight = height - 100; // инициализируем переменную значением (идеальный вес)
	if (ideal_weight == weight) { // проверяем вес пользователя с идеальным весом
		std::cout << std::endl << "Answer: you have the ideal weight" << std::endl << std::endl; // сообщаем пользователю, что у него идеальный вес
	}
	else if (ideal_weight >= weight){ 
		std::cout << std::endl << "Answer: you need to gain weight" << std::endl << std::endl;  // сообщаем пользователю. что ему нужно набрать вес
	}
	else {
		std::cout << std::endl << "Answer: you need to lose weight" << std::endl << std::endl; // сообщаем пользователю, что ему нужно похудеть
	}
}
void composition(int a1, int a2, int comp) {
	if (comp == a1 * a2) { // проверяем равно ли введенное пользователю значение правильному ответу
		std::cout << std::endl << "Answer: your answer is correct" << std::endl << std::endl; // сообщаем, что ответ пользователя верный
	}
	else {
		std::cout << std::endl << "Answer: your answer is not correct" << std::endl << std::endl; // сообщаем, что пользователь ошибся
	}
}
void the_price_of_negotiation(int day, int time) { 
	int min_price = 20; // инициализируем переменную значением (вводим цену одной минуты)
	int result; // объявляем переменную
	std::cout << std::endl << "A minute costs 20 rubles" << std::endl; // сооющаем пользователю стоимость одной минуты
	if ((day == 6) || (day == 7)) { // проверяем, ввел ли пользователь субботу или воскресенье
		result = (time * min_price) - (time * min_price * 0.2); // если ввел, то присваиваем переменной result цену с учетом скидки
		std::cout << std::endl << "Answer: the prise of your negotiation = " << result << " rubles" << std::endl << std::endl; // сообщаем пользователю цену
	}
	else {
		result = (time * min_price); // если нет, то присваиваем переменной result цену без скидки
		std::cout << std::endl << "Answer: the prise of your negotiation = " << result << " rubles" << std::endl << std::endl; // сообщаем пользователю цену
	}
}
void name_of_the_month(int month, std::string period) {
	switch (month) { // устанавливаем какое время года соответствуем месяцу
	case 12:
		std::cout << std::endl << "Answer: month = december" << ", period = " << period << std::endl << std::endl; // выводим и месяц и время года пользователю
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
	std::string period; // объявляем переменную 
	if ((month == 12) || (month == 1) || (month == 2)) { // проверяем какой месяц веел пользователь
		period = "winter";
		name_of_the_month(month, period); // вызываем функцию, чтобы определить время года и вывести пользователю ответ
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
	int a1 = number / 100000; // инициализируем переменную первой цифрой числа
	int a2 = (number % 100000) / 10000; // инициализируем переменную второй цифрой числа
	int a3 = (number % 10000) / 1000; // инициализируем переменную третьей цифрой числа
	int a4 = (number % 1000) / 100; // инициализируем переменную четвертой цифрой числа
	int a5 = (number % 100) / 10; // инициализируем переменную пятой цифрой числа
	int a6 = number % 10; // инициализируем переменную шестой цифрой числа
	if (a1 + a2 + a3 == a4 + a5 + a6) { // проверяем равна ли сумма первых трех цифр сумме вторых трех цифр
		std::cout << std::endl << "Answer: your number is lucky" << std::endl << std::endl; // выводим ответ
	}
	else {
		std::cout << std::endl << "Answer: your number is not lucky" << std::endl << std::endl; // выводим ответ
	}
}
void declination(int a, int b, int number) {
	if (b == 1) { // проверяем равна ли первая цифра единице
		std::cout << std::endl << "Answer: " << number << " копеек" << std::endl << std::endl; // выводим соответствующий ответ
	}
	else if (a == 1) { // проверяем равна ли вторая цифра единице
		std::cout << std::endl << "Answer: " << number << " копейка" << std::endl << std::endl; // выводим соответствующий ответ
	}
	else if ((a == 2) || (a == 3) || (a == 4)) { // проверяем равна ли вторая цифра 2, 3, 4
		std::cout << std::endl << "Answer: " << number << " копейки" << std::endl << std::endl; // выводим соответствующий ответ
	}
	else {
		std::cout << std::endl << "Answer: " << number << " копеек" << std::endl << std::endl; // выводим соответствующий ответ
	}
}
void penny(int number) {
	if ((number >= 1) && (number <= 99)) { // проверяем входит ли введенное число в диапазон
		int b = number / 10; // инициализируем переменную первой цифрой числа
		int a = number % 10; // инициализируем переменную второй цифрой числа
		declination(a, b, number); // вызываем функцию, чтобы дать пользователю ответ
	}
	else {
		std::cout << std::endl << "Answer: your number is out of range" << std::endl << std::endl; // сообщаем, что число не входит в диапазон
	}
}
void checking_for_a_polydrome(int number) {
	if ((number >= 1000) && (number <= 9999)) { // проверяем, входит ли число в нужный диапазон
		int a1 = number / 1000; // инициализируем переменную первой цифрой числа
		int a2 = (number % 1000) / 100; // инициализируем переменную второй цифрой числа
		int a3 = (number % 100) / 10; // инициализируем переменную третьей цифрой числа
		int a4 = number % 10; // инициализируем переменную четвертой цифрой числа
		if ((a1 == a4) && (a2 == a3)) { // проверяем равна ли перва цифра четвертой, а торая третьей
			std::cout << std::endl << "Answer: your number is polydrome" << std::endl << std::endl; // выводим соответствующий ответ
		}
		else {
			std::cout << std::endl << "Answer: your number is not polydrome" << std::endl << std::endl; // выводим соответствующий ответ
		}
	}
	else {
		std::cout << std::endl << "Answer: your number is out of range" << std::endl << std::endl; // сообщаем, что число не входит в нужный диапазон
	}
}
void multiplication_comparison(int number_1, int number_2) {
	if ((number_1 >= 100) && (number_1 <= 999)) { // проверяем, что введенное число входит в нужный диапазон
		int a1 = number_1 / 100; // инициализируем переменную первой цифрой числа 
		int a2 = (number_1 % 100) / 10; // инициализируем переменную второй цифрой числа
		int a3 = number_1 % 10; // инициализируем переменную первой третьей числа
		if ((a1 * a2 * a3) > number_2) { // проверяем, что произведение цифр числа больше второго числа
			std::cout << std::endl << "Answer 1: multiplication of digits of a three-digit number greater than the second number"<< std::endl; // выводим соответствующий ответ
		}
		else if ((a1 * a2 * a3) == number_2) { // проверяем, не равно ли произведение цифр числа второму числу
			std::cout << std::endl << "Answer 1: multiplication of digits of a three-digit number is equal to the second number" << std::endl; // выводим соответствующий ответ
		}
		else {
			std::cout << std::endl << "Answer 1: multiplication of digits of a three-digit number less than the second number" << std::endl; // выводим соответствующий ответ
		}
	}
	else {
		std::cout << std::endl << "Answer 1: your number is out of range" << std::endl; // сообщаем, что число не входит в нужный диапазон
	}
}
void multiplicity(int number_1) {
	if ((number_1 >= 100) && (number_1 <= 999)) { // проверяем, что введенное число входит в нужный диапазон
		int a1 = number_1 / 100; // инициализируем переменную первой цифрой числа 
		int a2 = (number_1 % 100) / 10; // инициализируем переменную второй цифрой числа
		int a3 = number_1 % 10; // инициализируем переменную первой третьей числа
		if (((a1 + a2 + a3) % 7) == 0) { // проверяем кратна ли сумма цифр числа семи
			std::cout << std::endl << "Answer 2: the sum of digits of a three-digit number is a multiple of 7" << std::endl << std::endl; // выводим соответствующий ответ
		}
		else {
			std::cout << std::endl << "Answer 2: the sum of digits of a three-digit number is not a multiple of 7" << std::endl << std::endl; // выводим соответствующий ответ
		}
	}
	else {
		std::cout << std::endl << "Answer 2: your number is out of range" << std::endl << std::endl; // сообщаем, что число не входит в нужный диапазон
	}
}
void comparion_of_sides_of_rectangles(float a, float b, float c, float d) { 
	(((a > c) && (b > d)) || ((a > d) && (b > c))) ? std::cout << std::endl << "Answer: possible" << std::endl << std::endl : std::cout << std::endl << "Answer: impossible" << std::endl << std::endl; // проверяем, можно ли вписать в второй пряымоугольник параллельно в первый, через стороны
}


int main() {
	setlocale(LC_ALL, "RUS"); // добавляем распознавание русского языка
	//Task 1
	std::cout << "#Task 1#" << std::endl;
	int b1; // объявляем переменную
	int b2; // объявляем переменную
	int h; // объявляем переменную
	std::cout << "Enter the first base of the trapezoid (integer): ";
	std::cin >> b1; // пользователь вводит значение
	std::cout << std::endl << "Enter the second base of the trapezoid (integer): ";
	std::cin >> b2; // пользователь вводит значение
	std::cout << std::endl << "Enter the height of the trapezoid (integer): ";
	std::cin >> h; // пользователь вводит значение
	std::cout << std::endl << "Answer: " << trapezoid_area(b1, b2, h) << std::endl << std::endl; //выводим ответ и вызываем функцию
	//Task 2
	std::cout << "#Task 2#" << std::endl;
	int r; // объявляем переменную
	std::cout << "Enter the radius of the circle (integer): ";
	std::cin >> r; // пользователь вводит значение
	std::cout << std::endl << "Answer: " << "area of the circle = " << area_of_the_circle(r) << ", circumference length = " << circumference_length(r) << std::endl << std::endl; //выводим ответ и вызываем функции
	//Task 3
	std::cout << "#Task 3#" << std::endl;
	int k1; // объявляем переменную
	int k2; // объявляем переменную
	std::cout << "Enter the first cathet of the triangle (integer): ";
	std::cin >> k1; // пользователь вводит значение
	std::cout << std::endl << "Enter the second cathet of the triangle (integer): ";
	std::cin >> k2; // пользователь вводит значение
	std::cout << std::endl << "Answer: " << "the area of a right triangle = " << the_area_of_a_right_triangle(k1, k2) << ", hypotenuse = " << hypotenuse(k1, k2) << std::endl << std::endl; //выводим ответ и вызываем функции
	//Task 4
	std::cout << "#Task 4#" << std::endl;
	int a; // объявляем переменную
	std::cout << "Enter a decimal four digit number: ";
	std::cin >> a; // пользователь вводит значение
	sum_of_digits(a); //вызываем функцию
	//Task 5
	std::cout << "#Task 5#" << std::endl;
	int x; // объявляем переменную
	int y; // объявляем переменную
	std::cout << "Enter x (integer): ";
	std::cin >> x; // пользователь вводит значение
	std::cout << std::endl << "Enter y (integer): ";
	std::cin >> y; // пользователь вводит значение
	std::cout << std::endl << "A(" << x << "," << y << ")" << std::endl;
	cartesian_to_polar(x, y); //вызываем функцию
	//Task 6 ????
	std::cout << "#Task 6#" << std::endl;
	int p; // объявляем переменную
	int q; // объявляем переменную
	std::cout << "Enter p (integer): ";
	std::cin >> p; // пользователь вводит значение
	std::cout << std::endl << "Enter q (integer): ";
	std::cin >> q; // пользователь вводит значение
	std::cout << std::endl << "A(" << p << "," << q << ")" << std::endl;
	polar_to_cartesian(p, q); //вызываем функцию
	//Task 7
	std::cout << "#Task 7#" << std::endl;
	a = 0;
	int b; // объявляем переменную
	int c; // объявляем переменную
	std::cout << "Enter a (integer): ";
	std::cin >> a; // пользователь вводит значение
	std::cout << std::endl << "Enter b (integer): ";
	std::cin >> b; // пользователь вводит значение
	std::cout << std::endl << "Enter c (integer): ";
	std::cin >> c; // пользователь вводит значение
	roots_of_the_quadratic_equation(a, b, c); //вызываем функцию
	//Task 8
	std::cout << "#Task 8#" << std::endl;
	a = 0; // присваиваем существующей переменной значение 0
	b = 0; // присваиваем существующей переменной значение 0
	c = 0; // присваиваем существующей переменной значение 0
	std::cout << "Enter the first side of the triangle (integer): ";
	std::cin >> a; // пользователь вводит значение
	std::cout << std::endl << "Enter the second side of the triangle (integer): ";
	std::cin >> b; // пользователь вводит значение
	std::cout << std::endl << "Enter the third side of the triangle(integer): ";
	std::cin >> c; // пользователь вводит значение
	triangle_medians(a, b, c); //вызываем функцию
	//Task 9
	std::cout << "#Task 9#" << std::endl;
	int k; // объявляем переменную
	std::cout << "Enter the second of the day that is coming (integer): ";
	std::cin >> k; // пользователь вводит значение
	hours_and_minutes(k); //вызываем функцию
	//Task 10
	std::cout << "#Task 10#" << std::endl;
	a = 0; // присваиваем существующей переменной значение 0
	b = 0; // присваиваем существующей переменной значение 0
	c = 0; // присваиваем существующей переменной значение 0
	std::cout << "Enter the first side of the triangle (integer): ";
	std::cin >> a; // пользователь вводит значение
	std::cout << std::endl << "Enter the second side of the triangle (integer): ";
	std::cin >> b; // пользователь вводит значение
	std::cout << std::endl << "Enter the third side of the triangle(integer): ";
	std::cin >> c; // пользователь вводит значение
	checking_for_isosceles(a, b, c); //вызываем функцию
	//Task 11
	std::cout << "#Task 11#" << std::endl;
	int purchase; // объявляем переменную
	std::cout << "Enter the purchase amount (integer): ";
	std::cin >> purchase;  // пользователь вводит значение
	std::cout << std::endl << "Answer: " << calculation_of_the_discount(purchase) << std::endl << std::endl; // выводим ответ и вызываем функцию
	//Task 12
	std::cout << "#Task 12#" << std::endl;
	int height; // объявляем переменную
	float weight; // объявляем переменную
	std::cout << "Enter a height (integer): ";
	std::cin >> height; // пользователь вводит значение
	std::cout << std::endl << "Enter a weight (float, maximum of two decimal places): ";
	std::cin >> weight; // пользователь вводит значение
	lose_weight_or_gain_weight(height, weight); //вызываем функцию
	//Task 13
	std::cout << "#Task 13#" << std::endl;
	std::srand(std::time(nullptr)); // использовать текущее время в качестве начального значения для генератора случайных чисел
	std::cout << "Your two numbers: ";
	int a1 = 10; // инициализируем переменную значением 10
	while (a1 > 9) { // пока переменная больше 9 выполняем
		a1 = 1 + std::rand() / ((RAND_MAX + 1u) / 9); // генерируем рандомное число в интервале от 1 до 9
	}
	std::cout << a1 << " "; // выводим сгенерированное число
	int a2 = 10; // инициализируем переменную значением 10
	while (a2 > 9) { // пока переменная больше 9 выполняем
		a2 = 1 + std::rand() / ((RAND_MAX + 1u) / 9); // генерируем рандомное число в интервале от 1 до 9
	}
	std::cout << a2 << std::endl; // выводим сгенерированное число
	int comp; // объявляем переменную
	std::cout << "Enter the product of these numbers (integer): ";
	std::cin >> comp; // пользователь вводит значение
	composition(a1 , a2, comp); //вызываем функцию
	//Task 14
	std::cout << "#Task 14#" << std::endl;
	int day; // объявляем переменную
	int time; // объявляем переменную
	std::cout << "Enter the day of the week (1 - 7): ";
	std::cin >> day; // пользователь вводит значение
	std::cout << std::endl << "Enter the duration of negotiation in minutes (integer): ";
	std::cin >> time; // пользователь вводит значение
	the_price_of_negotiation(day, time); //вызываем функцию
	//Task 15
	std::cout << "#Task 15#" << std::endl;
	int month; // объявляем переменную
	std::cout << "Enter the month number (integer): ";
	std::cin >> month; // пользователь вводит значение
	time_of_year(month); //вызываем функцию
	//Task 16
	std::cout << "#Task 16#" << std::endl;
	int number; // объявляем переменную
	std::cout << "Enter a six-digit number (integer): ";
	std::cin >> number; // пользователь вводит значение
	lucky_number(number); //вызываем функцию
	//Task 17
	std::cout << "#Task 17#" << std::endl;
	number = 0; // присваиваем существующей переменной значение 0
	std::cout << "Enter a number from 1 to 99 (integer): ";
	std::cin >> number; // пользователь вводит значение
	penny(number); //вызываем функцию
	//Task 18
	std::cout << "#Task 18#" << std::endl;
	number = 0; // присваиваем существующей переменной значение 0
	std::cout << "Enter a four-digit number (integer): ";
	std::cin >> number; // пользователь вводит значение
	checking_for_a_polydrome(number); //вызываем функцию
	//Task 19
	std::cout << "#Task 19#" << std::endl;
	int number_1; // объявляем переменную
	int number_2; // объявляем переменную
	std::cout << "Enter a three-digit number (integer): ";
	std::cin >> number_1; // пользователь вводит значение
	std::cout << std::endl << "Enter any number (integer): ";
	std::cin >> number_2; // пользователь вводит значение
	multiplication_comparison(number_1, number_2); //вызываем функцию
	multiplicity(number_1); //вызываем функцию
	//Task 20
	std::cout << "#Task 20#" << std::endl;
	static_cast<float>(a = 0); // изменяем тип существующей переменной и присваиваем ей значение 0
	static_cast<float>(b = 0); // изменяем тип существующей переменной и присваиваем ей значение 0
	static_cast<float>(c = 0); // изменяем тип существующей переменной и присваиваем ей значение 0
	float d; // объявляем переменную
	std::cout << "Enter a (float): ";
	std::cin >> a; // пользователь вводит значение
	std::cout << "Enter b (float): ";
	std::cin >> b; // пользователь вводит значение
	std::cout << "Enter c (float): ";
	std::cin >> c; // пользователь вводит значение
	std::cout << "Enter d (float): ";
	std::cin >> d; // пользователь вводит значение
	comparion_of_sides_of_rectangles(a, b, c, d); //вызываем функцию
	//Task 21
	std::cout << "#Task 21#" << std::endl;
	std::cout << "bool:" << "\t\t" << sizeof(bool) << " bytes" << std::endl; // выводим на экран в виде таблицы значение нужного типа данных
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