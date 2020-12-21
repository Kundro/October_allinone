#include </std_lib_facilities.h>
#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <conio.h>
/*
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int i, j;



	for (i = 2; i < 1000; i++) {
		for (j = 2; j < i; j++)
		{
			if (!(i % j)) break;
		}
		if (j == i) cout << i << endl;
	}
	!!!for (i = 2; i < 1000; i++)
	{ 
		for (j = 2; j <= (i / j); j++)
			if (!(i % j)) break;
		if (j > (i / j)) cout << i << " - prime number.\n";
	} !!!
				
} */
/*int main() {
	using namespace std;

	int lval = 0; int rval;
	char op;
	int res;
	cout << "Enter expression: ";
	cin >> lval;
	if (!cin) error("No left operand!");
		while (cin >> op)
		{
			cin >> rval;
			if (!cin) error("No right operand!");
			switch (op) {
			case'+':
				lval += rval;
				break;
			case'-':
				lval -= rval;
				break;
			case'*':
				lval *= rval;
				break;
			case'/':
				lval /= rval;
				break;
			default: cout << "Result: " << lval << endl;
				keep_window_open();
				return 0;
			}

		}
		error("Wrong expression!");
}*/
/*int main() {
	class Token {
	public:
		char kind;
		double value;
	};
	Token t;
	t.kind = '+';
	Token t2;
	t2.kind = '8';
	t2.value = 3.14;
	cout << t2.value << endl;

}*/
/*
int main()
{
	int numbs[10];
	int a, b, t;
	int size;	size = 10; // Кол-во элементов подлежащих сортировке.

	for (t = 0; t < size; t++)
		numbs[t] = rand(); // Помещаем в массив рандом числа.
	

		cout << "Source array: "; // Отображаем этот исходный массив.
		for (t = 0; t < size; t++) cout << numbs[t] << ' ';
		cout << endl;

		for (a = 1; a < size; a++) // Реализация сортировки
			for (b = size - 1; b >= a; b--) {
				if (numbs[b - 1] > numbs[b]) { // Элементы неупорядочены. Меняем элементы местами.
					t = numbs[b - 1];
					numbs[b - 1] = numbs[b];
					numbs[b] = t;
				}
			}
		cout << "Sorted array: ";
		for (t = 0; t < size; t++) cout << numbs[t] << ' ';
		return 0;
}
*/
/*
bool password(); // создаем прототип функции

int main() // главная функция
{
	if (password()) cout << "entrance allowed!\n"; //выполняемая функция passsword() выдаёт true or false
	else cout << "access denied.\n";

	return 0;
}

bool password() // функция для возврата значения true or false при вводе пароля
{
	char s[80]; //задались массивом

	cout << "enter password: "; // приглашение
	gets_s(s); // считывает в массив строку данной библиотечной функцией

	if (strcmp(s, "password")) { //функция обработки строк сравнивает s1 and s2
		cout << "wrong password!\n";
		return false; // если в if(1 or -1)
	}

	return true; // если в if(0)

}
*/
/*
int main()
{
	char str[80];
	char str2[80];

	cout << "Enter: ";
	gets_s(str); 
	cout << "Enter 2: ";
	gets_s(str2);
	strcpy_s(str2, str);

	cout <<str2<<' '<<str<<endl;

}
*/
/*
int main()
{
	int arr[3][4];
	int t, i;

	for (t = 0; t < 3; t++) {
		for (i = 0; i < 4; i++) {
			arr[t][i] = (t * 4) + i + 1;
			cout << arr[t][i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
*/
/*
int main()
{
	using namespace std;
	
	char str[80];
	char token[80];
	char *p, *q;

	cout << "Enter a sentence: ";
	gets_s(str);

	p = str;

	while (*p) {
		q = token;
		while (*p != ' ' && *p) {
			*q = *p;
			q++; p++;
		}
		if (*p) p++;
		*q = '\0';
		cout << token << '\n';
	}
	return 0;
}
*/
/*
using namespace std;
int main()
{
	int num[10];
	int *start, *end; // Задались переменными типа указатель

	start = num;
	end = &num[9];

	while (start <= end) {     // СРАВНЕНИЕ УКАЗАТЕЛЕЙ (для определения заполнения массива)
		cout << "Enter a number: ";
		cin >> *start;
		start++;
	}
	start = num;

	while (start <= end) {
		cout << *start << ' ';
		start++;
	}
	return 0;
} // КАК ТОЛЬКО МАССИВ ЗАПОЛНИТСЯ ПРОГРАММА ВЫВЕДЕТ ВВЕДЕННЫЕ ЗНАЧЕНИЯ
*/
/*
using namespace std;

char *fortunes[] = { 
	"rich.\n",
	"bich.\n", // ОШИБКА !!!!
	"free.\n"
};

int main()
{
	int chance;
	cout << "For your destiny please press any key.";

	while (!kbhit()) rand();

	cout << '\n';

	chance = rand();
	chance = chance % 5;
	cout << fortunes[chance];

	return 0;
}
*/ 
/*Разобрать пример выше*/
/*
using namespace std;

void function1();

int main()
{
	char str[] = { "This is array!\n" };
	cout << str;

	function1();

	cout << str;

	return 0;
}
void function1() 
{
	char str[80];
	cout << "Enter words: ";
	gets_s(str);
	cout << str << '\n';
}
*/
/*
using namespace std;

template <typename MyType>

void reverse(char *s) {
	if (*s)
		reverse(s + 1);
	else 
		return;

	cout << *s;
}

int main()
{
	char str[] = "Это тест";
	reverse(str);
	return 0;
}

*/
// Example with 'return' upper
/*
int find_substr(wchar_t* sub, wchar_t* str); // прототип    PAGE 168-169

int main() //  ИНДЕКС "Функция выполняет поиск заданной подстроки в заданной строке. Она возвращает индекс первого обнаруженного вхождения заданной подстроки,
			// или значение -1, если заданная подстрока не была найдена.
{
	wchar_t one[]=L"three";
	wchar_t two[] = L"one two three four three";
	int index = find_substr(one, two);
	cout << "Index: " << index;
	return 0;
}

int find_substr(wchar_t* sub, wchar_t* str)
{
	int t;
	wchar_t* p;
	wchar_t* p2;
	int counter = 0;
	for (t = 0; str[t]; t++)
	{
		p = &str[t];
		p2 = &sub[0];
		while (*p && *p2 == *p)
		{
			p++; p2++;
		}
		if (!*p2) counter++; // Возвращаем индекс подстроки
	}
	if (!counter)
		return -1;
	else return counter;// Подстрока не была обнаружена
} */
// Выше пример с ИНДЕКСОМ
/*
int main()
{
	class animal
	{
	public:
		void voice() {
			cout << "ANIMAL!";
		}
	};

	class dog : public animal {
	public :
		void voice() { 
			cout << "Whof!"; 
		}
	};

	class cow : public animal {
	public:
		void voice() {
			cout << "Moo!";
		}
	};

	class cat : public animal {
	public:
		void voice() {
			cout << "Meow!";
		}
	};

	dog a;
	cow b;
	cat c;
	

	a.voice();
	b.voice();
	c.voice();
	
} */
//ANIMAL class
/*
void mystrcat(char* s1, char* s2, int len = -1); // прототип с инициализированным значением len

int main() 
{
	char str1[80] = "It's test."; // Эти массивы 
	char str2[80] = "0123456789"; // буду конкатенировать

	mystrcat(str1, str2, 5); // моя версия функции strcat
	cout << str1 << '\n';

	strcpy_s(str1, "It's test.");

	mystrcat(str1, str2);
	cout << str1 << endl;

}

void mystrcat(char* s1, char* s2, int len)
{
	while (*s1) s1++; // находим конец строки s1

	if (len == -1) len = strlen(s2);

	while (*s2 && len)
	{
		*s1 = *s2; // копируем символы
		s1++;
		s2++;
		len--;
	}
	*s1 = '\0';
} */
// Создал свою функцию strcat (на определенное кол-во присоединяемых символов)
/*
int r_avg(int i);

int main()
{
	int num;

	do {
		cout << "Enter(-1 is 'exit'): ";
		cin >> num;
		if (num != -1)
			cout << "The current value is " << r_avg(num);
		cout << endl;
	} while (num > -1);
	return 0;
}
int r_avg(int i) {
	static int sum = 0, count = 0;
	sum = sum + i;
	count++;
	return sum / count;
} */
// static переменная
/*
unsigned int i;
unsigned int delay; // задержка

int main()
{
	register unsigned int j;
	long start, end;

	start = clock();
	for (delay = 0; delay < 50; delay++)
		for (i = 0; i < 640; i++);
		end = clock();
	cout << "number of tiks: ";
	cout << end - start << '\n';

	start = clock();
	for (delay = 0; delay < 50; delay++)
		for (j = 0; j < 640; j++);
	end = clock();
	cout << "number of tiks: ";
	cout << end - start << '\n';

	int i = 7; 
	i = i >> 1;
	cout << i << endl;

	return 0;
} */
// register int ???
/*
template <typename T>
void chang(T& a, T& b)
{
	T temp;
	temp = b;
	b = a;
	a = temp;
}

void main()
{
	double a = 5.2;
	double b = 6.3;

	cout << "The value of 'a' is " << a << endl;
	cout << "The value of 'b' is " << b << endl;

	chang(a, b);
	cout << "---------------------------------------" << endl;

	cout << "The value of 'a' is " << a << endl;
	cout << "The value of 'b' is " << b << endl;
}
*/
// Homework "swap function"
/*
enum apple {Jonathan, Golden_Del, Red_Del, Winesap, Cortland, McIntosh};

char name[][20] = {
	"Jonathan",
	"Golden Delicious",
	"Red Delicious",
	"Winesap",
	"Cortland",
	"McIntosh"
};

int main()
{
	apple fruit; // Не понимаю в отладке как работает код

	fruit = Jonathan;
	cout << name[fruit] << '\n';

	fruit = Winesap;
	cout << name[fruit] << '\n'; // Что происходит при этих присваиваниях?

	fruit = McIntosh;
	cout << name[fruit] << '\n';

	return 0;
} */
// не понимаю enum - РАЗОБРАТЬ
/*
const int SIZE = 100;

struct int_type {
	char item[40]; // name of product;
	double cost; // cost;
	double retail; // (розничная цена - retail);
	int on_hand; // in stock;
	int lead_time; // days before restocking;
} invtry[SIZE];

void init_list(), display(), enter();
int menu();
void input(int i), update(); // прототипы функций

int main() {
	char choice;

	init_list(); // функция инициализирует массив структур;

	for (;;) {   // цикл, который отображает меню и обрабатывает команду, выбранную пользователем;
		choice = menu();
		switch (choice) {
		case 'e': enter();
			break;
		case 'd': display();
			break;
		case 'u': update();
			break;
		case 'q': return 0;
		}
	}
} 

void init_list() // инициализация массива структур
{
	int t;
	// имя нулевой длины означает пустое имя
	for (t = 0; t < SIZE; t++) 
		*invtry[t].item = '\0';
}

int menu()       // Получение команды меню, выбранной пользователем
{
	char ch;

	cout << '\n';
	do {
		cout << "(E)nter\n"; // Ввести новый элемент;
		cout << "(D)isplay\n"; // Отобразить всю ведомость;
		cout << "(U)pdate\n"; // Изменить элемент;
		cout << "(Q)uit\n\n"; // Выйти из программы;
		cout << "Choose option: ";
		cin >> ch;
	} while (!strchr("eduq", tolower(ch)));
	return tolower(ch);
}

void enter() {      // Ввод элементов в инвентарную ведомость
	int i;
	// Находим первую свободную структуру
	for (i = 0; i < SIZE; i++)
		if (!*invtry[i].item) break;
	// Если массив полон - значение i будет равно SIZE
	if (i == SIZE) {
		cout << "The list is full.\n";
		return;
	}
	input(i); // Если в массиве найдётся свободный элемент, то будет вызвана эта функция
}
                    //Ввод информации
void input(int i) {
	cout << "Product: "; 
	cin >> invtry[i].item;
	cout << "Cost: "; 
	cin >> invtry[i].cost;
	cout << "Retail: "; 
	cin >> invtry[i].retail;
	cout << "In stock: "; 
	cin >> invtry[i].on_hand;
	cout << "Days before restocking: "; 
	cin >> invtry[i].lead_time;
}

void update() {      // Модификация существующего элемента
	int i;
	char name[80];

	cout << "Enter a name of product: ";
	cin >> name;

	for (i = 0; i < SIZE; i++) 
		if (!strcmp(name, invtry[i].item)) break;
	if (i == SIZE) {
		cout << "Product is not find!\n";
		return;
	}
	cout << "Please enter a new information.\n";
	input(i);
}

void display() {     // Отображение на экране инвентарной ведомости
	int t;
	for (t = 0; t < SIZE; t++) {
		if (*invtry[t].item) {
			cout << invtry[t].item << '\n';
			cout << "Cost: $" << invtry[t].cost << endl;
			cout << "Retail: $" << invtry[t].retail << endl;
			cout << "In stock: " << invtry[t].on_hand << endl;
			cout << "Days before restocking: " << invtry[t].lead_time << " days\n\n";
		}
	}
}
*/
//STRUCT "программа ведения инвентарной ведомости"
/*
int main() 
{
	struct tm* ptr;
	time_t lt;

	lt = time('\0');

	ptr = localtime(&lt);

	cout << (ptr->tm_hour) << ':' << ptr->tm_min << ':' << ptr->tm_sec;

	return 0;

}
*/
// функции структур с time
/*
void disp_binary(unsigned u);
void disp_binary1(unsigned u);
union swap_bytes {
	short int num;
	char ch[2];
};

int main()
{
	setlocale(LC_ALL, "ru");
	swap_bytes sb;
	char temp;

	//sb.num = 15; // двоичный код - 00000000 00001111
	sb.ch[1] = 15;
	sb.ch[0] = 0;
	cout << "Исходные байты: ";
	disp_binary(sb.ch[1]);
	cout << '\t';
	disp_binary(sb.ch[0]);
	cout << endl << endl;

	cout << "Int: "<<sb.num<<endl;
	disp_binary1(sb.num);
	cout << " ";


	// Обмен байтов 
temp = sb.ch[0];
	sb.ch[0] = sb.ch[1];
	sb.ch[1] = temp;

	cout << "Байты после перестановки: ";
	disp_binary(sb.ch[1]);
	cout << " ";
	disp_binary(sb.ch[0]);
	cout << endl << endl;

	return 0; // !!!!!! Перестановка двух байтов выполняется путем обмена двух символов, которые образуют массив ch
} 

void disp_binary1(unsigned u)
{
	register int t;

	for (t = 32768; t > 0; t = t / 2) {
		if (u & t) cout << "1 ";
		else cout << "0 ";
	}
}


void disp_binary(unsigned u)
{
	register int t;

	for (t = 128; t > 0; t = t / 2) {
		if (u & t) cout << "1 ";
		else cout << "0 ";
	}
}
*/
// Использование объединения для перестановки двух байтов в рамках short int значения.
/*
void fillArray(int* const arr, const int size) 
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand()%10;
	}
}
void showArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << '\n';
}
void put_back(int*& arr, int& size,const int value)
{
	int* newArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i]= arr[i];
	}
	newArr[size] = value;
	size++;
	delete[]arr;
	arr = newArr;
}
void pop_back(int*& arr, int& size)
{
	size--;
	int* newArr = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	delete[]arr;
	arr = newArr;
}
void popfrst_back(int*& arr, int& size)
{
	//size--;
	int* newArr = new int[size - 1]; 
	for (int i = 0; i < size; i++)
	{
		if (i == size / 2) {
			for (int j = i + 1; j < size; j++)
			{
				newArr[j - 1] = arr[j];
			}
			break;
		}
		newArr[i] = arr[i];
	}
	delete[]arr;
	arr = newArr;
	size--;
}
int main()
{
	int size = 5;
	int* arr = new int[size];
	fillArray(arr, size);
	showArray(arr, size);
	popfrst_back(arr, size);
	showArray(arr, size);
	put_back(arr, size, 11);
	showArray(arr, size);
	popfrst_back(arr, size);
	showArray(arr, size);
	delete[]arr;

	return 0;
} */
// Код на изменение размера массива. КАК УДАЛИТЬ ПРВЫЙ ЭЛЕМНТ - это функция popfrst_back() 
/*
int mystrlen(char *name);

int main()
{
	char string [] = "Hello!!!";
	cout << string << endl;

	cout << mystrlen(string);

	return 0;
}

int mystrlen(char *name) 
{
	int i;
	for (i = 0; name[i] != '\0'; i++);
	return i;
} */
// ДЗ по созданию strlen() 
/*
class queue {      // Определение класса queue.
	int q[100];
	int sloc, rloc;
	int *row;
public:
	queue();
	~queue();
	void qput(int i);
	int qget();
};

queue::queue()  // Определение конструктора.
{
	
	sloc = rloc = 0;
	cout << "The queue is initialized."<<endl;
}

queue::~queue() // Определение деструктора.
{
	cout << "The queue is destroyed." << endl;
}

void queue::qput(int i) // Занесение в очередь инта.
{
	if (sloc == 100) {
		cout << "The queue is full." << endl;
		return;
	}
	sloc++;
	q[sloc] = i;
}

int queue::qget() // Извлечение из очереди инта.
{
	if (rloc == sloc) {
		cout << "The queue is empty." << endl;
		return 0;
	}
	rloc++;
	return q[rloc];
}

int main()
{
	queue a, b;

	a.qput(10);
	b.qput(19);

	a.qput(20);
	b.qput(1);
	
	int *row = new int[20];
	cout << row << *row << endl;

	delete[]row;

	cout << a.qget() << ' ' << a.qget() << endl;
	cout << b.qget() << ' ' << b.qget() << endl;
	
	return 0;
} */
// class очередь

/*
class test {
	int a;
	int b;
	
public:
	int get_b() { return b; }
	int get_a() { return a; }
	void set_a(int q) { a = q; }
	void set_b(int q) { b = q; }
};

test operator+(test c, test d) {
	test result;
	result.set_a(c.get_a() + d.get_a());
	result.set_b(c.get_b() + d.get_b());
	return result;
}

int main()
{
	test a, b, c;
	a.set_a(3); b.set_a(3); a.set_b(4); b.set_b(4);
	c = a + b;
	cout << c.get_a()<<' '<<c.get_b() << endl;

	return 0;
}
*/ 
//Пример перегрузки оператора с Андреем

class my {
	int a;
	int b;
public:
	my(int vala, int valb) { a = vala; b = valb; } // конструктор
	friend int sum(my x); // прототип дружественной функции
};

int sum(my x) { return x.a + x.b; }

int main()
{
	my cls(111, 12);
	cout<< sum(cls)<<endl;

}