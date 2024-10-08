#include "Store.h"
#include <iomanip>
int main() {
	Store store;
	cin.setf(ios::skipws);
	store.AddInstrument("Pipiano", 15, 1);
	store.AddInstrument("Propiano", 1015, 1);
	store.AddInstrument("Tripolol", 2, 2);
	store.AddInstrument("Badum tssssssss", 234, 3);
	while (true) {
		system("cls");
		cout.fill('*');
		cout << setw(20)
			<< "\n1 - BUYBUYBUY"
			<< "\n2 - See cart\n"
			<< setw(20);

		int choice;
		cout << "\nChoose action: ";
		cin >> choice;

		switch (choice) {
		case 1:
			store.AddToCart();
			break;
		case 2:
			store.ShowCart();
			break;
		}
	}
	return 0;
}