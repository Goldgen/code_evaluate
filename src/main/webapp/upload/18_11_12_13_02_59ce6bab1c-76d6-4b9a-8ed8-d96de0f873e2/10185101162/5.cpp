#include <cstdio>
#include <cctype>
using namespace std;

template<typename T1, typename T2>
struct pair {
	T1 first;
	T2 second;
	
	pair() {}
	pair(T1 T_first, T2 T_second) : first(T_first), second(T_second) {}
	
	bool operator<(pair<T1, T2> _pr) {
		if(first != _pr.first) return first < _pr.first;
		return second < _pr.second;
	}
	
	bool operator>(pair<T1, T2> _pr) {
		if(first != _pr.first) return first > _pr.first;
		return second > _pr.second;
	}
	
	bool operator<=(pair<T1, T2> _pr) {
		if(first != _pr.first) return first < _pr.first;
		return second <= _pr.second;
	}
	
	bool operator>=(pair<T1, T2> _pr) {
		if(first != _pr.first) return first > _pr.first;
		return second >= _pr.second;
	}
	
	bool operator==(pair<T1, T2> _pr) {
		return first == _pr.first && second == _pr.second;
	}
	
	bool operator!=(pair<T1, T2> _pr) {
		return first != _pr.first || second != _pr.second;
	}
};

#define bro(x) (((x)->ftr->lc == (x)) ? ((x)->ftr->rc) : ((x)->ftr->lc))

enum RB_COLOR : bool{RB_COLOR_BLACK, RB_COLOR_RED};

template<typename T1, typename T2>
class map {
	protected:
		struct RB_Node;
		
		RB_Node* _root;
		RB_Node* _hot;
		int _size;
		
		void init(T1, T2);
		RB_Node* zig(RB_Node*);
		RB_Node* zag(RB_Node*);
		void SolveDoubleRed(RB_Node*);
		void SolveLostBlack(RB_Node*);
		RB_Node* find(T1);
		void removetree(RB_Node*);
		
	public:
		
		struct iterator;
		
		map() : _root(NULL), _hot(NULL), _size(0) {}
		
		/*
		~map(){
			removetree(_root);
		}
		*/
		
		T2& operator[](T1 const& vk) {return find(vk)->V_val;} 
		
		bool in_map(T1);
		iterator insert(T1, T2);
		iterator search(T1);
		bool remove(T1);
		void clear();
		int size();
		bool empty();
		void swap_map(map<T1, T2>&);
		
		iterator begin() {
			if(!_root) {
				return iterator((RB_Node*)NULL);
			}
			RB_Node* ptn = _root;
			while(ptn->lc) {
				ptn = ptn->lc;
			}
			return iterator(ptn);
		}
		
		static iterator end() {return iterator((RB_Node*)NULL);}
};

template <typename T1, typename T2>
struct map<T1, T2>::RB_Node {
	T1 V_key;
	T2 V_val;
	bool RBc;	////true : Red ; false : Black .
	RB_Node* ftr;
	RB_Node* lc;
	RB_Node* rc;

	RB_Node(	T1 vk, T2 vv, bool RB, RB_Node* f, RB_Node* lchild, RB_Node* rchild)
		: V_key(vk), V_val(vv), RBc(RB), ftr(f), lc(lchild), rc(rchild) {}

	RB_Node* succ() {
		RB_Node* ptn = rc;
		while(ptn->lc != NULL)
			ptn = ptn->lc;
		return ptn;
	}
	
	RB_Node* left_node() {
		RB_Node* ptn = this;
		if(!lc) {
			while(ptn->ftr && ptn->ftr->lc == ptn) {
				ptn = ptn->ftr;
			}
			ptn = ptn->ftr;
		} else {
			ptn = ptn->lc;
			while(ptn->rc) {
				ptn = ptn->rc;
			}
		}
		return ptn;
	}
	
	RB_Node* right_node() {
		RB_Node* ptn = this;
		if(!rc) {
			while(ptn->ftr && ptn->ftr->rc == ptn) {
				ptn = ptn->ftr;
			}
			ptn = ptn->ftr;
		} else {
			ptn = ptn->rc;
			while(ptn->lc) {
				ptn = ptn->lc;
			}
		}
		return ptn;
	}
};

template <typename T1, typename T2>
	typename
map<T1, T2>::RB_Node* map<T1, T2>::zig(RB_Node* ptn) {
	ptn->lc->ftr = ptn->ftr;
	if(ptn->ftr) {
		if(ptn->ftr->lc == ptn) {
			ptn->ftr->lc = ptn->lc;
		} else {
			ptn->ftr->rc = ptn->lc;
		}
	}
	if(ptn->lc->rc) {
		ptn->lc->rc->ftr = ptn;
	}
	ptn->ftr = ptn->lc;
	ptn->lc = ptn->lc->rc;
	ptn->ftr->rc = ptn;
	return ptn->ftr;
}

template <typename T1, typename T2>
	typename
map<T1, T2>::RB_Node* map<T1, T2>::zag(RB_Node* ptn) {
	ptn->rc->ftr = ptn->ftr;
	if(ptn->ftr) {
		if(ptn->ftr->lc == ptn) {
			ptn->ftr->lc = ptn->rc;
		} else {
			ptn->ftr->rc = ptn->rc;
		}
	}
	if(ptn->rc->lc) {
		ptn->rc->lc->ftr = ptn;
	}
	ptn->ftr = ptn->rc;
	ptn->rc = ptn->rc->lc;
	ptn->ftr->lc = ptn;
	return ptn->ftr;
}

template <typename T1, typename T2>
void map<T1, T2>::init(T1 vk, T2 vv) {
	_root = new RB_Node(vk, vv, RB_COLOR_BLACK, NULL, NULL, NULL);
	_size = 1;
}

template <typename T1, typename T2>
void map<T1, T2>::SolveDoubleRed(RB_Node* nn) {
	while(nn->ftr && nn->ftr->RBc) {		////排除RR-0
		RB_Node* pftr = nn->ftr;
		RB_Node* uncle = bro(pftr);
		RB_Node* grdftr = pftr->ftr;
		if(uncle != NULL && uncle->RBc) {	////RR-2
			grdftr->RBc = RB_COLOR_RED;
			uncle->RBc = RB_COLOR_BLACK;
			pftr->RBc = RB_COLOR_BLACK;
			nn = grdftr;
		} else {							////RR-1
			if(grdftr->lc == pftr) {
				if(pftr->lc == nn) {
					if(grdftr == _root) {
						_root = pftr;
					}
					zig(grdftr);
					pftr->RBc = RB_COLOR_BLACK;
					grdftr->RBc = RB_COLOR_RED;
				} else {
					if(grdftr == _root) {
						_root = nn;
					}
					zag(pftr); zig(grdftr);
					nn->RBc = RB_COLOR_BLACK;
					grdftr->RBc = RB_COLOR_RED;
				}
			} else {
				if(pftr->lc == nn) {
					if(grdftr == _root) {
						_root = nn;
					}
					zig(pftr); zag(grdftr);
					nn->RBc = RB_COLOR_BLACK;
					grdftr->RBc = RB_COLOR_RED;
				} else {
					if(grdftr == _root) {
						_root = pftr;
					}
					zag(grdftr);
					pftr->RBc = RB_COLOR_BLACK;
					grdftr->RBc = RB_COLOR_RED;
				}
			}
			return;
		}
	}
	if(nn == _root) {
		nn->RBc = RB_COLOR_BLACK;
	}
}

template <typename T1, typename T2>
void map<T1, T2>::SolveLostBlack(RB_Node* nn) {
	while(nn != _root) {
		RB_Node* pftr = nn->ftr;
		RB_Node* bthr = bro(nn);
		if(bthr->RBc == RB_COLOR_RED) {		////BB-1
			bthr->RBc = RB_COLOR_BLACK;
			pftr->RBc = RB_COLOR_RED;
			if(_root == pftr) {
				_root = bthr;
			}
			if(pftr->lc == nn) {
				zag(pftr);
			} else {
				zig(pftr);
			}
			bthr = bro(nn);
			pftr = nn->ftr;
		}
		if(bthr->lc && bthr->lc->RBc == RB_COLOR_RED) {	////BB-3
			RB_COLOR oldRBc = pftr->RBc;
			pftr->RBc = RB_COLOR_BLACK;
			if(pftr->lc == nn) {
				if(_root == pftr) {
					_root = bthr->lc;
				}
				zig(bthr); zag(pftr);
			} else {
				bthr->lc->RBc = RB_COLOR_BLACK;
				if(_root == pftr) {
					_root = bthr;
				}
				zig(pftr);
			}
			pftr->ftr->RBc = oldRBc;
			return;
		} else if(bthr->rc && bthr->rc->RBc == RB_COLOR_RED) {	////BB-3
			RB_COLOR oldRBc = pftr->RBc;
			pftr->RBc = RB_COLOR_BLACK;
			if(pftr->lc == nn) {
				bthr->rc->RBc = RB_COLOR_BLACK;
				if(_root == pftr) {
					_root = bthr;
				}
				zag(pftr);
			} else {
				if(_root == pftr) {
					_root = bthr->rc;
				}
				zag(bthr); zig(pftr);
			}
			pftr->ftr->RBc = oldRBc;
			return;
		}
		if(pftr->RBc) {					////BB-2R
			pftr->RBc = RB_COLOR_BLACK;
			bthr->RBc = RB_COLOR_RED;
			return;
		} else {						////BB-2B
			bthr->RBc = RB_COLOR_RED;
			nn = pftr;
		}
	}
}

template <typename T1, typename T2>
	typename
map<T1, T2>::RB_Node* map<T1, T2>::find(T1 vk) {
	RB_Node* ptn = _root;
	_hot = NULL;
	while(ptn != NULL && ptn->V_key != vk) {
		_hot = ptn;
		if(ptn->V_key > vk)
			ptn = ptn->lc;
		else
			ptn = ptn->rc;
	}
	return ptn;
}

template <typename T1, typename T2>
void map<T1, T2>::removetree(RB_Node* ptn) {
	if(!ptn) return;
	removetree(ptn->lc);
	removetree(ptn->rc);
	delete ptn;
}

template <typename T1, typename T2>
struct map<T1, T2>::iterator {
	private:
		
		RB_Node* _real__node;
		
	public:
		
		pair<T1, T2&> operator*() {
			return pair<T1, T2&>(_real__node->V_key, _real__node->V_val);
		}
		
		const bool operator!() const {
			return !_real__node;
		}
		
		const bool operator~() const {
			return _real__node->left_child();
		}
		
		iterator& operator++() {
			_real__node = _real__node->right_node();
			return *this;
		}
		
		iterator& operator--() {
			_real__node = _real__node->left_node();
			return *this;
		}
		
		const bool operator==(iterator const& itr) const {
			return itr._real__node == _real__node;
		}
		
		const bool operator!=(iterator const& itr) const {
			return itr._real__node != _real__node;
		}
		
		iterator(RB_Node* node_nn = NULL) : _real__node(node_nn) {}
		iterator(T1 const& val_vk) : _real__node(find(val_vk)) {}
		iterator(iterator const& iter) : _real__node(iter._real__node) {}
		
};

template <typename T1, typename T2>
bool map<T1, T2>::in_map(T1 vk) {
	return (find(vk));
}

template <typename T1, typename T2>
	typename
map<T1, T2>::iterator map<T1, T2>::insert(T1 vk, T2 vv) {
	RB_Node* ptn = find(vk);
	if(ptn != NULL) {
		ptn->V_val = vv;
		return ptn;
	}
	if(_hot == NULL) {
		init(vk, vv);
		return iterator(_root);
	}
	++_size;
	ptn = new RB_Node(vk, vv, RB_COLOR_RED, _hot, NULL, NULL);
	if(	_hot->V_key < vk	)
		_hot->rc = ptn;
	else
		_hot->lc = ptn;
	SolveDoubleRed(ptn);
	return iterator(ptn);
}

template <typename T1, typename T2>
typename
	map<T1, T2>::iterator map<T1, T2>::search(T1 vk) {
	return iterator(find(vk));
}

template <typename T1, typename T2>
bool map<T1, T2>::remove(T1 vk) {
	RB_Node* ptn = find(vk);
	RB_Node* node_suc;
	if(ptn == NULL) return false;
	--_size;
	while(ptn->lc || ptn->rc) {
		if(!(ptn->lc))
			node_suc = ptn->rc;
		else if(!(ptn->rc))
			node_suc = ptn->lc;
		else {
			node_suc = ptn->succ();
		}
		ptn->V_key = node_suc->V_key;
		ptn->V_val = node_suc->V_val;
		ptn = node_suc;
	}
	if(!(ptn->RBc))
		SolveDoubleBlack(ptn);
	if(ptn->ftr) {
		if(ptn->ftr->lc == ptn) {
			ptn->ftr->lc = NULL;
		} else {
			ptn->ftr->rc = NULL;
		}
	}
	if(_root == ptn) _root = NULL; 
	delete ptn;
	return true;
}

template <typename T1, typename T2>
void map<T1, T2>::clear() {
	removetree(_root);
	_size = 0;
	_root = NULL;
}

template <typename T1, typename T2>
int map<T1, T2>::size() {
	return _size;
}

template <typename T1, typename T2>
bool map<T1, T2>::empty() {
	return !_size;
}

template <typename T1, typename T2>
void map<T1, T2>::swap_map(map<T1, T2>& __mmp) {
	RB_Node* _tmp_node = _root;
	_root = __mmp._root;
	__mmp._root = _tmp_node;
	_tmp_node = _hot;
	_hot = __mmp._hot;
	__mmp._hot = _tmp_node;
	int _tmp_sz = _size;
	_size = __mmp._size;
	__mmp._size = _tmp_sz;
}

#define gc getchar()
inline
	long long readll() {
	register long long ret(0);
	register char c;
	do {
		c = gc;
	} while(!isdigit(c));
	do {
		ret = (ret << 3LL) + (ret << 1LL) + (long long)(c ^ 0x30);
		c = gc;
	} while(isdigit(c));
	return ret;
}
#define rl readll()

const char* str[] = {"Pine", "Fire", "Cedar", "Maple", "Oak"};

map<char, double> mp1;
map<char, const char*>  mp2;

int main() {
	mp1.insert('P', 0.89);
	mp1.insert('F', 1.09);
	mp1.insert('C', 2.26);
	mp1.insert('M', 4.50);
	mp1.insert('O', 3.10);
	mp2.insert('P', str[0]);
	mp2.insert('F', str[1]);
	mp2.insert('C', str[2]);
	mp2.insert('M', str[3]);
	mp2.insert('O', str[4]);
	double tot(0);
	long long num, l, w, h;
	char c;
	do {
		c = gc;
	} while(!isalpha(c));
	while(c != 'T') {
		num = rl; l = rl; w = rl; h = rl;
		double now =  mp1[c] * num * l * w * h / 12.0 + 1e-08;
		printf("%lld %lld*%lld*%lld %s, Cost: $%.2lf\n", num, l, w, h, mp2[c], now);
		tot += now;
		do {
			c = gc;
		} while(!isalpha(c));
	}
	
	return !printf("Total cost: $%.2lf", tot);
}