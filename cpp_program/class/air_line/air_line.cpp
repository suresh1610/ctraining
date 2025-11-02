#include <iostream>
#include <string>
#include "air_line.hpp"
#include <memory>

using namespace std;
using namespace booking;
/*
class AirlineTicket {
	public:
		AirlineTicket() {}; 					// constructor
		~AirlineTicket() {};					// destructor
									//
		//behavior or methods
		int calculateTicketFare();
		void setPassengerName(const std::string name);
		std::string getPassengerName();

		void setTravelMile(const int miles);
	
	private:
		const int ticket_price = 1000;				// attribute or data members
		int passenger_miles;
		string passenger_name;
};
*/

void AirlineTicket::setPassengerName(const std::string& name) {
	passenger_name = name;
}

string AirlineTicket::getPassengerName() {
	return passenger_name;
}

void AirlineTicket::setTravelMile(const int miles) {
	passenger_miles = miles;
}

int AirlineTicket::calculateTicketFare() {
	return ticket_price * passenger_miles;
}

int main() {

	// this normal stack based class
	/*
	AirlineTicket ticket;

	ticket.setPassengerName("Suresh");
	ticket.setTravelMile(100);
	cout << "Hi "+ticket.getPassengerName()+" !\n" << "Your ticket price is " << ticket.calculateTicketFare() << endl;
	*/

	//heap based
	auto ticket = make_unique<AirlineTicket>();
	ticket->setPassengerName("Suresh");
	ticket->setTravelMile(100);
	cout << "Hi " + ticket->getPassengerName() + " :)\n" << "Your ticket price is " << ticket->calculateTicketFare() << endl;

	return 0;
}


