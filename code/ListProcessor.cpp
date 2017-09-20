// ListProcessor.cpp Jared Spaulding

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.cpp"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	// test size method here
	cout << "cows list size  :  " << cows.getSize() << endl;
	cout << "horses list size:  " << horses.getSize() << endl;
	cout << "pigs list size  :  " << pigs.getSize() << endl << endl;

	// test sum method here
	cout << "cows list sum  :  " << cows.getSum() << endl;
	cout << "horses list sum:  " << horses.getSum() << endl;
	cout << "pigs list sum  :  " << pigs.getSum() << endl << endl;

	// test insetAtlast here
	cows.insertAsLast(4.45);
	horses.insertAsLast(2.98);
	pigs.insertAsLast(12.23);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;


	cout << "End of code" << endl;

	return 0;
}
