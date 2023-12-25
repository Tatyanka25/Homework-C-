#include <iostream>
#include <ctime>
#include <cstdio>

double* array_memory(int length) { // функция выделения памяти для массива
	double* array_ptr = new double[length]; // используя оператор new выделяем массив 
	return array_ptr;
}

void components(double* array_ptr, int length) { // функция заполнения массива
	std::cout << "Enter " << length << " components of array: " << std::endl << std::endl;
	for (int i = 0; i < length; ++i) { // заполняем каждый элемент массива
		std::cin >> array_ptr[i]; 
	};
	std::cout << std::endl;
}

void to_see_array_ptr(double* array_ptr, int length) { // функция выводит массив на экран
	for (int i = 0; i < length; ++i) {
		std::cout << "Element [" << i << "] = " << array_ptr[i] << std::endl;
	};
}

void delete_array_ptr(double* array_ptr) { // функция очищает память 
	delete[] array_ptr;
	array_ptr = 0;
}

void exchange(int* array_ptr) { // функция меняет местами элементы
	for (int i = 0; i < 12; i+=2) { // каждые два элемента меняем местами
		int tmp;
		tmp = *(array_ptr + i);
		*(array_ptr + i) = *(array_ptr + i + 1);
		*(array_ptr + i + 1) = tmp;
	}
	for (int i = 0; i < 12; i++) {
		std::cout << "Element [" << i << "] = " << array_ptr[i] << std::endl; // выводим на экран
	}
}

void fill_the_array(int** array, int length_2, int length_1) { // функция заполняем массив рандомными числами
	srand(time(NULL));
	int num;
	for (int i = 0; i < length_2; i++) {
		for (int j = 0; j < length_1; j++) {
			num = rand() % 40 + 11; // случайные числа от 10 до 50
			array[i][j] = num;
		}
	}
}

void show_the_array(int** array, int length_2, int length_1) { // функция выводит массив на экран
	for (int i = 0; i < length_2; i++) {
		for (int j = 0; j < length_1; j++) {
			std::cout << array[i][j] << '\t';
		}
		std::cout << std::endl;
	}
}

int sum(int a, int b) { // функция суммы
	return a + b;
}

int substraction(int a, int b) { // функция вычитания
	return a - b;
}

int multiplication(int a, int b) { // функция умножения
	return a * b;
}

int division(int a, int b) { // функция деления
	return a / b;
}

int main() {
	//Task1
	std::cout << "#Task1#" << std::endl;
	const float a = 7.15;
	const float* const ptr_1 = &a;

	typedef long int sofi_tati;
	long int b = 1234567890;
	sofi_tati* ptr_2 = &b;

	double c = 1.12345;
	double* ptr_3 = &c;

	const short int d = 50;
	const short int* ptr_4 = &d;
	
	typedef float tati_sofi;
	const float f = 1.23;
	const tati_sofi* const ptr_5 = &f;

	typedef char lum_lap;
	const char g = 0;
	const lum_lap* ptr_6 = &g;

	double* const ptr_7 = &c;

	typedef unsigned int lap_lum;
	unsigned int h = 1;
	lap_lum* const ptr_8 = &h;

	//Task2
	std::cout << std:: endl << "#Task2#" << std::endl;
	std::string answer = "yes"; // создаем переменную типа string и инициализируем ее значением "yes"
	while (answer == "yes") { // цикл будет выполняться, пока значение переменной answer равно "yes"
		int length(0);
		std::cout << std::endl << "Enter a positive integer: "; // запрашиваем у пользователя ввод положительного целого числа, которое сохраняется в переменной length
		std::cin >> length;
		std::cout << std::endl;
		double* array_ptr = array_memory(length); // указатель на массив
		components(array_ptr, length); // вызываем функцию заполнения массива
		to_see_array_ptr(array_ptr, length); // вызываем функцию вывода массива на экран
		delete_array_ptr(array_ptr); // вызываем функцию очищения памяти 
		std::cout << std:: endl << "Do you want to repeate the program?" << std::endl << "Your answer (yes or no): "; // спрашивается у пользователя, хочет ли он повторить программу
		std::cin >> answer;
		while ((answer != "no") && (answer != "yes")) { // цикл, который будет продолжаться до тех пор, пока введенное значение не будет "yes" или "no"
			if ((answer != "no") && (answer != "yes")) { // если значение введено некорректно, программа выводит сообщение об ошибке и запрашивает повторный ввод значения
				std::cout << std::endl << "Invalid value! Repeat the input!" << std::endl << std::endl;
				std::cin >> answer;
			}
		}
		if (answer == "no") { // если пользователь ввел "no", то программа завершается
			std::cout << std::endl << "The end of the program" << std::endl;
		}
	}

	//Task3
	std::cout << std::endl << "#Task3#" << std::endl;
	int* array_ptr = new int[12]; // выделяем массив из 12 указателей типа int
	std::cout << std::endl << "Enter 12 components of array: " << std::endl << std::endl; 
	for (int i = 0; i < 12; i++) { // заполняем массив
		std::cin >> array_ptr[i];
	}
	std::cout << std::endl;
	exchange(array_ptr); // вызываем функцию, которая поменяет элементы местами
	delete[] array_ptr; // очищаем память
	array_ptr = 0;

	//Task4
	std::cout << std::endl << "#Task4#" << std::endl;
	int length_1(0);
	int length_2(0);
	std::cout << std::endl << "Enter the number of columns: ";
	std::cin >> length_1; // вводим количество столбцов
	std::cout << std::endl << std::endl << "Enter the number of rows: ";
	std::cin >> length_2; // вводим количество строк
	std::cout << std::endl;
	int** array = new int* [length_2]; // выделяем массив из length_2 указателей типа int (строки)
	for (int i = 0; i < length_2; ++i) { 
		array[i] = new int[length_1]; // это наши столбцы
	}
	fill_the_array(array, length_2, length_1); // вызываем функцию заполнения массива
	show_the_array(array, length_2, length_1); // вызываем вункцию вывода массива на экран
	for (int i = 0; i < length_2; ++i) {
		delete[] array[i]; // очищаем память
	}
	delete[] array; // очищаем память

	//Task5
	std::cout << std::endl << "#Task5#" << std::endl;
	int num_1;
	int num_2;
	std::cout << std::endl << "Enter a (integer): ";
	std::cin >> num_1; // вводим первоне число
	std::cout << std::endl << "Enter b (integer): ";
	std::cin >> num_2; // вводим второе число
	std::cout << std::endl << "Enter operation: ";
	char op ; // объявляем переменную операций
	while (std::cin.get() != '\n'); //отчистили поток ввода
	op = std::cin.get(); // записывается символ в операцию из потока ввода
	if (op == ' ') { // если операция - пробел, то прекращаем работу программы
		std::cout << std::endl << "A space has been entered!" << std::endl;
		return 0;
	}
	int (*operation) (int, int); // указатель на функцию, которая принимает интовое значение и возвращает интовое значение
	while ((op == '+') || (op == '-') || (op == '*') || (op == '/')) { // пока операция равна * или + или - или /
		if (op == '+') { // если операция +
			operation = sum; // указатель указывает на функцию сложения
			std::cout << std::endl << "Answer: " << operation(num_1, num_2) << std::endl; 
		}
		else if (op == '-') { // если операция -
			operation = substraction; // указатель указывает на функцию вычитания
			std::cout << std::endl << "Answer: " << operation(num_1, num_2) << std::endl;
		}
		else if (op == '*') { // если операция *
			operation = multiplication; // указатель указывает на функцию умножения
			std::cout << std::endl << "Answer: " << operation(num_1, num_2) << std::endl;
		}
		else if (op == '/') { // если операция /
			operation = division; // указатель указывает на функцию деления
			std::cout << std::endl << "Answer: " << operation(num_1, num_2) << std::endl;
		}
		std::cout << std::endl << "Enter operation: ";
		while (std::cin.get() != '\n'); //отчистили поток ввода
		op = std::cin.get();
	}
	if (op == ' ') { // если операция - пробел
		std::cout << std::endl << "Wrong operation!" << std::endl;
	}
	else { // если операция - не *, не +, не /, не -, не пробел
		std::cout << std::endl << "A completely incorrect operation is being entered!" << std::endl;
	}
	return 0;
}
