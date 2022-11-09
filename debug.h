template <class T>void _print(T t){cerr << t;} 

template <class T, class V>void _print(pair <T, V> p); 

template <class T>void _print(vector <T> v);

template <class T> void _print(set <T> v); 

template <class T, class V> void _print(map <T, V> v); 

template <class T> void _print(multiset <T> v);

template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.pf); cerr << ","; _print(p.ps); cerr << "}";}

template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}

template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}

template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}

template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


#define deb(x) cerr << #x <<" "; _print(x); cerr << endl;
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#define deb2(x,y) cerr << #x <<" "; _print(x); cerr <<" "<< #y <<" "; _print(y); cerr << endl;
#define deb3(x,y,z) cerr << #x <<" "; _print(x); cerr <<" "<< #y <<" "; _print(y); cerr <<" "<< #z <<" "; _print(z); cerr << endl;