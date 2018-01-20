#include <iostream>
#include <string>
using namespace std;

class Laptop{
	public:
	void spec(string Ghz);
	string nama, cpu;
};

int main(){
	Laptop Asus, Acer;
	
	Acer.nama = "Laptop Acer E14";
	Acer.cpu  = "core i7-4510U";
	Asus.nama = "Laptop Asus";
	Asus.cpu  = "core i7 i7-7700HQ";
	
	cout << (Acer.nama);
	cout << (Acer.cpu);
	Acer.spec("2.0Ghz");
	
	cout << (Asus.nama);
	cout << (Asus.cpu);
	Asus.spec("3.0Ghz");
	
}

void Laptop::spec(string Ghz){
	cout<<"Spec"<<Ghz<<"Imba"<<endl;
}
