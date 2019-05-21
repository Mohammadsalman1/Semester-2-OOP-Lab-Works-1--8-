
#include "Student.h"
#include "Stalast.h"
#include <vector>

int main() 
{

	Student Stud1("Programist", "IKBO-14-16", "Fab Rice", 17, male);
	Student Stud2("Robotitian", "INGO-01-23", "Aria Opera", 20, female);
	Student Stud3("Doctor", "MBVO-12-12", "Jane Don", 45, female);
	Student Stud4("Programist", "ECTN-11-44", "John Claude", 23, male);
	Student Stud5("Veterinary", "IMMO-31-08", "Chai Ahn Tu", 31, male);
	Stalast stal1("Law", "INGO-03-07", "Keba Tatien", 25, male);
	Stalast stal2("Agriculture", "IRBO-13-00", "Alain Muha", 19, male, 175, 67);
	Stalast stal3("Finance", "IKBO-03-10", "Rita Ora", 22, female, 166, 48);
	Stalast stal4("Robotics", "ECTO-34-00", "Super Man", 21, male, 199, 105);
	Stalast stal5;
	Stalast Stal6;
	
	stal5.getInfoStal();
	stal1.getInfoStal();
	Stud3.print();


	
	std::cin.get();

}