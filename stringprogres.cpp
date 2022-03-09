#include<iostream>
using namespace std;
int main(){
	string name = "Kadir";
	string surname = "Camuryapan";
	//Adding a string to other string
	string fullname = name + surname;
	//Compare 2 string each other
	bool compre = name==surname;
	//Delete a part of string
	string newname = name.erase(0,2);//erase 2 index from 0.index(k and a)
	//Select a part of string
	string newsurname = surname.substr(1,3); // select "adi"
	//Length of string
	int length = name.length();
	//Reach a char of string
	char a = name[1];
	//Add char to string with index
	string newname2 = name.insert(1,"aaa");
	//Find a char in string
	int index = name.find("a"); 
}
