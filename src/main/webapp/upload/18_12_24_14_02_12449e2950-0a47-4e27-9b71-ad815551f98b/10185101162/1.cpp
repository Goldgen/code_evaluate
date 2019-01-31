#include <cstdio>
#include <cstring>
using namespace std;

struct Book {
	friend class Solver;
	private:
		char name[100];
		double price;
		char press[40];
	public:
		Book() : price(0) {
			memset(name, 0, sizeof(name));
			memset(press, 0, sizeof(press));
		}
		
		Book(const char* init_name, double init_price, const char* init_press) :
			price(init_price) {
				strcpy(name, init_name);
				strcpy(press, init_press);
		}
		
		void Set(const char* t_name, double t_price, const char* t_press) {
			strcpy(name, t_name);
			price = t_price;
			strcpy(press, t_press);
		}
		
		~Book() {}
};

class Solver {
	private:
		Book My_Book;
	public:
		void Read() {
			char book_name[100];
			gets(book_name);
			double book_price;
			scanf("%lf\n", &book_price);
			char book_press[40];
			gets(book_press);
			My_Book.Set(book_name, book_price, book_press);
		}
		
		void display() {
			printf("name is \"%s\", price is $%.2lf, press is \"%s\"\n",
				   My_Book.name, My_Book.price, My_Book.press);
		}
};

int main() {
	Solver My_solve;
	My_solve.Read();
	My_solve.display();
	
	return 0;
}