#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

class trie {
	private:
		struct Node {
			Node* son[128];
			Node* ftr;
			Node* failptr;

			int val;

			Node() : ftr(NULL), failptr(NULL), val(0) {
				memset(son, NULL, sizeof(son));
			}

		};
		
		Node* newnode() {
			return new Node();
		}

		Node* _root;
		bool isAC_AutoMaton;
	public:
		trie() : isAC_AutoMaton(false) {
			_root = newnode();
		}

		void insert(const char* s, int __ret) {
			if(isAC_AutoMaton) return;
			Node* ptn = _root;
			register int _len = strlen(s);
			register int __I = 0;
			while(_len--) {
				if(ptn->son[(int)s[__I]] == NULL) ptn->son[(int)s[__I]] = newnode();
				ptn = ptn->son[(int)s[__I]];
				++__I;
			}
			ptn->val += __ret;
		}

		void AhoCorasickAutomaton() {
			Node* ptn;
			Node* tmp_pt;
			_root->failptr = _root;
			queue<Node*> __Q;
			for(register int __I(0); __I < 128; ++__I) if(_root->son[__I]) {
					_root->son[__I]->failptr = _root;
					__Q.push(_root->son[__I]);
				}
			while(!__Q.empty()) {
				ptn = tmp_pt = __Q.front();
				__Q.pop();
				for(register int __I(0); __I < 128; ++__I) if(ptn->son[__I]) {
					ptn->son[__I]->failptr = ptn->failptr->son[__I];
					if(!(ptn->son[__I]->failptr)) ptn->son[__I]->failptr = _root;
					__Q.push(ptn->son[__I]);
				} else {
					ptn->son[__I] = ptn->failptr->son[__I];
				}
			}

			isAC_AutoMaton = true;
		}

		void find(char* _Src_text, int& c_v, int& fst) {
			int& cmd_v = c_v;
			int& first = fst;
			cmd_v = 0;
			first = -1;
			Node* ptn = _root;
			Node* tmp_pt;
			register int _len = strlen(_Src_text);
			for(register int __I(0); __I < _len; ++__I) {
				ptn = ptn->son[(int)_Src_text[__I]];
				if(ptn) {
					tmp_pt = ptn;
					while(tmp_pt->val) {
						if(!~first) {
							first = __I;
						}
						cmd_v += tmp_pt->val;
						tmp_pt = tmp_pt->failptr;
					}
				} else {
					ptn = _root;
				}
			}
		}
};
trie My_T;

char s[100];
char src[100];

int ANS1, ANS2;

int main() {
	//freopen("testdata.in", "r", stdin);
	trie My_T;
	fgets(src, 100, stdin);
	scanf("%s", s);
	My_T.insert(s, 1);
	My_T.AhoCorasickAutomaton();
	My_T.find(src, ANS1, ANS2);
	if(ANS1) {
		printf("%s: %d time(s), first at %d\n", s, ANS1, ANS2 - (int)strlen(s) + 1);
	} else {
		printf("%s: 0 time(s), first at -1\n", s);
	}

	return 0;
}