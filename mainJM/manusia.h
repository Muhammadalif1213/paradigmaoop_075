#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia {
public:
	string nama;
	jantung varJantung;

	manusia(string pNama)
		: nama(pNama) {
		cout << name << "mati\n";
	}
	~manusia() {
		cout << nama << "mati\n";
	}
};
#endif // !MANUSIA_H