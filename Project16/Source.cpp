#include "String.h"
int main() {
	String s("hello");
	String s1(5, 'a');
	String s3(5, 'v');

	s1.getAt(0) = 'z';
	cout << s.getStrRep() << endl;
	cout << s1.getStrRep() << endl;
	cout << "---------------------------------------------------" << endl;
	String s2(5);
	cout << "s2" << endl;
	cout << s2.getStrRep() << endl;
	cout << "---------------------------------------------------" << endl;
	s1.AddCharAt(2, 'X');
	cout << s1.getStrRep() << endl;
	cout << "---------------------------------------------------" << endl;
	s1.DelCharAt(2);
	cout << s1.getStrRep() << endl;
	cout << "---------------------------------------------------" << endl;
	s1.ConcatStr(s3);
	cout << s1.getStrRep() << endl;
	cout << "---------------------------------------------------" << endl;

	s1.ConcatStr("world");
	cout << s1.getStrRep() << endl;
	cout << "---------------------------------------------------" << endl;

	s1 + s3;
	cout << s1.getStrRep() << endl;
	cout << "---------------------------------------------------" << endl;

	s1 + "sjdghfjsh";
	cout << s1.getStrRep() << endl;
	cout << "---------------------------------------------------" << endl;

	s1.AddStrAt(s3, 2);
	cout << s1.getStrRep() << endl;
	cout << "---------------------------------------------------" << endl;

	s1.AddStrAt("TYHFFD", 2);
	cout << s1.getStrRep() << endl;
	cout << "---------------------------------------------------" << endl;


	
	s1.DelStrAt(2, 7);
	cout << s1.getStrRep() << endl;
	cout << "---------------------------------------------------" << endl;

	char *s7 = s1.getRange(2, 7);
	cout << s7 << endl;
	cout << "---------------------------------------------------" << endl;

	String what("av");
	int index = s1.SubStr(what);
	cout << index << endl;
	cout << "---------------------------------------------------" << endl;

	char *what1 = "av";
	int index1 = s1.SubStr(what1);
	cout << index1 << endl;
	cout << "---------------------------------------------------" << endl;

	String s8("tgtgtr");
	cout << "Before: " << s8.getStrRep() << endl;
	char *what2 = "av";
	char *rep = "KT";
	s8.Replace(what2, rep);
	cout << "After: " << s8.getStrRep() << endl;
	cout << "---------------------------------------------------" << endl;


	String s9("tyuiww");
	cout << "Before: " << s9.getStrRep() << endl;
	String what3("yr");
	String rep1("ST");
	s9.Replace(what3, rep1);
	cout << "After: " << s9.getStrRep() << endl;
	cout << "---------------------------------------------------" << endl;

	system("pause");
	return 0;
}
