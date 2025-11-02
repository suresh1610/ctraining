#pragma once

#include <string>

namespace booking { // namespace this class defined under booking namespace
	class AirlineTicket {
		public:
			AirlineTicket() {};  // constructor
			~AirlineTicket() {}; // destructor
			
			// method or behaviour
			int calculateTicketFare();
			void setPassengerName(const std::string& name);
			std::string getPassengerName();
			void setTravelMile(const int miles);
		
		private:

			// attributes or data members
			const int ticket_price = 1000;
			int passenger_miles;
			std::string passenger_name;
	};
}
