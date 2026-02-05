// Implement ClassPairTemplate class constructor and print methods

template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 f, T2 s) : first(f), second(s) {}

template <typename T1, typename T2>
void Pair<T1, T2>::print() const {
    cout << "(" << first << ", " << second << ")" << endl;
}
