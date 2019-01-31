#include <cstdio>
#include <cstring>
using namespace std;

template <typename T>
class vector {
	private:
		void shrink() {
			if(_cap < (_size << 2) || _cap <= MIN_items) return;

			T* olditems = items;
			items = new T[_cap >>= 1];
			for(register int __I(0); __I < _size; ++__I) {
				items[__I] = olditems[__I];
			}

			delete[] olditems;
		}

		void expand() {
			if(_cap > _size) return;

			T* olditems = items;
			items = new T[_cap <<= 1];
			for(register int __I(0); __I < _size; ++__I) {
				items[__I] = olditems[__I];
			}

			delete[] olditems;
		}

	protected:

		T* items;
		int _size;
		int _cap;
		static const int MIN_items = 8;

	public:

		vector() : _size(0) {
			items = new T[_cap = MIN_items];
		}

		vector(const T* arrt, int const& __len) {
			_size = _cap = __len;
			items = new T[_cap];
			for(register int __I(0); __I < __len; ++__I) {
				items[__I] = arrt[__I];
			}
		}

		vector(vector<T> const& vec) {
			_size = vec._size;
			items = new T[_cap = vec._cap];
			for(register int __I(0); __I < _size; ++__I) {
				items[__I] = vec.items[__I];
			}
		}

		~vector() {
			delete[] items;
		}

		T& operator[](int const rank) const {
			return items[rank];
		}

		vector<T>& operator=(const T* arrt) {
			delete[] items;
			items = new T[_cap];
			for(register int __I(0); __I < _size; ++__I) {
				items[__I] = arrt[__I];
			}
			return *this;
		}

		vector<T>& operator=(vector<T> const& vec) {
			delete[] items;
			_size = vec._size;
			items = new T[_cap = vec._cap];
			for(register int __I(0); __I < _size; ++__I) {
				items[__I] = vec.items[__I];
			}
			return *this;
		}

		bool operator==(vector<T> const& vec) const {
			if(_size != vec._size) {
				return false;
			}
			for(register int __I(0); __I < _size; ++__I) if(items[__I] != vec.items[__I]) {
					return false;
				}
			return true;
		}

		bool operator!=(vector<T> const& vec) const {
			return !operator==(vec);
		}

		bool operator<(vector<T> const& vec) const {
			if(_size > vec._size) {
				return false;
			}
			for(register int __I(0); __I < _size; ++__I) if(items[__I] != vec.items[__I]) {
					return items[__I] > vec.items[__I];
				}
			return false;
		}

		bool operator<=(vector<T> const& vec) const {
			if(_size > vec._size) {
				return false;
			}
			for(register int __I(0); __I < _size; ++__I) if(items[__I] != vec.items[__I]) {
					return items[__I] > vec.items[__I];
				}
			return true;
		}

		bool operator>(vector<T> const& vec) const {
			return !operator<=(vec);
		}

		bool operator>=(vector<T> const& vec) const {
			return !operator<(vec);
		}

		void push_back(T const& v) {
			items[_size++] = v;
			expand();
		}

		T pop_back() {
			T __ret = items[--_size];
			shrink();
			return __ret;
		}

		int size() const {
			return _size;
		}

		bool empty() const {
			return !_size;
		}

		void clear() {
			_size = 0;
			delete[] items;
			items = new T[_cap = MIN_items];
		}

		T* begin() const {
			return items;
		}

		T* end() const {
			return items + _size;
		}

		void swap(vector& __vct) {
			T* olditems = this->items;
			this->items = __vct.items;
			__vct.items = olditems;

			int old_size = this->_size;
			this->_size = __vct._size;
			__vct._size = old_size;

			int old_cap = this->_cap;
			this->_cap = __vct._cap;
			__vct._cap = old_cap;
		}
};

class BigInt {
	private:
		vector<char> __bits;
		char _sgn;

		char* Bit_list;
		
		void add1(BigInt const& _bigint_c, BigInt& __ret) const {
			for(register int __I(1); __I < __ret.__bits.size(); ++__I) {
				__ret.__bits[__I - 1] += __bits[__I - 1];
				__ret.__bits[__I] += (__ret.__bits[__I - 1] / 10);
				__ret.__bits[__I - 1] %= 10;
			}
			__ret.__bits[__ret.__bits.size() - 1] += __bits[__ret.__bits.size() - 1];
			for(register int __I(__ret.__bits.size()); __I < __bits.size(); ++__I) {
				__ret.__bits.push_back(__bits[__I]);
				__ret.__bits[__I] += (__ret.__bits[__I - 1] / 10);
				__ret.__bits[__I - 1] %= 10;
			}
			if(__ret.__bits[__ret.__bits.size() - 1] > 9) {
				__ret.__bits[__ret.__bits.size() - 1] %= 10;
				__ret.__bits.push_back(1);
			}
		}
		
		void add2(BigInt const& _bigint_c, BigInt& __ret) const {
			for(register int __I(1); __I < __bits.size(); ++__I) {
				__ret.__bits[__I - 1] += __bits[__I - 1];
				__ret.__bits[__I] += (__ret.__bits[__I - 1] / 10);
				__ret.__bits[__I - 1] %= 10;
			}
			__ret.__bits[__bits.size() - 1] += __bits[__bits.size() - 1];
			for(register int __I(__bits.size()); __I < __ret.__bits.size(); ++__I) {
				if(__ret.__bits[__I - 1] < 10) {
					break;
				}
				__ret.__bits[__I] += (__ret.__bits[__I - 1] / 10);
				__ret.__bits[__I - 1] %= 10;
			}
			if(__ret.__bits[__ret.__bits.size() - 1] > 9) {
				__ret.__bits[__ret.__bits.size() - 1] %= 10;
				__ret.__bits.push_back(1);
			}
		}
	public:
		BigInt() : _sgn(1), Bit_list(NULL) {
			__bits.push_back(0);
		}

		BigInt(int const& _int_c) : Bit_list(NULL) {
			register int _tmp__intc(_int_c);
			if(_tmp__intc < 0) {
				_sgn = -1;
				_tmp__intc = -_tmp__intc;
			} else {
				_sgn = 1;
			}
			do {
				__bits.push_back((char)(_tmp__intc % 10));
				_tmp__intc /= 10;
			} while(_tmp__intc);
		}

		BigInt(unsigned int const& _uint_c) : _sgn(1), Bit_list(NULL) {
			register unsigned int _tmp__uintc(_uint_c);
			do {
				__bits.push_back((char)(_tmp__uintc % 10u));
				_tmp__uintc /= 10u;
			} while(_tmp__uintc);
		}

		BigInt(long long const& _int_c) : Bit_list(NULL) {
			register long long _tmp__intc(_int_c);
			if(_tmp__intc < 0) {
				_sgn = -1;
				_tmp__intc = -_tmp__intc;
			} else {
				_sgn = 1;
			}
			do {
				__bits.push_back((char)(_tmp__intc % 10LL));
				_tmp__intc /= 10LL;
			} while(_tmp__intc);
		}

		BigInt(unsigned long long const& _uint_c) : _sgn(1), Bit_list(NULL) {
			register unsigned long long _tmp__uintc(_uint_c);
			do {
				__bits.push_back((char)(_tmp__uintc % 10uLL));
				_tmp__uintc /= 10uLL;
			} while(_tmp__uintc);
		}

		BigInt(const char* const& _chr_str, unsigned int _len) : Bit_list(NULL) {
			const char* str_cptr = _chr_str + _len - 1;
			if(*(_chr_str) == '-') {
				_sgn = -1;
			} else {
				_sgn = 1;
			}
			for(register unsigned int __I(0); __I < _len; ++__I) {
				if((*str_cptr) < 0x30 || (*str_cptr) > 0x39) {
					break;
				} else {
					__bits.push_back(*(str_cptr--) ^ 0x30);
				}
			}
		}

		BigInt(BigInt const& _bigint_c) :
			__bits(_bigint_c.__bits), _sgn(_bigint_c._sgn), Bit_list(NULL) {}

		~BigInt() {
			delete[] Bit_list;
		}

		BigInt& operator=(BigInt const& _bigint_c) {
			__bits = _bigint_c.__bits;
			_sgn = _bigint_c._sgn;
			return *this;
		}

		bool operator==(BigInt const& _bigint_c) const {
			return __bits == _bigint_c.__bits;
		}
		bool operator!=(BigInt const& _bigint_c) const {
			return __bits != _bigint_c.__bits;
		}
		bool operator< (BigInt const& _bigint_c) const {
			return __bits <  _bigint_c.__bits;
		}
		bool operator<=(BigInt const& _bigint_c) const {
			return __bits <= _bigint_c.__bits;
		}
		bool operator> (BigInt const& _bigint_c) const {
			return __bits >  _bigint_c.__bits;
		}
		bool operator>=(BigInt const& _bigint_c) const {
			return __bits >= _bigint_c.__bits;
		}
		BigInt operator-() const {
			BigInt __ret(*this);
			__ret._sgn = -(__ret._sgn);
			return __ret;
		}
		
		BigInt operator+(BigInt const& _bigint_c) const {
			if(_sgn != _bigint_c._sgn) {
				return operator-(-_bigint_c);
			}
			BigInt __ret(_bigint_c);
			if(__bits.size() > _bigint_c.__bits.size()) {
				add1(_bigint_c, __ret);
			} else {
				add2(_bigint_c, __ret);
			}
			return __ret;
		}

		BigInt operator-(BigInt const& _bigint_c) const {
			if(_sgn != _bigint_c._sgn) {
				return operator+(-_bigint_c);
			}
			BigInt __ret(_bigint_c);
			if(__bits.size() >= _bigint_c.__bits.size()) {
				for(register int __I(1); __I < __ret.__bits.size(); ++__I) {
					__ret.__bits[__I - 1] -= __bits[__I - 1];
					if(__ret.__bits[__I - 1] < 0) {
						--__ret.__bits[__I];
						__ret.__bits[__I - 1] += 10;
					}
				}
				__ret.__bits[__ret.__bits.size() - 1] += __bits[__ret.__bits.size() - 1];
				for(register int __I(__ret.__bits.size()); __I < __bits.size(); ++__I) {
					__ret.__bits.push_back(__bits[__I]);
					if(__ret.__bits[__I - 1] < 0) {
						--__ret.__bits[__I];
						__ret.__bits[__I - 1] += 10;
					}
				}
				if(__ret.__bits[__ret.__bits.size() - 1] > 9) {
					__ret.__bits[__ret.__bits.size() - 1] %= 10;
					__ret.__bits.push_back(1);
				}
			} else {
				return -(_bigint_c - *this);
			}
			return __ret;
		}

		BigInt& operator+=(BigInt const& _bigint_c) {
			if(__bits.size() > _bigint_c.__bits.size()) {
				for(register int __I(1); __I < _bigint_c.__bits.size(); ++__I) {
					__bits[__I - 1] += _bigint_c.__bits[__I - 1];
					__bits[__I] += (__bits[__I - 1] / 10);
					__bits[__I - 1] %= 10;
				}
				__bits[_bigint_c.__bits.size() - 1] += _bigint_c.__bits[_bigint_c.__bits.size() - 1];
				for(register int __I(_bigint_c.__bits.size()); __I < __bits.size(); ++__I) {
					if(__bits[__I - 1] < 10) {
						break;
					}
					__bits[__I] += (__bits[__I - 1] / 10);
					__bits[__I - 1] %= 10;
				}
				if(__bits[__bits.size() - 1] > 9) {
					__bits[__bits.size() - 1] %= 10;
					__bits.push_back(1);
				}
			} else {
				for(register int __I(1); __I < __bits.size(); ++__I) {
					__bits[__I - 1] += _bigint_c.__bits[__I - 1];
					__bits[__I] += (__bits[__I - 1] / 10);
					__bits[__I - 1] %= 10;
				}
				__bits[__bits.size() - 1] += _bigint_c.__bits[__bits.size() - 1];
				for(register int __I(__bits.size()); __I < _bigint_c.__bits.size(); ++__I) {
					__bits.push_back(_bigint_c.__bits[__I]);
					__bits[__I] += (__bits[__I - 1] / 10);
					__bits[__I - 1] %= 10;
				}
				if(__bits[__bits.size() - 1] > 9) {
					__bits[__bits.size() - 1] %= 10;
					__bits.push_back(1);
				}
			}
			return *this;
		}

		const char* c_str() {
			delete[] Bit_list;
			Bit_list = new char[__bits.size() + 2];
			char* str_cptr = Bit_list;
			if(!(~_sgn)) {
				*(str_cptr++) = '-';
			}
			for(register int __I(__bits.size() - 1); __I >= 0; --__I) {
				*(str_cptr++) = (__bits[__I] ^ 0x30);
			}
			(*str_cptr) = '\0';
			return Bit_list;
		}
};

char a_str[600];
char b_str[600];

int main() {
	scanf("%s%s", a_str, b_str);
	BigInt a(a_str, strlen(a_str));
	BigInt b(b_str, strlen(b_str));
	a += b;
	printf("%s\n", a.c_str());

	return 0;
}
