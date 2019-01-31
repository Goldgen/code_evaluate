#include <cstdio>
#include <cctype>
using namespace std;

#define bro(x) (((x)->ftr->lc == (x)) ? ((x)->ftr->rc) : ((x)->ftr->lc))

typedef bool RB_COLOR;
#define RB_COLOR_RED true
#define RB_COLOR_BLACK false

template<typename T>
class redblacktree {
	protected:
		struct RB_Node {
			T val;
			RB_COLOR RBc;	////true : Red ; false : Black .
			RB_Node* ftr;
			RB_Node* lc;
			RB_Node* rc;
			unsigned int s;

			RB_Node(	T v = T(), RB_COLOR RB = RB_COLOR_RED,
					RB_Node* f = NULL, RB_Node* lchild = NULL, RB_Node* rchild = NULL)
				: val(v), RBc(RB), ftr(f), lc(lchild), rc(rchild), s(1u) {}

			RB_Node* succ() {
				RB_Node* ptn = rc;
				while(ptn->lc != NULL) {
					ptn = ptn->lc;
				}
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
			
			void maintain() {
				s = 1;
				if(lc) s += lc->s;
				if(rc) s += rc->s;
			}
		};
		
		RB_Node* _root;
		RB_Node* _hot;
		unsigned int _size;
		
		void init(T v) {
			_root = new RB_Node(v, RB_COLOR_BLACK, NULL, NULL, NULL);
			_size = 1u;
		}
		
		RB_Node* zig(RB_Node* ptn) {
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
			
			ptn->maintain();
			ptn->ftr->maintain();
			
			return ptn->ftr;
		}
		
		RB_Node* zag(RB_Node* ptn) {
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
			
			ptn->maintain();
			ptn->ftr->maintain();
			
			return ptn->ftr;
		}
		
		void SolveDoubleRed(RB_Node* nn) {
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
		
		RB_Node* find(unsigned int rk, RB_Node* ptn) {
			if(!ptn) return NULL;
			if(!(ptn->lc)) {
				if(!rk) {
					return ptn;
				} else {
					return find(rk - 1, ptn->rc);
				}
			} else {
				if(ptn->lc->s == rk - 1) return ptn;
				else if(ptn->lc->s >= rk) return find(rk, ptn->lc);
				else return find(rk - (ptn->lc->s) - 1, ptn->rc);
			}
		}
		
		void removetree(RB_Node* ptn) {
			if(!ptn) return;
			removetree(ptn->lc);
			removetree(ptn->rc);
			delete ptn;
		}
		
	public:
		
		struct iterator {
			private:
				RB_Node* _real__node;
				
			public:
				const T operator*() const {
					return _real__node->val;
				}
				
				const bool operator!=(iterator const& itr) const {
					return _real__node != itr._real__node;
				}
				
				const bool operator==(iterator const& itr) const {
					return _real__node == itr._real__node;
				}
				
				const bool operator!() const {
					return !_real__node;
				}
				
				const bool operator~() const {
					return _real__node->left_node();
				}
				
				iterator& operator++() {
					_real__node = _real__node->right_node();
					return *this;
				}
				
				iterator& operator--() {
					_real__node = _real__node->left_node();
					return *this;
				}
				
				iterator(RB_Node* node_nn = NULL) : _real__node(node_nn) {}
				iterator(T const& val_vv) : _real__node(find(val_vv)) {}
				iterator(iterator const& iter) : _real__node(iter._real__node) {}
				
		};
		
		redblacktree() : _root(NULL), _hot(NULL), _size(0) {}
		
		~redblacktree() {
			removetree(_root);
		}
		
		redblacktree& operator=(redblacktree const& __rbt_c) {
			_root = __rbt_c._root;
			_size = __rbt_c._size;
		}
		
		iterator insert(unsigned int rk, T v) {
			if(!_root) {
				init(v);
				return iterator(_root);
			}
			++_size;
			if(!rk) {
				RB_Node* ptn = _root;
				while(ptn->lc) {
					ptn = ptn->lc;
				}
				ptn->lc = new RB_Node(v, RB_COLOR_RED, ptn, NULL, NULL);
				ptn->maintain();
				SolveDoubleRed(ptn->lc);
				return iterator(ptn->lc);
			} else if(rk == _size - 1) {
				RB_Node* ptn = _root;
				while(ptn->rc) {
					ptn = ptn->rc;
				}
				ptn->rc = new RB_Node(v, RB_COLOR_RED, ptn, NULL, NULL);
				ptn->maintain();
				SolveDoubleRed(ptn->rc);
				return iterator(ptn->rc);
			}
			
			RB_Node* ptn = find(rk, _root);
			
			if(ptn->rc) {
				ptn = ptn->succ();
				ptn->lc = new RB_Node(v, RB_COLOR_RED, ptn, NULL, NULL);
				ptn->maintain();
				SolveDoubleRed(ptn->lc);
				return iterator(ptn->lc);
			}
			ptn->rc = new RB_Node(v, RB_COLOR_RED, ptn, NULL, NULL);
			ptn->maintain();
			SolveDoubleRed(ptn->rc);
			return iterator(ptn->rc);
		}
		
		void clear() {
			removetree(_root);
		}
		
		int size() {
			return _size;
		}
		
		bool empty() {
			return !_size;
		}
		
		iterator begin() {
			RB_Node* ptn = _root;
			while(ptn->lc) {
				ptn = ptn->lc;
			}
			return iterator(ptn);
		}
		
		static iterator end() {return iterator((RB_Node*)NULL);}
		
		void vis() {
			RB_Node* ptn = find(0u, _root);
			printf("%d", ptn->val);
			for(register unsigned int i(1u);i < _size;++i) {
				ptn = ptn->right_node();
				printf(" %d", ptn->val);
			}
		}
};

#define gc getchar()
inline
	int readint() {
	register int ret(0);
	register char c;
	while(!isdigit(c = gc));
	do {
		ret = (ret << 3) + (ret << 1) + (c ^ 0x30);
		c = gc;
	} while(isdigit(c));
	return ret;
}
#define ri readint()

int main() {
	redblacktree<int> s;
	int n = ri;
	for(register int i(0);i < n;++i) {
		s.insert(i, ri);
	}
	int r = ri;
	s.insert(r, ri);
	s.vis();
	
	return 0;
}