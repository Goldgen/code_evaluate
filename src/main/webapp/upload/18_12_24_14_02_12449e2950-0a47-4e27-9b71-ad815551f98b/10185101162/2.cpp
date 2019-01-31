#include <cstdio>
#include <cstring>
#include <cctype>
#include <cassert>

#define bro(x) (((x)->ftr->lc == (x)) ? ((x)->ftr->rc) : ((x)->ftr->lc))

typedef bool RB_COLOR;
#define RB_COLOR_RED true
#define RB_COLOR_BLACK false

class link;
class redblacktree;

struct student {
	public:
		char name[10];
		static unsigned long long BASE;
		unsigned long long ID;
		char email[20];
		char tele[15];
		void* rank;
		
		student() {}
		
		student(const char* stu_name, unsigned long long stu_id,
				const char* stu_email, const char* stu_tele, void* rk) :
		  ID(stu_id), rank(rk) {
			strcpy(name, stu_name);
			strcpy(email, stu_email);
			strcpy(tele, stu_tele);
		}
		
		student(student const& stu) {
		  memcpy(this, &stu, sizeof(student));
		}
		
		~student() {}
		
		bool operator<(student const& stu) {
			return ID < stu.ID;
		}
		
		bool operator<=(student const& stu) {
			return ID <= stu.ID;
		}
		
		bool operator>(student const& stu) {
			return ID > stu.ID;
		}
		
		bool operator>=(student const& stu) {
			return ID >= stu.ID;
		}
		
		bool operator==(student const& stu) {
			return ID == stu.ID;
		}
		
		bool operator!=(student const& stu) {
			return ID != stu.ID;
		}
		
		student& operator=(student const& stu) {
			memcpy(this, &stu, sizeof(student));
			return *this;
		}
};

class redblacktree {
	protected:
		struct RB_Node {
			student val;
			RB_COLOR RBc;	////true : Red ; false : Black .
			RB_Node* ftr;
			RB_Node* lc;
			RB_Node* rc;
		
			RB_Node(student const& v, RB_COLOR RB = RB_COLOR_RED,
			        RB_Node* f = NULL, RB_Node* lchild = NULL, RB_Node* rchild = NULL)
				: val(v), RBc(RB), ftr(f), lc(lchild), rc(rchild) {}
		
			RB_Node* succ() {
				RB_Node* ptn = rc;
				while(ptn->lc != NULL) {
					ptn = ptn->lc;
				}
				return ptn;
			}
			
			RB_Node* left_node() {
				RB_Node* ptn = this;
				if(lc) {
					ptn = ptn->lc;
					while(ptn->rc) { 
						ptn = ptn->rc;
					}
				} else {
					while(ptn->ftr && ptn->ftr->lc == ptn) {
						ptn = ptn->ftr;
					}
					ptn = ptn->ftr;
				}
				return ptn;
			}
			
			RB_Node* right_node() {
				RB_Node* ptn = this;
				if(rc) {
					ptn = ptn->rc;
					while(ptn->lc) { 
						ptn = ptn->lc;
					}
				} else {
					while(ptn->ftr && ptn->ftr->rc == ptn) {
						ptn = ptn->ftr;
					}
					ptn = ptn->ftr;
				}
				return ptn;
			}
		};
		
		RB_Node* _root;
		RB_Node* _hot;
		int _size;
		
		void init(student const&);
		RB_Node* zig(RB_Node*);
		RB_Node* zag(RB_Node*);
		void SolveDoubleRed(RB_Node*);
		void SolveLostBlack(RB_Node*);
		RB_Node* find(student const&);
		void removetree(RB_Node*);
		
		void solve_RR1(RB_Node*&, RB_Node*, RB_Node*, RB_Node*);
		void solve_RR2(RB_Node*&, RB_Node*, RB_Node*, RB_Node*);
		
		void solve_BB1(RB_Node*&, RB_Node*&, RB_Node*&);
		void solve_BB2R(RB_Node*, RB_Node*);
		void solve_BB2B(RB_Node*&, RB_Node*, RB_Node*);
		void solve_BB3l(RB_Node*, RB_Node*, RB_Node*);
		void solve_BB3r(RB_Node*, RB_Node*, RB_Node*);
		
	public:
		struct iterator {
			friend class redblacktree;
			private:
				RB_Node* _real__node;
				
			public:
				student& operator*() const {
					return _real__node->val;
				}
				
				bool operator!=(iterator const& itr) const {
					return _real__node != itr._real__node;
				}
				
				bool operator==(iterator const& itr) const {
					return _real__node == itr._real__node;
				}
				
				bool operator!() const {
					return !_real__node;
				}
				
				bool operator~() const {
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
				iterator(iterator const& iter) : _real__node(iter._real__node) {}
		};
		
		redblacktree() : _root(NULL), _hot(NULL), _size(0) {}
		
		~redblacktree() {
			removetree(_root);
		}
		
		bool insert(student const&);
		iterator search(student const&);
		iterator lower_bound(student const&);
		iterator upper_bound(student const&);
		void* remove(student const&);
		void clear();
		int size();
		bool empty(); 
		iterator begin() {
			RB_Node* ptn = _root;
			while(ptn->lc) {
				ptn = ptn->lc;
			}
			return iterator(ptn);
		}
		static iterator end() {return iterator((RB_Node*)NULL);}
	
	friend class link;
	friend void pre_dfs(link&, redblacktree::RB_Node*);
};

class link {
	private:
		struct link_node {
			student item;
			link_node* pre;
			link_node* next;
			
			link_node() {}
			~link_node() {}
			
			link_node(student const& stu) : item(stu), pre(NULL), next(NULL) {}
		};
		
		void erase(link_node* ptn) {
			if(ptn->pre) ptn->pre->next = ptn->next;
			if(ptn->next) ptn->next->pre = ptn->pre;
			if(ptn == tailer) {
				tailer = tailer->pre;
			}
			if(ptn == header) {
				header = header->next;
			}
			--_size;
			delete ptn;
		}
	protected:
		link_node* header;
		link_node* tailer;
		int _size;
	public:
		link() : header(NULL), tailer(NULL), _size(0) {}
		
		~link() {
			for(register int __I(0);__I < _size;++__I) {
				link_node* ptn = header;
				header = header->next;
				delete ptn;
			}
		}
		
		link& operator=(redblacktree const& rbt_stu) {
			clear();
			pre_dfs(*this, rbt_stu._root);
			return *this;
		}
		
		void push_back(student const& v) {
			if(_size) {
				link_node* n_pt = new link_node(v);
				n_pt->pre = tailer;
				tailer->next = n_pt;
				tailer = tailer->next;
			} else {
				header = tailer = new link_node(v);
			}
			++_size;
		}
		
		student pop_back() {
			--_size;
			student __ret = tailer->item;
			link_node* n_pt = tailer;
			tailer = tailer->pre;
			tailer->next = NULL;
			delete n_pt;
			return __ret;
		}
		
		int size() const {
			return _size;
		}
		
		bool empty() const {
			return !_size;
		}
		
		void clear() {
			for(register int __I(0);__I < _size;++__I) {
				link_node* ptn = header;
				header = header->next;
				delete ptn;
			}
			assert(!header);
			tailer = NULL;
			_size = 0;
		}
	
	friend class redblacktree;
	friend class Solver;
	friend void pre_dfs(link&, redblacktree::RB_Node*);
};

typename
redblacktree::RB_Node* redblacktree::zig(RB_Node* ptn) {
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

typename
redblacktree::RB_Node* redblacktree::zag(RB_Node* ptn) {
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

void redblacktree::removetree(RB_Node* ptn) {
	if(!ptn) return;
	removetree(ptn->lc);
	removetree(ptn->rc);
	delete ptn;
}

void redblacktree::init(student const& v) {
	_root = new RB_Node(v, RB_COLOR_BLACK, NULL, NULL, NULL);
	_size = 1;
}

void redblacktree::solve_RR1(RB_Node*& t_n, RB_Node* grdftr, RB_Node* uncle, RB_Node* pftr) {
	RB_Node*& nn = t_n;
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
}

void redblacktree::solve_RR2(RB_Node*& t_n, RB_Node* grdftr, RB_Node* uncle, RB_Node* pftr) {
	RB_Node*& nn = t_n;
	grdftr->RBc = RB_COLOR_RED;
	uncle->RBc = RB_COLOR_BLACK;
	pftr->RBc = RB_COLOR_BLACK;
	nn = grdftr;
}

void redblacktree::SolveDoubleRed(RB_Node* t_n) {
	RB_Node*& nn = t_n;
	while(nn->ftr && nn->ftr->RBc) {		////!RR-0
		RB_Node* pftr = nn->ftr;
		RB_Node* uncle = bro(pftr);
		RB_Node* grdftr = pftr->ftr;
		if(uncle != NULL && uncle->RBc) {	////RR-2
			solve_RR2(t_n, grdftr, uncle, pftr);
		} else {							////RR-1
			solve_RR1(t_n, grdftr, uncle, pftr);
			return;
		}
	}
	if(nn == _root) {
		nn->RBc = RB_COLOR_BLACK;
	}
}

void redblacktree::solve_BB1(RB_Node*& t_n, RB_Node*& t_bthr, RB_Node*& t_pftr) {
	RB_Node*& nn = t_n;
	RB_Node*& bthr = t_bthr;
	RB_Node*& pftr = t_pftr;
	bthr->RBc = RB_COLOR_BLACK;
	pftr->RBc = RB_COLOR_RED;
	if(_root == pftr) _root = bthr;
	if(pftr->lc == nn) zag(pftr);
	else zig(pftr);
	bthr = bro(nn);
	pftr = nn->ftr;
}

void redblacktree::solve_BB2R(RB_Node* pftr, RB_Node* bthr) {
	pftr->RBc = RB_COLOR_BLACK;
	bthr->RBc = RB_COLOR_RED;
}

void redblacktree::solve_BB2B(RB_Node*& t_n, RB_Node* pftr, RB_Node* bthr) {
	RB_Node*& nn = t_n;
	bthr->RBc = RB_COLOR_RED;
	nn = pftr;
}

void redblacktree::solve_BB3l(RB_Node* nn, RB_Node* pftr, RB_Node* bthr) {
	RB_COLOR oldRBc = pftr->RBc;
	pftr->RBc = RB_COLOR_BLACK;
	if(pftr->lc == nn) {
		if(_root == pftr) _root = bthr->lc;
		zig(bthr); zag(pftr);
	} else {
		bthr->lc->RBc = RB_COLOR_BLACK;
		if(_root == pftr) _root = bthr;
		zig(pftr);
	}
	pftr->ftr->RBc = oldRBc;
}
void redblacktree::solve_BB3r(RB_Node* nn, RB_Node* pftr, RB_Node* bthr) {
	RB_COLOR oldRBc = pftr->RBc;
	pftr->RBc = RB_COLOR_BLACK;
	if(pftr->lc == nn) {
		bthr->rc->RBc = RB_COLOR_BLACK;
		if(_root == pftr) _root = bthr;
		zag(pftr);
	} else {
		if(_root == pftr) _root = bthr->rc;
		zag(bthr); zig(pftr);
	}
	pftr->ftr->RBc = oldRBc;
}

void redblacktree::SolveLostBlack(RB_Node* t_n) {
	RB_Node* nn = t_n;
	while(nn != _root) {
		RB_Node* pftr = nn->ftr;
		RB_Node* bthr = bro(nn);
		if(bthr->RBc == RB_COLOR_RED) {		////BB-1
			solve_BB1(t_n, bthr, pftr);
		}
		if(bthr->lc && bthr->lc->RBc == RB_COLOR_RED) {	////BB-3
			solve_BB3l(nn, pftr, bthr);
			return;
		} else if(bthr->rc && bthr->rc->RBc == RB_COLOR_RED) {	////BB-3
			solve_BB3r(nn, pftr, bthr);
			return;
		}
		if(pftr->RBc == RB_COLOR_RED) {			////BB-2R
			solve_BB2R(pftr, bthr);
			return;
		}								////BB-2B
		solve_BB2B(nn, pftr, bthr);
	}
}

typename
redblacktree::RB_Node* redblacktree::find(student const& v) {
	RB_Node* ptn = _root;
	_hot = NULL;
	while(ptn != NULL && ptn->val != v) {
		_hot = ptn;
		if(ptn->val > v) {
			ptn = ptn->lc;
		} else {
			ptn = ptn->rc;
		}
	}
	return ptn;
}

void redblacktree::clear() {
	removetree(_root);
	_size = 0;
	_root = NULL;
}

bool redblacktree::insert(student const& v) {
	RB_Node* ptn = find(v);
	if(ptn != NULL) return false;
	if(_hot == NULL) {
		init(v);
		return true;
	}
	++_size;
	ptn = new RB_Node(v, RB_COLOR_RED, _hot, NULL, NULL);
	if(_hot->val < v) {
		_hot->rc = ptn;
	} else {
		_hot->lc = ptn;
	}
	SolveDoubleRed(ptn);
	return true;
}

typename
redblacktree::iterator redblacktree::search(student const& v) {
	return iterator(find(v));
}

typename
redblacktree::iterator redblacktree::lower_bound(student const& v) {
	RB_Node* ptn = _root;
	_hot = NULL;
	while(ptn) {
		_hot = ptn;
		if(ptn->val >= v) {
			ptn = ptn->lc;
		} else {
			ptn = ptn->rc;
		}
	}
	if(_hot->val >= v) {
		ptn = _hot;
	} else {
		ptn = _hot->right_node();
	}
	return iterator(ptn);
}

typename
redblacktree::iterator redblacktree::upper_bound(student const& v) {
	RB_Node* ptn = _root;
	_hot = NULL;
	while(ptn) {
		_hot = ptn;
		if(ptn->val > v) {
			ptn = ptn->lc;
		} else {
			ptn = ptn->rc;
		}
	}
	if(_hot->val > v) {
		ptn = _hot;
	} else {
		ptn = _hot->right_node();
	}
	return iterator(ptn);
}

void* redblacktree::remove(student const& v) {
	RB_Node* ptn = find(v);
	if(ptn == NULL) {
		return NULL;
	}
	void* ret = ptn->val.rank;
	--_size;
	RB_Node* node_suc;
	while(ptn->lc || ptn->rc) {
		if(ptn->lc) {
			if(ptn->rc) {
				node_suc = ptn->succ();
			} else {
				node_suc = ptn->lc;
			}
		} else {
			node_suc = ptn->rc;
		}
		ptn->val = node_suc->val;
		ptn = node_suc;
	}
	if(!(ptn->RBc)) {
		SolveLostBlack(ptn);
	}
	if(ptn->ftr) {
		if(ptn->ftr->lc == ptn) {
			ptn->ftr->lc = NULL;
		} else {
			ptn->ftr->rc = NULL;
		}
	}
	if(_root == ptn) {
		_root = NULL;
	}
	delete ptn;
	return ret;
}

int redblacktree::size() {
	return _size;
}

bool redblacktree::empty() {
	return !_size;
}

void pre_dfs(link& lnk, redblacktree::RB_Node* ptn) {
	if(!ptn) return;
	pre_dfs(lnk, ptn->lc);
	lnk.push_back(ptn->val);
	ptn->val.rank = lnk.tailer;
	pre_dfs(lnk, ptn->rc);
}

unsigned long long student::BASE = 0x8000000000000000uLL;

class Solver {
	private:
		redblacktree rbt;
		link lnk;
		
		void Add(const char* stu_name, unsigned long long stu_id,
				 const char* stu_email, const char* stu_tele) {
			student t_stu(stu_name, stu_id, stu_email, stu_tele, NULL);
			lnk.push_back(t_stu);
			t_stu.rank = lnk.tailer;
			if(rbt.insert(t_stu)) {
				printf("Added\n");
			} else {
				printf("Already Exists\n");
				lnk.pop_back();
			}
		}
		
		void Delete(unsigned long long stu_id) {
			void* rrk = rbt.remove(student("", stu_id, "", "", NULL));
			if(rrk) {
				lnk.erase((link::link_node*)rrk);
				printf("Deleted\n");
			} else {
				printf("Not Found\n");
			}
		}
		
		void Update(const char* stu_name, unsigned long long stu_id,
					const char* stu_email, const char* stu_tele) {
			student n_stu(stu_name, stu_id, stu_email, stu_tele, NULL);
			redblacktree::iterator itr = rbt.search(n_stu);
			if(itr == rbt.end()) {
				printf("Not Found\n");
			} else {
				link::link_node* rrk = (link::link_node*)(*itr).rank;
				rrk->item = n_stu;
				n_stu.rank = rrk;
				(*itr) = n_stu;
				printf("Updated\n");
			}
		}
		
		void Sort() {
			lnk = rbt;
			printf("Sorted\n");
		}
		
		void Find(unsigned long long stu_id) {
			redblacktree::iterator itr = rbt.search(student("", stu_id, "", "", NULL));
			if(itr != rbt.end()) {
				if((double)stu_id < 1e+14) {
					printf("%s %llu %s %s\n", (*itr).name, stu_id, (*itr).email, (*itr).tele);
				} else {
					printf("%s NULL %s %s\n", (*itr).name, (*itr).email, (*itr).tele);
				}
			} else {
				printf("Not Found\n");
			}
		}
		
		void Print() {
			if(lnk.empty()) {
				printf("Empty\n");
				return;
			}
			link::link_node* ptn = lnk.header;
			printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
			for(register int i(0);i < lnk.size();++i) {
				if((double)ptn->item.ID < 1e+14) {
					printf("%8s %11llu %15s %11s\n",
						ptn->item.name, ptn->item.ID, ptn->item.email, ptn->item.tele);
				} else {
					printf("%8s %11s %15s %11s\n",
						ptn->item.name, "NULL", ptn->item.email, ptn->item.tele);
				}
				ptn = ptn->next;
			}
		}
		
		unsigned long long readll(const char* buf) {
			unsigned long long ret(0uLL);
			const char* ptr = buf;
			while(isdigit(*ptr)) {
				ret = (ret << 3uLL) + (ret << 1uLL) + (unsigned long long)(*ptr ^ 0x30);
				++ptr;
			}
			return ret;
		}
	public:
		void work() {
			char cmd[10], name[10], ID[15], email[20], tele[15];
			unsigned long long id_ull;
			while(~scanf("%s", cmd)) {
				if(strcmp(cmd, "ADD") == 0) {
					scanf("%s%s%s%s", name, ID, email, tele);
					if(ID[0] == 'N') {
						id_ull = ++student::BASE;
					} else {
						id_ull = readll(ID);
					}
					Add(name, id_ull, email, tele);
				} else if(strcmp(cmd, "DELETE") == 0) {
					scanf("%llu", &id_ull);
					Delete(id_ull);
				} else if(strcmp(cmd, "UPDATE") == 0) {
					scanf("%s%llu%s%s", name, &id_ull, email, tele);
					Update(name, id_ull, email, tele);
				} else if(strcmp(cmd, "SORT") == 0) {
					Sort();
				} else if(strcmp(cmd, "FIND") == 0) {
					scanf("%llu", &id_ull);
					Find(id_ull);
				} else {
					Print();
				}
			}
		}
};

int main() {
	Solver My_solver;
	My_solver.work();

	return 0;
}
